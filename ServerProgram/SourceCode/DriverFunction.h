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

#ifndef DRIVERFUNCTION_H
#define DRIVERFUNCTION_H

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
#include <string>

using namespace std;

//Function signature: all these function are defined in DriverFunction.c file
//The following functions interact with the drivers using the functions defined in
//BasicModbusLibrary.c, a simplified version of libmodbus v.3.0.6 by Stephane Raimbault.
//
//These functions does not set the slave number, so you have to set it before
//calling them.
//
//Usually, the following functions call only modbus_read_register or modbus_write_register and modbus_strerror.

//N.B. The return value and the argument of the functions depend to the dimension of the driver
//register being written.

//N.B. Register address' are defined in DefineGeneral.h .

//N.B. In each function is very important usleep(SLEEPMODBUS) in order to give the programmer the time to send the data.
	
//N.B. Setting functions return the error status.	

//Utility function used to determine the number of the argument of a command.
int FindNumArg (char *yytext);

//Function used to connect the server with the programmer. STATE_CONNECT is a global_variable
//that records if the operation is successfully done.
//path is the absolute path of the device (ex. "/dev/ttyUSB0").
modbus_t* Connect(modbus_t *ctx, bool* STATE_CONNECT, char* path);

//Function used to read the serial number of the driver.
//error_code will contain the status of the operation. 
unsigned int ReadSerialNumber(modbus_t *ctx, int* error_code);

//Function used to set the deceleration parameter.
//header is the prefix of every output printed by the function.
int SetDeceleration (modbus_t *ctx, uint16_t deceleration, string header);

//Function used to set the acceleration parameter.
//header is the prefix of every output printed by the function.
int SetAcceleration (modbus_t *ctx, uint16_t acceleration, string header);

//Function used to set the max_vel parameter.
//header is the prefix of every output printed by the function.
int SetMaxVel (modbus_t *ctx, uint16_t max_vel, string header);

//Function used to set the vel_home parameter.
//header is the prefix of every output printed by the function.
int SetVelHome (modbus_t *ctx, int16_t vel_home, string header);

//Function used to set the analog_output0 parameter.
//header is the prefix of every output printed by the function.
int SetAnalogOutput0 (modbus_t *ctx, uint16_t analog_output0, string header);

//Function used to set the status_state register.
//header is the prefix of every output printed by the function.
int SetStatusState(modbus_t *ctx, uint16_t status_state, string header);

//Function used to set the request_status_state register.
//header is the prefix of every output printed by the function.
int SetRequestState(modbus_t *ctx, uint16_t request_state, string header);

//Function used to set the TargetPosition register.
//header is the prefix of every output printed by the function.
int SetTargetPosition(modbus_t *ctx, unsigned int target_position, string header);

//Function used to set the phase_current parameter.
//header is the prefix of every output printed by the function.
int SetPhaseCurrent (modbus_t *ctx, uint16_t phase_current, string header);

//Function used to set the home_done variable.
//header is the prefix of every output printed by the function.
int SetHomeDone (modbus_t *ctx, uint16_t home_done, string header);

//Function used to set the Max TargetPosition variable.
//header is the prefix of every output printed by the function.
int SetMaxTargetPosition(modbus_t *ctx, unsigned int max_target_position, string header);

//Function used to set the Encoder_Min variable.
//header is the prefix of every output printed by the function.
int SetEncoderMin (modbus_t *ctx, uint16_t encoder_min, string header);

//Function used to set the Encoder_Max variable.
//header is the prefix of every output printed by the function.
int SetEncoderMax (modbus_t *ctx, uint16_t encoder_max, string header);

//Function used to set the PhaseCurrent_user variable.
//header is the prefix of every output printed by the function.
int SetPhaseCurrentUser (modbus_t *ctx, uint16_t phase_current_user, string header);

//Function used to set the delta_analog_pos variable.
//header is the prefix of every output printed by the function.
int SetDeltaAnalogPos (modbus_t *ctx, uint16_t delta_analog_pos, string header);

//Function used to set the delta_analog_neg variable.
//header is the prefix of every output printed by the function.
int SetDeltaAnalogNeg (modbus_t *ctx, int16_t delta_analog_neg, string header);

//Function used to set the check_rot variable.
//header is the prefix of every output printed by the function.
int SetDelayCheckRot (modbus_t *ctx, uint16_t check_rot, string header);

//Function used to read the max_vel parameter.
//header is the prefix of every output printed by the function.
uint16_t ReadMaxVel(modbus_t *ctx, int* error_code, string header);

//Function used to read the vel_home parameter.
//header is the prefix of every output printed by the function.
int16_t ReadVelHome(modbus_t *ctx, int* error_code, string header);

//Function used to read the acceleration parameter.
//header is the prefix of every output printed by the function.
uint16_t ReadAcceleration(modbus_t *ctx, int* error_code, string header);

//Function used to read the deceleration parameter.
//header is the prefix of every output printed by the function.
uint16_t ReadDeceleration(modbus_t *ctx, int* error_code, string header);

//Function used to read the analog_output0 parameter.
//header is the prefix of every output printed by the function.
uint16_t ReadAnalogOutput0(modbus_t *ctx, int* error_code, string header);

//Function used to read the StatusState register.
//header is the prefix of every output printed by the function.
uint16_t ReadStatusState(modbus_t *ctx, int* error_code, string header);

//Function used to read the RequestState register.
//header is the prefix of every output printed by the function.
uint16_t ReadRequestState(modbus_t *ctx, int* error_code, string header);

//Function used to read the analog_input0 parameter.
//header is the prefix of every output printed by the function.
uint16_t ReadAnalogInput0(modbus_t *ctx, int* error_code, string header);

//Function used to read the current position parameter.
//header is the prefix of every output printed by the function.
int ReadCurrentPosition(modbus_t *ctx, int* error_code, string header);

//Function used to read the phase_current parameter.
//header is the prefix of every output printed by the function.
uint16_t ReadPhaseCurrent(modbus_t *ctx, int* error_code, string header);

//Function used to read the home_done variable.
//header is the prefix of every output printed by the function.
uint16_t ReadHomeDone(modbus_t *ctx, int* error_code, string header);

//Function used to read the Max_TargetPos variable.
//header is the prefix of every output printed by the function.
int ReadMaxTargetPosition(modbus_t *ctx, int* error_code, string header);

//Function used to read the encoder_min variable.
//header is the prefix of every output printed by the function.
uint16_t ReadEncoderMin(modbus_t *ctx, int* error_code, string header);

//Function used to read the encoder_max variable.
//header is the prefix of every output printed by the function.
uint16_t ReadEncoderMax(modbus_t *ctx, int* error_code, string header);

//Function used to read the PhaseCurrent_User variable.
//header is the prefix of every output printed by the function.
uint16_t ReadPhaseCurrentUser(modbus_t *ctx, int* error_code, string header);

//Function used to read the delta_analog_pos variable.
//header is the prefix of every output printed by the function.
uint16_t ReadDeltaAnalogPos(modbus_t *ctx, int* error_code, string header);

//Function used to read the delta_analog_neg variable.
//header is the prefix of every output printed by the function.
int16_t ReadDeltaAnalogNeg(modbus_t *ctx, int* error_code, string header);

//Function used to read the delay_check_rot variable.
//header is the prefix of every output printed by the function.
uint16_t ReadDelayCheckRot(modbus_t *ctx, int* error_code, string header);

//Function used to read the fault register.
//header is the prefix of every output printed by the function.
uint16_t ReadFault(modbus_t *ctx, int* error_code, string header);

#endif
