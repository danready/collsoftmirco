// GNU General Public License Agreement
// Copyright (C) 2015-2016 Daniele Berto daniele.fratello@gmail.com
//
// CollSoft is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software Foundation. 
// You must retain a copy of this licence in all copies. 
//
// This program is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
// PARTICULAR PURPOSE. See the GNU General Public License for more details.
// ---------------------------------------------------------------------------------

#include "Input.h"
#include "serialib.h"
#include "BasicModbusLibrary.h"
#include "ApplicationSetup.h"
#include "OutputModule.h"
#include "LogFile.h"
#include "TcpUser.h"
#include "CommunicationObject.h"
#include "DefineGeneral.h"
#include "Utils.h"
#include "DriverFunction.h"
#include "CommandExecutor.h"
#include "Linear.h"

#include <dirent.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <iostream>
#include <thread>
#include <regex.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <iostream>
#include <vector>


using namespace std;


int main(int argc, char *argv[])
{	
	//This variables is for a simple purpose: at every end of the main cycle
	//count_check is incremented by one and, when it reaches 60, a response with
	//the actual position state of the drivers is send to the clients connected
	//to the server.
	int count_check = 0;

	//This is a global variables: it is declared in CommanderExecutor.h and defined in CommandExecutor.c
	//when is equal to 0 the user have not loaded the encoder parameters yet. When it is equal to 1 the
	//user have done it. 
	loading_encoder_from_file_okay = 0;


    //Be careful: global variables initialization!
   
    //Set to zero the arrays that will contain the serial number of the drivers
	bzero (SerialNumberArray, MAXIMUM_DRIVER);
	bzero (SerialNumberArrayParagorn, MAXIMUM_DRIVER);
	bzero (SerialNumberArrayTmp, MAXIMUM_DRIVER);
	
    //Set to -1 the arrays that will contain the parameters for each drivers.
	for (int par = 0; par < MAXIMUM_DRIVER; par ++)
	{
		ParameterArray[par].drv_num = -1;
		ParameterArray[par].max_vel = -1;
		ParameterArray[par].vel_home = -1;
		ParameterArray[par].acceleration = -1;
		ParameterArray[par].deceleration = -1;
		ParameterArray[par].phase_current = -1;
		ParameterArray[par].analog_output0 = -1;				
		
		ParameterArrayParagorn[par].drv_num = -1;
		ParameterArrayParagorn[par].max_vel = -1;
		ParameterArrayParagorn[par].vel_home = -1;
		ParameterArrayParagorn[par].acceleration = -1;
		ParameterArrayParagorn[par].deceleration = -1;
		ParameterArrayParagorn[par].phase_current = -1;
		ParameterArrayParagorn[par].analog_output0 = -1;
		
		ParameterArrayTmp[par].drv_num = -1;
		ParameterArrayTmp[par].max_vel = -1;
		ParameterArrayTmp[par].vel_home = -1;
		ParameterArrayTmp[par].acceleration = -1;
		ParameterArrayTmp[par].deceleration = -1;
		ParameterArrayTmp[par].phase_current = -1;
		ParameterArrayTmp[par].analog_output0 = -1;
	}

    //Set to -1 the arrays that will contain the values obtained by the encoding procedure for each driver. 
	for (int enc = 0; enc < MAXIMUM_DRIVER; enc++)
	{
		EncoderArrayValue[enc].drv_num = -1;
		EncoderArrayValue[enc].slope = -1;
		EncoderArrayValue[enc].intercept = -1;
		EncoderArrayValue[enc].coefficient = -1;
	}
	
	//Set to 0 the struct GeneralStatus.
	//If GeneralStatus.assoc_file_status == 1 means the user has already executed the procedure to check
	//the association between the serial numbers contained in the SerialDrvLog.txt file and the real situation.
	//If GeneralStatus.par_file_status = 1 means the user has already executed the procedure to check
	//the association between the parameters contained in the FileParLog.txt file and the real situation.
	//If GeneralStatus.encoder_file_status = 1 means the user has already executed the procedure to check
	//the association between the encoder values contained in the EncoderLog.txt file and the real situation.	
	GeneralStatus.assoc_file_status = 0;
	GeneralStatus.par_file_status = 0;
	GeneralStatus.encoder_file_status = 0;

	//if the variable STATE_CONNECT == 0, it means the user has not send the 'connect programmerpath' command yet or the connection attempt is failed. 
	//Maybe, this variable should be global.
	bool STATE_CONNECT = 0;

	//handler for the modbus programmer resource
	modbus_t* ctx;

	//buffer array will contain the input insert via stdin.
	char* buffer;
	buffer = (char*) malloc (STANDARDBUFFERLIMIT);

	//The ApplicationSetup singleton contains some useful variables for the program like the path of the log files.
	ApplicationSetup *main_application_setup;
	main_application_setup = ApplicationSetup::Instance ();
	main_application_setup->FetchInputMode(main_application_setup->application_setup_input_mode);

	//The Input object fetches the Input from the stdin.
	Input* mioinput;

	//The OutputModule object sends the input to the user who has sent the command.
	OutputModule *output_module;
	output_module = OutputModule::Instance ();

	//The LogFile object writes to the log file setted by LogFileSet method.
	LogFile *logfile;
	logfile = LogFile::Instance ();

	//The TcpUser object records the input obtained by the CommunicationObject mioTCP
	TcpUser command_received_by_user;

	//The CommunicationObject manages the input obtained cia TCP/IP
	CommunicationObject mioTCP;

	//CommunucationObject initialization.
	mioTCP.CommunicationObjectInit ();

	//If the user can send input to the program also via stdin
	if (main_application_setup->input_mode != ONLYTCP) {
		printf("CollSoft version 0.1\nPress help for the available command list\n");
		mioinput = new Input();
	}

	//Saving in the LogFile the beginning of the program recording also the currente date.
	//Warning: all the following functions like LogFileWriteString will write
	//on the log file specified by LogFileSet. If you want to write on another file you have
	//to use again the function LogFileSet.
	logfile->LogFileSet(main_application_setup->application_setup_general_log_path);
	
	logfile->LogFileWriteString("################################################\n");
	logfile->LogFileWriteString(GetTime() + ": Welcome! CollSoft software start\n");
	logfile->LogFileWriteString("################################################\n\n");	
	
	//CollSoft software terminate only if a user sends it the 'exit' command or if he kills it with the KillProcess button in the
	//CollSoft ClientGui.
	while (1)
	{
		//If the user can send input to the program also via stdin
		if (main_application_setup->input_mode != ONLYTCP)
		{
			fflush (stdout);
		}

		//Setting to zero buffer. The buffer array will contain the stdin input.
		bzero (buffer, STANDARDBUFFERLIMIT);

		//If the input can be sent either via stdin and via tcp/ip
		//N.B. If both of input type are present, tcp/ip input is preferred
		if (main_application_setup->input_mode == ALL)
		{

			//Get stdin input
			mioinput->GetInput (buffer);

			//If stdin input is not empty
			if (strlen (buffer) != 0)
			{
				//Enabling the output to the stdout
				output_module->OutputModuleStdoutOn();
				
				//Disbling the output to the TCP/IP
				output_module->OutputModuleSockidOff();
				
				//Recording the command in the LogFile
				//Warning: all the following functions like LogFileWriteString will write
				//on the log file specified by LogFileSet. If you want to write on another file you have
				//to use again the function LogFileSet.				
				logfile->LogFileSet(main_application_setup->application_setup_general_log_path);
				string buffer_tmp = buffer;
				logfile->LogFileWriteString(GetTime() + ": Command '" + buffer_tmp + "' sent via stdin\n\n");

			}

			//Get tcp/ip input
			command_received_by_user = mioTCP.GetCommand ();

			//If tcp/ip input is not empty
			if (command_received_by_user.command_sent_by_user[0] != 0)
			{
				//Disabling the Output to the stdout
				output_module->OutputModuleStdoutOff();
				//Enabling the Output to the TCP/IP recording the user_sockid of the user who has sent the command.
				output_module->OutputModuleSockidOn(command_received_by_user.user_sockid);
				
				//Recording the command in the LogFile
				//Warning: all the following functions like LogFileWriteString will write
				//on the log file specified by LogFileSet. If you want to write on another file you have
				//to use again the function LogFileSet.							
				logfile->LogFileSet(main_application_setup->application_setup_general_log_path);
				string buffer_tmp = command_received_by_user.command_sent_by_user;
				logfile->LogFileWriteString(GetTime() + ": Command '" + buffer_tmp + "' sent via tcp/ip by user " + to_string(command_received_by_user.user_sockid) + "\n\n");				
				
			}
			
			//N.B. If both of input type are present, tcp/ip input is preferred
			
		}  //if (main_application_setup->input_mode == ALL)

		//If the input can be sent only via stdin
		else if (main_application_setup->input_mode ==
		ONLYUSER)
		{

			//Get stdin input
			mioinput->GetInput (buffer);

			//If stdin input is not empty
			if (strlen (buffer) != 0)
			{
				//Enabling the output to the stdout
				output_module->OutputModuleStdoutOn();
				
				//Disbling the output to the TCP/IP
				output_module->OutputModuleSockidOff();
				
				//Recording the command in the LogFile
				//Warning: all the following functions like LogFileWriteString will write
				//on the log file specified by LogFileSet. If you want to write on another file you have
				//to use again the function LogFileSet.						
				logfile->LogFileSet(main_application_setup->application_setup_general_log_path);
				string buffer_tmp = buffer;
				logfile->LogFileWriteString(GetTime() + ": Command '" + buffer_tmp + "' sent via stdin in date\n\n");
				
			}
			
		}  //if (main_application_setup->input_mode == ONLYUSER)


		//If the input can be sent only via tcp/ip
		else if (main_application_setup->input_mode ==
		ONLYTCP)
		{

			//Get tcp/ip input
			command_received_by_user = mioTCP.GetCommand ();

			//If tcp/ip input is not empty
			if (command_received_by_user.command_sent_by_user[0] != 0)
			{
				//Disabling the Output to the stdout
				output_module->OutputModuleStdoutOff();
				
				//Enabling the Output to the TCP/IP recording the user_sockid of the user who has sent the command.
				output_module->OutputModuleSockidOn(command_received_by_user.user_sockid);

				//Recording the command in the LogFile
				//Warning: all the following functions like LogFileWriteString will write
				//on the log file specified by LogFileSet. If you want to write on another file you have
				//to use again the function LogFileSet.						
				logfile->LogFileSet(main_application_setup->application_setup_general_log_path);
				string buffer_tmp = command_received_by_user.command_sent_by_user;
				logfile->LogFileWriteString(GetTime() + ": Command '" + buffer_tmp + "' sent via tcp/ip by user " + to_string(command_received_by_user.user_sockid) + "\n\n");				
				
			}

		}  //if (main_application_setup->input_mode == ONLYTCP)

		//If an input has been received
		if (strlen (buffer) != 0
		|| command_received_by_user.command_sent_by_user[0] != 0)
		{

			//Exit: this command can be sent only via stdin.
			if(reg_matches (buffer, "^[Ee][Xx][iI][tT][ \t]*$")) 			
			{
				output_module->Output("Exiting to CollSoft program....\n");
				
				if (main_application_setup->input_mode != ONLYTCP) {
					fflush(stdout);
				}
				
				return 0;
			}

			//connect absoluteprogrammerpath
			//This command tries to connect the server with the programmer indicated by "absoluteprogrammerpath"
			else if(reg_matches (buffer, "^[Cc][Oo][Nn][Nn][Ee][Cc][Tt][ \t][A-z0-9/\\]{1,100}[ \t]*$") || reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Oo][Nn][Nn][Ee][Cc][Tt][ \t][A-z0-9/\\]{1,100}[ \t]*$") )
			{
				//Pointer to store the absoluteprogrammerpath
				char* tmp_pointer;
				
				//if the command was sent via TCP/IP
				if (reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Oo][Nn][Nn][Ee][Cc][Tt][ \t][A-z0-9/\\]{1,100}[ \t]*$")) 
				{
					tmp_pointer = SkipWord(command_received_by_user.command_sent_by_user);
				}
				//if the command was sent via stdin
				else 
				{
					tmp_pointer = SkipWord(buffer);
				}
				
				//STATE_CONNECT will record the connection status.
				ctx = Connect(ctx, &STATE_CONNECT, tmp_pointer);
				
			}

			//help
			//This command prints the list of the commands that the server can execute. 
			else if(reg_matches (buffer, "^[Hh][Ee][Ll][Pp][ \t]*$") || reg_matches (command_received_by_user.command_sent_by_user, "^[Hh][Ee][Ll][Pp][ \t]*$"))
			{
				//Printing the commands list.
				HelpCommand();
			}

			//read_serial_log
			//This command read the file SerialDrvLog.txt
			else if(reg_matches (buffer, "^[Rr][Ee][Aa][Dd]_[Ss][Ee][Rr][Ii][Aa][Ll]_[Ll][Oo][Gg][ \t]*$") ||
			reg_matches (command_received_by_user.command_sent_by_user, "^[Rr][Ee][Aa][Dd]_[Ss][Ee][Rr][Ii][Aa][Ll]_[Ll][Oo][Gg][ \t]*$")) 
			{
					//Warning: all the following functions like LogFileWriteString will write
					//on the log file specified by LogFileSet. If you want to write on another file you have
					//to use again the function LogFileSet.				
					logfile->LogFileSet(main_application_setup->application_setup_serial_drv_log_file_path);
					logfile->LogFileRead();
			}
				
			//read_par_log
			//This command read the file FileParLog.txt
			else if(reg_matches (buffer, "^[Rr][Ee][Aa][Dd]_[Pp][Aa][Rr]_[Ll][Oo][Gg][ \t]*$") ||
			reg_matches (command_received_by_user.command_sent_by_user, "^[Rr][Ee][Aa][Dd]_[Pp][Aa][Rr]_[Ll][Oo][Gg][ \t]*$")) 
			{
					//Warning: all the following functions like LogFileWriteString will write
					//on the log file specified by LogFileSet. If you want to write on another file you have
					//to use again the function LogFileSet.				
					logfile->LogFileSet(main_application_setup->application_setup_file_par_log_path);
					logfile->LogFileRead();
			}

			//read_log
			//This command read the file GeneralLog.txt
			else if(reg_matches (buffer, "^[Rr][Ee][Aa][Dd]_[Ll][Oo][Gg][ \t]*$") ||
			reg_matches (command_received_by_user.command_sent_by_user, "^[Rr][Ee][Aa][Dd]_[Ll][Oo][Gg][ \t]*$")) 
			{
					//Warning: all the following functions like LogFileWriteString will write
					//on the log file specified by LogFileSet. If you want to write on another file you have
					//to use again the function LogFileSet.				
					logfile->LogFileSet(main_application_setup->application_setup_general_log_path);
					logfile->LogFileRead();
			}
			
			//read_encoder_log
			//This command read the file EncoderLog.txt			
			else if(reg_matches (buffer, "^[Rr][Ee][Aa][Dd]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Ll][Oo][Gg][ \t]*$") ||
			reg_matches (command_received_by_user.command_sent_by_user, "^[Rr][Ee][Aa][Dd]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Ll][Oo][Gg][ \t]*$")) 
			{
					//Warning: all the following functions like LogFileWriteString will write
					//on the log file specified by LogFileSet. If you want to write on another file you have
					//to use again the function LogFileSet.				
					logfile->LogFileSet(main_application_setup->application_setup_encoder_log_path);
					logfile->LogFileRead();
			}			

			//check_drv_assoc
			//This command check the association between the drivers serial number found in the SerialDrvLog.txt file and the real situation.
			else if(reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Dd][Rr][Vv]_[Aa][Ss][Ss][Oo][Cc][ \t]*$") ||
			reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Hh][Ee][Cc][Kk]_[Dd][Rr][Vv]_[Aa][Ss][Ss][Oo][Cc][ \t]*$")) 
			{
				if (STATE_CONNECT == 1)
				{
					//The following function CheckDrvAssoc needs to communicate with the client. So, it is created a reference to the
					//CommunicationObject mioTCP called mioTCP_reference.
					CommunicationObject& mioTCP_reference = mioTCP;

					//Launching the routine to check the association between the drivers serial number found in the SerialDrvLog.txt
					//file and the real situation.
					CheckDrvAssoc(mioTCP_reference, mioinput, ctx);
				}
				else
				{
					output_module->Output("Check Drv Assoc: Error: driver not connected. Digit 'connect programmerpath'.\n");				
				}
			}
			
			//check_par_assoc
			//This command check the association between the drivers parameters found in the FileParLog.txt file and the real situation.
			else if(reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Pp][Aa][Rr]_[Aa][Ss][Ss][Oo][Cc][ \t]*$") ||
			reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Hh][Ee][Cc][Kk]_[Pp][Aa][Rr]_[Aa][Ss][Ss][Oo][Cc][ \t]*$")) 
			{
				if (STATE_CONNECT == 1)
				{
					//The following function CheckParAssoc needs to communicate with the client. So, it is created a reference to the
					//CommunicationObject mioTCP called mioTCP_reference.				
					CommunicationObject& mioTCP_reference = mioTCP;

					//Launching the routine to check the association between the drivers parameters found in the FileParLog.txt file 
					//and the real situation.
					CheckParAssoc(mioTCP_reference, mioinput, ctx);
				}
				else
				{
					output_module->Output("Check Par Assoc: Error: driver not connected. Digit 'connect programmerpath'.\n");				
				}
			}

			//check_encode_assoc
			//This command check the association between the encoder values contained in the EncoderLog.txt file and the real situation.	
			else if(reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Ee][Nn][Cc][Oo][Dd][Ee]_[Aa][Ss][Ss][Oo][Cc][ \t]*$") ||
			reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Hh][Ee][Cc][Kk]_[Ee][Nn][Cc][Oo][Dd][Ee]_[Aa][Ss][Ss][Oo][Cc][ \t]*$")) 
			{
				if (STATE_CONNECT == 1)
				{
					//The following function CheckEncodeAssoc needs to communicate with the client. So, it is created a reference to the
					//CommunicationObject mioTCP called mioTCP_reference.					
					CommunicationObject& mioTCP_reference = mioTCP;

					//Launching the routine to check the association between the encoder values contained in the EncoderLog.txt file
					//and the real situation.
					CheckEncodeAssoc(mioTCP_reference, mioinput, ctx);
				}
				else
				{
					output_module->Output("Check Par Assoc: Error: driver not connected. Digit 'connect programmerpath'.\n");				
				}
			}
			
			//get_par drvnum
			//Prints the parameters of the driver indicated by drvnum. Parameters are: max_vel, velhome, acceleration, deceleration, phase_current, analog_output0.
			else if(reg_matches (buffer, "^[Gg][Ee][Tt]_[Pp][Aa][Rr][ \t][0-9]{1,2}[ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Pp][Aa][Rr][ \t][0-9]{1,2}[ \t]*$"))
			{
				int get_par_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Pp][Aa][Rr][ \t][0-9]{1,2}[ \t]*$"))
				{
					get_par_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					get_par_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}
					
				if (STATE_CONNECT == 1)
				{
					GetPar(ctx, get_par_drv);			
				}
				else
				{
					SendFailedGetPar(get_par_drv);
				}
				
			}	
			
			//Check_position drvnum
			//Check if the actual position of the driver indicated by drvnum correspond with the one indicated by the encoder (analog_input0).
			else if(reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t][0-9]{1,2}[ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Hh][Ee][Cc][Kk]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t][0-9]{1,2}[ \t]*$"))
			{
				int get_pos_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t][0-9]{1,2}[ \t]*$"))
				{
					get_pos_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					get_pos_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}
					
				if (STATE_CONNECT == 1)
				{
					//If the user has not loaded the encoding values from EncoderLog.txt.
					if (loading_encoder_from_file_okay == 0)
						output_module->Output("Check position warning! You have to press the button Load Encoder From File in General tab or you have to digit load_encoder_from_file command in order to accomplished the check position procedure in a consistent way!\n");

					CheckPositionEncoderSingle(ctx, get_pos_drv);			
				}
				else
				{
					output_module->Output("Exp: error, driver not connected. Digit 'connect programmerpath'.\n");
					SendFailedGetStatusPos(get_pos_drv);
				}
				
			}				
					
			//set_par drvnum max_vel acceleration deceleration PhaseCurrent AnalogOutput0
			//set max_vel (Each unity of maxvel correspond to 0.25rpm), acceleration and deceleration (Each unity of acceleration and deceleration correspond to 1rpm/s),
			//phasecurrent and AnalogOutput0 of the driver specified with drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Pp][Aa][Rr]([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+-{0,1}[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})[ \t]*$") ||
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Pp][Aa][Rr]([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+-{0,1}[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})[ \t]*$"))
			{

				char* set_par_contents;
				
				int set_par_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Pp][Aa][Rr]([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+-{0,1}[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})[ \t]*$"))
				{
					set_par_drv = SkipWordAndAtoi(buffer);
					set_par_contents = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					set_par_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					set_par_contents = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetPar(ctx, set_par_drv, set_par_contents);
				}
				else
				{
					SendFailedGetPar(set_par_drv);
				}
			}				
			
			//Homing drvnum
			//Executes the homing procedure for the driver indicated by drvnum. 
			else if (reg_matches (buffer,"^[Hh][Oo][Mm][Ii][Nn][Gg][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Hh][Oo][Mm][Ii][Nn][Gg][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				int homing_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer,"^[Hh][Oo][Mm][Ii][Nn][Gg][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					homing_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					homing_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					Homing(ctx, homing_drv);
				}
				else
				{
					output_module->Output("homing: " + to_string(homing_drv) + " Programmer not connected, digit 'connect programmerpath'.\n " + to_string(NEGATIVE_RESPONSE_TO_CLIENT));
				}
			}
			
			//get_mov_par drvnum
			//This command obtains the actual position and the AnalogInput0 values of the driver indicated by drvnum.
			else if (reg_matches (buffer,"^[Gg][Ee][Tt]_[Mm][Oo][Vv]_[Pp][Aa][Rr][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Mm][Oo][Vv]_[Pp][Aa][Rr][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				int get_mov_par_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer,"^[Gg][Ee][Tt]_[Mm][Oo][Vv]_[Pp][Aa][Rr][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					get_mov_par_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					get_mov_par_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetMovePar(ctx, get_mov_par_drv);
				}
				else
				{
					output_module->Output("get_move_par: " + to_string(get_mov_par_drv) + " Programmer not connected, digit 'connect programmerpath'.\n " + to_string(NEGATIVE_RESPONSE_TO_CLIENT));
				}
			}	
			
			//Encode drvnum
			//This command start the encoding procedure for the driver indicated by drvnum.
			else if (reg_matches (buffer,"^[Ee][Nn][Cc][Oo][Dd][Ee][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ee][Nn][Cc][Oo][Dd][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				EncoderStruct drv_enc_parameter;
				EncoderStruct& drv_enc_parameter_reference = drv_enc_parameter;
				
				//char* buffer_encoder_value;
				
				int encoder_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer,"^[Ee][Nn][Cc][Oo][Dd][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					encoder_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					encoder_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					if (ENCODINGHOME == 1)
					{
						Homing(ctx, encoder_drv);
					}
					Encode(ctx, encoder_drv, drv_enc_parameter);
					
					if (encoder_drv <= MAXIMUM_DRIVER)
					{
						
						//Warning! Global variable modified in order to allow check_position and check_driver
						//status operations.
						loading_encoder_from_file_okay = 1;
						
						EncoderArrayValue[encoder_drv - 1].drv_num = drv_enc_parameter.drv_num;
						EncoderArrayValue[encoder_drv - 1].slope = drv_enc_parameter.slope;
						EncoderArrayValue[encoder_drv - 1].intercept = drv_enc_parameter.intercept;
						EncoderArrayValue[encoder_drv - 1].coefficient = drv_enc_parameter.coefficient;
						
					}
				}
				else
				{
					output_module->Output("get_encoder_par: " + to_string(encoder_drv) + " Programmer not connected, digit 'connect programmerpath'.\n " + to_string(NEGATIVE_RESPONSE_TO_CLIENT));
				}				
			}		
			
			//Move_to drvnum targetposition
			//This command set to targetposition the target position of the driver indicated by drvnum.
			else if (reg_matches (buffer,"^[Mm][Oo][Vv][Ee]_[Tt][Oo][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Mm][Oo][Vv][Ee]_[Tt][Oo][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$"))
			{
				int move_to_value;
				
				int move_to_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer,"^[Mm][Oo][Vv][Ee]_[Tt][Oo][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$"))
				{
					move_to_drv = SkipWordAndAtoi(buffer);
					move_to_value = SkipWordAndAtoi(SkipWord(buffer));
				}
				//if the command was sent via TCP/IP
				else
				{
					move_to_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					move_to_value = SkipWordAndAtoi(SkipWord(command_received_by_user.command_sent_by_user));
				}				
			  
				if (STATE_CONNECT == 1)
				{
					MoveTo(ctx, move_to_drv, move_to_value);
				}
				else
				{
					output_module->Output("get_move_par: " + to_string(move_to_drv) + " Programmer not connected, digit 'connect programmerpath'.\n " + to_string(NEGATIVE_RESPONSE_TO_CLIENT));
				}
			}				
			
			//Get_all_parameter
			//This command is equivalent to execute get_move_par drvnum, get_par drvnum and check_position for the all drivers.
			else if(reg_matches (buffer, "^[Gg][Ee][Tt]_[Aa][Ll][Ll]_[Pp][Aa][Rr][Aa][Mm][Ee][Tt][Ee][Rr][ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Aa][Ll][Ll]_[Pp][Aa][Rr][Aa][Mm][Ee][Tt][Ee][Rr][ \t]*$"))
			{
				int get_par_drv = 0;
					
				if (STATE_CONNECT == 1)
				{
					for ( get_par_drv = 1; get_par_drv <= MAXIMUM_DRIVER ; get_par_drv++)
					{
						CheckDriverStatus(ctx, get_par_drv);
						GetMovePar(ctx, get_par_drv);
						GetPar(ctx, get_par_drv);
						CheckPositionEncoderSingle(ctx, get_par_drv);
					}
				}
				else
				{
					for ( get_par_drv = 1; get_par_drv <= MAXIMUM_DRIVER ; get_par_drv++)
					{	
						output_module->Output("check_driver_status: " + to_string(get_par_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
						SendFailedGetPar(get_par_drv);
						SendFailedGetMovPar(get_par_drv);
						SendFailedGetStatusPos(get_par_drv);
					}	
				}
				
			}
			
			//get_all_driver_status
			//This command is equivalent to execute get_move_par drvnum, get_par drvnum and check_position for the all drivers.
			else if(reg_matches (buffer, "^[Gg][Ee][Tt]_[Aa][Ll][Ll]_[Dd][Rr][Ii][Vv][Ee][Rr]_[Ss][Tt][Aa][Tt][Uu][Ss][ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Aa][Ll][Ll]_[Dd][Rr][Ii][Vv][Ee][Rr]_[Ss][Tt][Aa][Tt][Uu][Ss][ \t]*$"))
			{
				int get_par_drv = 0;
					
				if (STATE_CONNECT == 1)
				{
					for ( get_par_drv = 1; get_par_drv <= MAXIMUM_DRIVER ; get_par_drv++)
					{
						CheckDriverStatus(ctx, get_par_drv);
					}
				}
				else
				{
					for ( get_par_drv = 1; get_par_drv <= MAXIMUM_DRIVER ; get_par_drv++)
					{	
						output_module->Output("check_driver_status: " + to_string(get_par_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					}	
				}
				
			}						
			
			//Homing_mult drvnum1 drvnum2 drvnum3 drvnum....
			//This command execute the homing procedure for the driver indicated by drvnum1, drvnum2, drvnum3, drvnum....
			else if (reg_matches (buffer, "^[Hh][Oo][Mm][Ii][Nn][Gg]_[Mm][Uu][Ll][Tt]([ \t]+[0-9]{1,2}){1,14}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Hh][Oo][Mm][Ii][Nn][Gg]_[Mm][Uu][Ll][Tt]([ \t]+[0-9]{1,2}){1,14}[ \t]*$"))
			{
				
				int num_arg_homing = 0;
				
				int* homing_drv_array = NULL;
				
				char* homing_mult_punt = NULL; 
				
				int i = 0;
				
				char* homing_mult_contents;
				
				
				if (reg_matches (buffer, "^[Hh][Oo][Mm][Ii][Nn][Gg]_[Mm][Uu][Ll][Tt]([ \t]+[0-9]{1,2}){1,14}[ \t]*$"))
				{
					homing_mult_contents = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					homing_mult_contents = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					
					num_arg_homing = FindNumArg(homing_mult_contents);
					
					homing_drv_array = (int*)malloc(num_arg_homing*sizeof(int));
					
					homing_mult_punt = homing_mult_contents;
					
					for (i=0; i<num_arg_homing; i++)
					{
						homing_mult_punt = SkipWord(homing_mult_punt);
						homing_drv_array[i] = atoi(homing_mult_punt);
						
						Homing(ctx, homing_drv_array[i]);
					}
					
					free(homing_drv_array);

				}
				else
				{
					
					num_arg_homing = FindNumArg(homing_mult_contents);
					
					homing_drv_array = (int*)malloc(num_arg_homing*sizeof(int));
					
					homing_mult_punt = homing_mult_contents;
					
					for (i=0; i<num_arg_homing; i++)
					{
						homing_mult_punt = SkipWord(homing_mult_punt);
						homing_drv_array[i] = atoi(homing_mult_punt);
						output_module->Output("homing: " + to_string(homing_drv_array[i]) + " Programmer not connected, digit 'connect programmerpath'.\n " + to_string(NEGATIVE_RESPONSE_TO_CLIENT));
					}
					
					free(homing_drv_array);					
					
				}
			}
			
			//Moveto_mult targetposition drvnum1 drvnum2 drvnum3 drvnum....
			//this command set the target position to targetposition of the drivers indicated by drvnum1, drvnum2, drvnum3, drvnum.... 
			else if (reg_matches (buffer, "^[Mm][Oo][Vv][Ee][Tt][Oo]_[Mm][Uu][Ll][Tt]([ \t]+-{0,1}[0-9]{1,12})([ \t]+[0-9]{1,2}){1,14}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Mm][Oo][Vv][Ee][Tt][Oo]_[Mm][Uu][Ll][Tt]([ \t]+-{0,1}[0-9]{1,12})([ \t]+[0-9]{1,2}){1,14}[ \t]*$"))
			{
				
				int num_arg_moveto = 0;
				
				int* moveto_drv_array = NULL;
				
				char* moveto_mult_punt = NULL; 
				
				char* buffer_arg = NULL;
				
				int i = 0;
				
				char* buffer_moveto_value;
				
				int moveto_value = 0;
			
				int moveto_mult_value = 0;
				
				if (reg_matches (buffer, "^[Mm][Oo][Vv][Ee][Tt][Oo]_[Mm][Uu][Ll][Tt]([ \t]+-{0,1}[0-9]{1,12})([ \t]+[0-9]{1,2}){1,14}[ \t]*$"))
				{
					moveto_value = SkipWordAndAtoi(buffer);
					buffer_moveto_value = buffer;
					buffer_arg = buffer;
				}
				
				//if the command was sent via TCP/IP
				else
				{
					moveto_value = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_moveto_value = command_received_by_user.command_sent_by_user;
					buffer_arg = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					
					moveto_mult_value = SkipWordAndAtoi(buffer_moveto_value); 
					
					num_arg_moveto = FindNumArg(buffer_moveto_value) - 1; //be careful to this hard coded value!
					
					moveto_drv_array = (int*)malloc(num_arg_moveto*sizeof(int));
					
					moveto_mult_punt = SkipWord(buffer_moveto_value);
					
					for (i=0; i<num_arg_moveto; i++)
					{
						moveto_mult_punt = SkipWord(moveto_mult_punt);
						moveto_drv_array[i] = atoi(moveto_mult_punt);
						
						MoveTo(ctx, moveto_drv_array[i], moveto_value);
					}
					
					free(moveto_drv_array);

				}
				else
				{
					
					num_arg_moveto = FindNumArg(buffer_moveto_value) - 1; //be careful to this hard coded value!
					
					moveto_drv_array = (int*)malloc(num_arg_moveto*sizeof(int));
					
					moveto_mult_punt = SkipWord(buffer_moveto_value);
					
					for (i=0; i<num_arg_moveto; i++)
					{
						moveto_mult_punt = SkipWord(moveto_mult_punt);
						moveto_drv_array[i] = atoi(moveto_mult_punt);
						output_module->Output("get_move_par: " + to_string(moveto_drv_array[i]) + " Programmer not connected, digit 'connect programmerpath'.\n " + to_string(NEGATIVE_RESPONSE_TO_CLIENT));
					}
					
					free(moveto_drv_array);					
					
				}
			}
			
			//setmult_par max_vel acceleration deceleration PhaseCurrent AnalogOutput0 drvnum1 drvnum2 drvnum3 drvnum....
			//set max_vel (Each unity of maxvel correspond to 0.25rpm), acceleration and deceleration (Each unity of acceleration and deceleration correspond to 1rpm/s),
			//phasecurrent and AnalogOutput0 of the drivers specified with drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt][Mm][Uu][Ll][Tt]_[Pp][Aa][Rr]([ \t]+[0-9]{1,5})([ \t]+-{0,1}[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5}){1,20}[ \t]*$") ||
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt][Mm][Uu][Ll][Tt]_[Pp][Aa][Rr]([ \t]+[0-9]{1,5})([ \t]+-{0,1}[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5}){1,20}[ \t]*$"))
			{
				
				int num_arg_setpar_mult = 0;
				
				int* setpar_mult_val = NULL;
				
				char* setpar_mult_punt = NULL; 
				
				char* buffer_arg = NULL;
				
				int i = 0;
				
				char* buffer_setpar_mult_value;
				
				int setpar_value = 0;
			
				int setpar_mult_value = 0;				
				
				
				if (reg_matches (buffer, "^[Ss][Ee][Tt][Mm][Uu][Ll][Tt]_[Pp][Aa][Rr]([ \t]+[0-9]{1,5})([ \t]+-{0,1}[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5})([ \t]+[0-9]{1,5}){1,20}[ \t]*$"))
				{
					buffer_setpar_mult_value = buffer;
					buffer_arg = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					buffer_setpar_mult_value = command_received_by_user.command_sent_by_user;
					buffer_arg = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					string tmp_string(buffer_arg);
					output_module->Output("You have sent: " + tmp_string + "\n");
					
					num_arg_setpar_mult = FindNumArg(buffer_setpar_mult_value) - 6; //be careful to this hard coded value!
					
					setpar_mult_val = (int*)malloc(num_arg_setpar_mult*sizeof(int));
					
					setpar_mult_punt = SkipWord(buffer_setpar_mult_value);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					
					for (i=0; i<num_arg_setpar_mult; i++)
					{
						setpar_mult_punt = SkipWord(setpar_mult_punt);
						setpar_mult_val[i] = atoi(setpar_mult_punt);
						
						SetParMult(ctx, setpar_mult_val[i], buffer_arg);
					}
					
					free(setpar_mult_val);					
					
				}
				else
				{
					
					
					num_arg_setpar_mult = FindNumArg(buffer_setpar_mult_value) - 6; //be careful to this hard coded value!
					
					setpar_mult_val = (int*)malloc(num_arg_setpar_mult*sizeof(int));
					
					setpar_mult_punt = SkipWord(buffer_setpar_mult_value);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					setpar_mult_punt = SkipWord(setpar_mult_punt);
					
					for (i=0; i<num_arg_setpar_mult; i++)
					{
						setpar_mult_punt = SkipWord(setpar_mult_punt);
						setpar_mult_val[i] = atoi(setpar_mult_punt);
						
						SendFailedGetPar(setpar_mult_val[i]);					
						
					}
					
					free(setpar_mult_val);						
					
				}
			}					
			
			//check_internal_status
			//This command retrieves the content of the GeneralStatus struct. 
			//If GeneralStatus.assoc_file_status == 1 means the user has already executed the procedure to check
			//the association between the serial numbers contained in the SerialDrvLog.txt file and the real situation.
			//If GeneralStatus.par_file_status = 1 means the user has already executed the procedure to check
			//the association between the parameters contained in the FileParLog.txt file and the real situation.
			//If GeneralStatus.encoder_file_status = 1 means the user has already executed the procedure to check
			//the association between the encoder values contained in the EncoderLog.txt file and the real situation.	
			else if(reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Ii][Nn][Tt][Ee][Rr][Nn][Aa][Ll]_[Ss][Tt][Aa][Tt][Uu][Ss][ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Hh][Ee][Cc][Kk]_[Ii][Nn][Tt][Ee][Rr][Nn][Aa][Ll]_[Ss][Tt][Aa][Tt][Uu][Ss][ \t]*$"))
			{
				
				output_module->Output("InternalStatusSerial: " + to_string(GeneralStatus.assoc_file_status));
				output_module->Output("InternalStatusParameter: " + to_string(GeneralStatus.par_file_status));
				output_module->Output("InternalStatusEncoder: " + to_string(GeneralStatus.encoder_file_status));
				
			}
			
			//Load_encoder_from_file
			//This command gets the encoding parameters for each drivers from the EncoderLog.txt file and use it to accomplished the check_position command.
			else if (reg_matches (buffer, "^[Ll][Oo][Aa][Dd]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Ff][Rr][Oo][Mm]_[Ff][Ii][Ll][Ee][ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Ll][Oo][Aa][Dd]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Ff][Rr][Oo][Mm]_[Ff][Ii][Ll][Ee][ \t]*$"))
			{
				LoadEncoderFromFile();
			}
			
			//read_actual_encoder_values
			//This command prints the actual encoding parameters that will be used to accomplished the check_position command.
			else if (reg_matches (buffer, "^[Rr][Ee][Aa][Dd]_[Aa][Cc][Tt][Uu][Aa][Ll]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Vv][Aa][Ll][Uu][Ee][Ss][ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Rr][Ee][Aa][Dd]_[Aa][Cc][Tt][Uu][Aa][Ll]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Vv][Aa][Ll][Uu][Ee][Ss][ \t]*$")) 
			{
				ReadActualEncoderValue();
			}			
			
			
			//device_list
			//This command prints the device contained in /dev
			else if (reg_matches (buffer, "^[Dd][Ee][Vv][Ii][Cc][Ee]_[Ll][Ii][Ss][Tt][ \t]*$") ||
					reg_matches (command_received_by_user.command_sent_by_user, "^[Dd][Ee][Vv][Ii][Cc][Ee]_[Ll][Ii][Ss][Tt][ \t]*$")) 
			{

				DIR *dir;
				struct dirent *ent;
				if ((dir = opendir ("/dev")) != NULL) 
				{
					string output_tmp = "Device list: \n";
					/* print all the files and directories within directory */
					while ((ent = readdir (dir)) != NULL) 
					{
						string support_string = ent->d_name;
						if (support_string != "." && support_string != "..")
							output_tmp += "/dev/" + support_string + "\n";
					}
					output_module->Output(output_tmp);
					closedir (dir);
				} 
				else 
				{
					output_module->Output("Device list: FAILED\n");
				}

			}				
			
			//set_status_state drvnum status_state
			//This command set to status_state the variable status_state of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Ss][Tt][Aa][Tt][Uu][Ss]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Ss][Tt][Aa][Tt][Uu][Ss]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_status_state;
				
				uint16_t status_state_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Ss][Tt][Aa][Tt][Uu][Ss]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					status_state_drv = SkipWordAndAtoi(buffer);
					buffer_status_state = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					status_state_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_status_state = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetStatusStateSoftwareCmd(ctx, status_state_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_status_state)));
				}
				else
				{
					output_module->Output("get_status_state: " + to_string(status_state_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_status_state drvnum
			//This command get the variable status_state of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Ss][Tt][Aa][Tt][Uu][Ss]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Ss][Tt][Aa][Tt][Uu][Ss]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t status_state_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Ss][Tt][Aa][Tt][Uu][Ss]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					status_state_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					status_state_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetStatusStateSoftwareCmd(ctx, status_state_drv);
				}
				else
				{
					output_module->Output("get_status_state: " + to_string(status_state_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}		
			
			//set_request_state drvnum status_state
			//This command set to request_state the variable request_state of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Rr][Ee][Qq][Uu][Ee][Ss][Tt]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Rr][Ee][Qq][Uu][Ee][Ss][Tt]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_request_state;
				
				uint16_t request_state_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Rr][Ee][Qq][Uu][Ee][Ss][Tt]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					request_state_drv = SkipWordAndAtoi(buffer);
					buffer_request_state = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					request_state_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_request_state = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetRequestStateSoftwareCmd(ctx, request_state_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_request_state)));
				}
				else
				{
					output_module->Output("get_request_state: " + to_string(request_state_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_request_state drvnum
			//This command get the variable request_state of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Rr][Ee][Qq][Uu][Ee][Ss][Tt]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Rr][Ee][Qq][Uu][Ee][Ss][Tt]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t request_state_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Rr][Ee][Qq][Uu][Ee][Ss][Tt]_[Ss][Tt][Aa][Tt][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					request_state_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					request_state_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetRequestStateSoftwareCmd(ctx, request_state_drv);
				}
				else
				{
					output_module->Output("get_request_state: " + to_string(request_state_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}					
	
			//save_eprom drvnum
			//This command begins the save_eprom procedure of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Aa][Vv][Ee]_[Ee][Pp][Rr][Oo][Mm][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Aa][Vv][Ee]_[Ee][Pp][Rr][Oo][Mm][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t save_eprom_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Aa][Vv][Ee]_[Ee][Pp][Rr][Oo][Mm][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					save_eprom_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					save_eprom_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetRequestStateSoftwareCmd(ctx, save_eprom_drv);
				}
				else
				{
					output_module->Output("save_eprom: " + to_string(save_eprom_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}		
			
			//check_fault drvnum
			//This get the value of the Fault register of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Ff][Aa][Uu][Ll][Tt][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Hh][Ee][Cc][Kk]_[Ff][Aa][Uu][Ll][Tt][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t check_fault_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Ff][Aa][Uu][Ll][Tt][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					check_fault_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					check_fault_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					CheckFault(ctx, check_fault_drv);
				}
				else
				{
					output_module->Output("check_fault: " + to_string(check_fault_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}					
						
			//set_home_done drvnum home_done
			//This command set to home_done the variable home_done of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Hh][Oo][Mm][Ee]_[Dd][Oo][Nn][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Hh][Oo][Mm][Ee]_[Dd][Oo][Nn][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_home_done;
				
				uint16_t home_done_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Hh][Oo][Mm][Ee]_[Dd][Oo][Nn][Ee][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					home_done_drv = SkipWordAndAtoi(buffer);
					buffer_home_done = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					home_done_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_home_done = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetHomeDoneSoftwareCmd(ctx, home_done_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_home_done)));
				}
				else
				{
					output_module->Output("home_done: " + to_string(home_done_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_home_done drvnum
			//This command get the variable home_done of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Hh][Oo][Mm][Ee]_[Dd][Oo][Nn][Ee][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Hh][Oo][Mm][Ee]_[Dd][Oo][Nn][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t home_done_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Hh][Oo][Mm][Ee]_[Dd][Oo][Nn][Ee][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					home_done_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					home_done_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetHomeDoneSoftwareCmd(ctx, home_done_drv);
				}
				else
				{
					output_module->Output("home_done: " + to_string(home_done_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}						
			
			//set_encoder_max drvnum encoder_max
			//This command set to encoder_max the variable Encoder_Max of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Aa][Xx][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Aa][Xx][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_encoder_max;
				
				uint16_t encoder_max_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Aa][Xx][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					encoder_max_drv = SkipWordAndAtoi(buffer);
					buffer_encoder_max = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					encoder_max_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_encoder_max = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetEncoderMaxSoftwareCmd(ctx, encoder_max_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_encoder_max)));
				}
				else
				{
					output_module->Output("encoder_max: " + to_string(encoder_max_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_encoder_max drvnum
			//This command get the variable Encoder_Max of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Aa][Xx][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Aa][Xx][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t encoder_max_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Aa][Xx][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					encoder_max_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					encoder_max_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetEncoderMaxSoftwareCmd(ctx, encoder_max_drv);
				}
				else
				{
					output_module->Output("encoder_max: " + to_string(encoder_max_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}													
						
			//set_encoder_min drvnum encoder_min
			//This command set to encoder_min the variable encoder_min of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Ii][Nn][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Ii][Nn][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_encoder_min;
				
				uint16_t encoder_min_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Ii][Nn][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					encoder_min_drv = SkipWordAndAtoi(buffer);
					buffer_encoder_min = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					encoder_min_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_encoder_min = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetEncoderMinSoftwareCmd(ctx, encoder_min_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_encoder_min)));
				}
				else
				{
					output_module->Output("encoder_min: " + to_string(encoder_min_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_encoder_min drvnum
			//This command get the variable Encoder_Min of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Ii][Nn][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Ii][Nn][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t encoder_min_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Ee][Nn][Cc][Oo][Dd][Ee][Rr]_[Mm][Ii][Nn][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					encoder_min_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					encoder_min_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetEncoderMinSoftwareCmd(ctx, encoder_min_drv);
				}
				else
				{
					output_module->Output("encoder_min: " + to_string(encoder_min_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}								

			//set_delta_analog_pos drvnum delta_analog_pos
			//This command set to delta_analog_pos the variable Delta_Analog_Pos of the driver indicated by drvnum.
			//delta_analog_pos MUST be positive
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Pp][Oo][Ss][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Pp][Oo][Ss][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_delta_analog_pos;
				
				uint16_t delta_analog_pos_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Pp][Oo][Ss][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					delta_analog_pos_drv = SkipWordAndAtoi(buffer);
					buffer_delta_analog_pos = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					delta_analog_pos_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_delta_analog_pos = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetDeltaAnalogPosSoftwareCmd(ctx, delta_analog_pos_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_delta_analog_pos)));
				}
				else
				{
					output_module->Output("delta_analog_pos: " + to_string(delta_analog_pos_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_delta_analog_pos drvnum
			//This command get the variable Delta_Analog_Pos of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Pp][Oo][Ss][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Pp][Oo][Ss][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t delta_analog_pos_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Pp][Oo][Ss][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					delta_analog_pos_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					delta_analog_pos_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetDeltaAnalogPosSoftwareCmd(ctx, delta_analog_pos_drv);
				}
				else
				{
					output_module->Output("delta_analog_pos: " + to_string(delta_analog_pos_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}				
			
			//set_phase_current_user drvnum phase_current_user
			//This command set to phase_current_user the variable PhaseCurr_User of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Pp][Hh][Aa][Ss][Ee]_[Cc][Uu][Rr][Rr][Ee][Nn][Tt]_[Uu][Ss][Ee][Rr][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Pp][Hh][Aa][Ss][Ee]_[Cc][Uu][Rr][Rr][Ee][Nn][Tt]_[Uu][Ss][Ee][Rr][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_phase_current_user;
				
				uint16_t phase_current_user_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Pp][Hh][Aa][Ss][Ee]_[Cc][Uu][Rr][Rr][Ee][Nn][Tt]_[Uu][Ss][Ee][Rr][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					phase_current_user_drv = SkipWordAndAtoi(buffer);
					buffer_phase_current_user = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					phase_current_user_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_phase_current_user = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetPhaseCurrentUserSoftwareCmd(ctx, phase_current_user_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_phase_current_user)));
				}
				else
				{
					output_module->Output("phase_current_user: " + to_string(phase_current_user_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_phase_current_user drvnum
			//This command get the variable PhaseCurr_User of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Pp][Hh][Aa][Ss][Ee]_[Cc][Uu][Rr][Rr][Ee][Nn][Tt]_[Uu][Ss][Ee][Rr][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Pp][Hh][Aa][Ss][Ee]_[Cc][Uu][Rr][Rr][Ee][Nn][Tt]_[Uu][Ss][Ee][Rr][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t phase_current_user_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Pp][Hh][Aa][Ss][Ee]_[Cc][Uu][Rr][Rr][Ee][Nn][Tt]_[Uu][Ss][Ee][Rr][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					phase_current_user_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					phase_current_user_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetPhaseCurrentUserSoftwareCmd(ctx, phase_current_user_drv);
				}
				else
				{
					output_module->Output("phase_current_user: " + to_string(phase_current_user_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}							
						
			//set_delay_check_rot drvnum delay_check_rot
			//This command set to delay_check_rot the variable Delay_CheckRot of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Aa][Yy]_[Cc][Hh][Ee][Cc][Kk]_[Rr][Oo][Tt][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Aa][Yy]_[Cc][Hh][Ee][Cc][Kk]_[Rr][Oo][Tt][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_delay_check_rot;
				
				uint16_t delay_check_rot_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Aa][Yy]_[Cc][Hh][Ee][Cc][Kk]_[Rr][Oo][Tt][ \t]+[0-9]{1,2}([ \t]+[0-9]{1,10})[ \t]*$"))
				{
					delay_check_rot_drv = SkipWordAndAtoi(buffer);
					buffer_delay_check_rot = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					delay_check_rot_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_delay_check_rot = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetDelayCheckRotSoftwareCmd(ctx, delay_check_rot_drv, (uint16_t)SkipWordAndAtoi(SkipWord(buffer_delay_check_rot)));
				}
				else
				{
					output_module->Output("delay_check_rot: " + to_string(delay_check_rot_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_delay_check_rot drvnum
			//This command get the variable Delay_CheckRot of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Aa][Yy]_[Cc][Hh][Ee][Cc][Kk]_[Rr][Oo][Tt][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Aa][Yy]_[Cc][Hh][Ee][Cc][Kk]_[Rr][Oo][Tt][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t delay_check_rot_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Aa][Yy]_[Cc][Hh][Ee][Cc][Kk]_[Rr][Oo][Tt][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					delay_check_rot_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					delay_check_rot_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetDelayCheckRotSoftwareCmd(ctx, delay_check_rot_drv);
				}
				else
				{
					output_module->Output("delay_check_rot: " + to_string(delay_check_rot_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}
			
			//set_delta_analog_neg drvnum delta_analog_neg
			//This command set to delta_analog_neg the variable Delta_Analog_Neg of the driver indicated by drvnum.
			//delta_analog_neg MUST be negative.
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Nn][Ee][Gg][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Nn][Ee][Gg][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_delta_analog_neg;
				
				uint16_t delta_analog_neg_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Nn][Ee][Gg][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$"))
				{
					delta_analog_neg_drv = SkipWordAndAtoi(buffer);
					buffer_delta_analog_neg = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					delta_analog_neg_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_delta_analog_neg = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetDeltaAnalogNegSoftwareCmd(ctx, delta_analog_neg_drv, (int16_t)SkipWordAndAtoi(SkipWord(buffer_delta_analog_neg)));
				}
				else
				{
					output_module->Output("delta_analog_neg: " + to_string(delta_analog_neg_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_delta_analog_neg drvnum
			//This command get the variable Delta_Analog_Neg of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Nn][Ee][Gg][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Nn][Ee][Gg][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t delta_analog_neg_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Dd][Ee][Ll][Tt][Aa]_[Aa][Nn][Aa][Ll][Oo][Gg]_[Nn][Ee][Gg][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					delta_analog_neg_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					delta_analog_neg_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetDeltaAnalogNegSoftwareCmd(ctx, delta_analog_neg_drv);
				}
				else
				{
					output_module->Output("delta_analog_neg: " + to_string(delta_analog_neg_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}					
			
			//set_max_target_position drvnum max_target_position
			//This command set to max_target_position the variable Max_TargetPos of the driver indicated by drvnum.
			//max_target_position could be negative or positive
			else if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Mm][Aa][Xx]_[Tt][Aa][Rr][Gg][Ee][Tt]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Ss][Ee][Tt]_[Mm][Aa][Xx]_[Tt][Aa][Rr][Gg][Ee][Tt]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$"))
			{
				char* buffer_max_target_position;
				
				uint16_t max_target_position_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Ss][Ee][Tt]_[Mm][Aa][Xx]_[Tt][Aa][Rr][Gg][Ee][Tt]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t]+[0-9]{1,2}([ \t]+-{0,1}[0-9]{1,10})[ \t]*$"))
				{
					max_target_position_drv = SkipWordAndAtoi(buffer);
					buffer_max_target_position = buffer;
				}
				//if the command was sent via TCP/IP
				else
				{
					max_target_position_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
					buffer_max_target_position = command_received_by_user.command_sent_by_user;
				}				
			  
				if (STATE_CONNECT == 1)
				{
					SetMaxTargetPositionSoftwareCmd(ctx, max_target_position_drv, (int)SkipWordAndAtoi(SkipWord(buffer_max_target_position)));
				}
				else
				{
					output_module->Output("max_target_position: " + to_string(max_target_position_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}

			//get_max_target_position drvnum
			//This command get the variable Max_TargetPos of the driver indicated by drvnum.
			else if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Mm][Aa][Xx]_[Tt][Aa][Rr][Gg][Ee][Tt]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Gg][Ee][Tt]_[Mm][Aa][Xx]_[Tt][Aa][Rr][Gg][Ee][Tt]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t max_target_position_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Gg][Ee][Tt]_[Mm][Aa][Xx]_[Tt][Aa][Rr][Gg][Ee][Tt]_[Pp][Oo][Ss][Ii][Tt][Ii][Oo][Nn][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					max_target_position_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					max_target_position_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					GetMaxTargetPositionSoftwareCmd(ctx, max_target_position_drv);
				}
				else
				{
					output_module->Output("max_target_position: " + to_string(max_target_position_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}
			
			//check_driver_status drvnum
			//This command sends to the client the status of the driver reading the status_state variable.
			//This values are defined in DefineGeneral.h and they reflect the firmware conventions
			//#define READY_TO_START	0
			//#define OPERATION_BEGIN	1
			//#define OPERATION_ONGOING	2
			//#define OPERATION_ENDING	3
			//#define OPERATION_FAILED	4
			//#define OPERATION_SUCCESS	5
			//#define EEPROM_LOADING_FAILED	6
			//N.B. In case of OPERATION_SUCCESS and READY_TO_START is performed a position check with the function CheckEncoderPositionSingle.
			//After that, this codes are sent to the client:
			//#define POSITION_MATCH 100
			//#define POSITION_MISMATCH 101
			//If the status_state of the driver is different from the values above, it is sent as it is.
			else if (reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Dd][Rr][Ii][Vv][Ee][Rr]_[Ss][Tt][Aa][Tt][Uu][Ss][ \t]+[0-9]{1,2}[ \t]*$") || 
					 reg_matches (command_received_by_user.command_sent_by_user, "^[Cc][Hh][Ee][Cc][Kk]_[Dd][Rr][Ii][Vv][Ee][Rr]_[Ss][Tt][Aa][Tt][Uu][Ss][ \t]+[0-9]{1,2}[ \t]*$"))
			{
				
				uint16_t check_driver_status_drv = 0;
				
				//if the command was sent via stdin
				if (reg_matches (buffer, "^[Cc][Hh][Ee][Cc][Kk]_[Dd][Rr][Ii][Vv][Ee][Rr]_[Ss][Tt][Aa][Tt][Uu][Ss][ \t]+[0-9]{1,2}[ \t]*$"))
				{
					check_driver_status_drv = SkipWordAndAtoi(buffer);
				}
				//if the command was sent via TCP/IP
				else
				{
					check_driver_status_drv = SkipWordAndAtoi(command_received_by_user.command_sent_by_user);
				}				
			  
				if (STATE_CONNECT == 1)
				{
					CheckDriverStatus(ctx, check_driver_status_drv);
				}
				else
				{
					output_module->Output("check_driver_status: " + to_string(check_driver_status_drv) + " " + to_string(NEGATIVE_RESPONSE_TO_CLIENT) + '\n');
					output_module->Output("Programmer not connected, digit 'connect programmerpath'.\n");
				}
			}																			
						
			//Unrecognized comand.
			else
			{
				output_module->Output("Unrecognized command. Digit 'help' to see the list of all commands available.\n");
				if (main_application_setup->input_mode != ONLYTCP) {
					fflush(stdout);
				}
				//if the command was sent via stdin
				if (buffer[0] != 0)
				{
					string tmp(buffer);
					output_module->Output(tmp + "\n");
				}
				//if the command was sent via TCP/IP
				else
				{
					string tmp(command_received_by_user.command_sent_by_user);
					output_module->Output("Command unrecognized: " + tmp + "\n");
				}
			}			  
			
			output_module->Output("END OF MESSAGE\n");
			
		}
		
		//Sleep to make the fetching input cycle slower in order to preserve CPU resources.
		usleep(SLEEPCOMMAND);
		
		//Increment count_check variable.
		count_check++;
		
		//If count_checl == COUNTCHECK_LIMIT check the position matching of the all drivers.
		if (count_check == COUNTCHECK_LIMIT)
		{
			count_check = 0;
			
			if (loading_encoder_from_file_okay == 1 && STATE_CONNECT == 1)
			{
				for (int i = 1; i <= MAXIMUM_DRIVER; i++)
				{
					//int return_value = CheckPositionEncoder(ctx, i);
					//output_module->OutputAll("get_pos_status " + to_string(i) + " " + to_string(return_value) );
					//CheckPositionEncoderToAll(ctx, i);
					CheckDriverStatusToAll(ctx, i);
				}
			}
		}
		
		
	}

	free(buffer);

}
