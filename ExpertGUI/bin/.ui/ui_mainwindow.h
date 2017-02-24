/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_34;
    QTabWidget *AllDriverTab;
    QWidget *tab_15;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QLineEdit *ConnectProgrammerPath;
    QPushButton *ConnectProgrammer;
    QLabel *label_2;
    QPushButton *DeviceListButton;
    QTextEdit *ProgrammerConnectionLog;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QLabel *label_statusAll;
    QGridLayout *gridLayout_6;
    QTextEdit *CollSoftConnectionLog;
    QLabel *label_7;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *ServerIp;
    QLabel *label_3;
    QLineEdit *ServerPort;
    QPushButton *ConnectToServerButton;
    QPushButton *DisconnectToServerButton;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_14;
    QLabel *label_status1;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLabel *label_status2;
    QLabel *label_8;
    QFrame *line_3;
    QLabel *label_13;
    QGridLayout *gridLayout_5;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *CheckExistence;
    QPushButton *ConnectExistence;
    QPushButton *KillProcess_CollSoft;
    QPushButton *NewProcess_CollSoft;
    QLabel *label_4;
    QPushButton *DisconnectExistence;
    QLineEdit *CheckExistenceLineIpEdit;
    QLineEdit *CheckExistenceLinePortEdit;
    QTextEdit *CheckExistenceLog;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLabel *label_status3;
    QWidget *tab_17;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_46;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout;
    QLabel *label_Accepted;
    QPushButton *CheckDrvAssoc;
    QPushButton *ReadSerialDrvLog;
    QTextEdit *GeneralConnectionLog;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_Accepted_Par;
    QPushButton *CheckParAssoc;
    QPushButton *ReadFileParLog;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_Accepted_Encode;
    QPushButton *CheckEncoderAssoc;
    QPushButton *ReadEncoderLog;
    QPushButton *ReadGeneralLog;
    QVBoxLayout *verticalLayout_40;
    QLabel *label_325;
    QPushButton *ReadActualEncoderValue;
    QPushButton *LoadEncoderFromFileButton;
    QLabel *label_311;
    QVBoxLayout *verticalLayout_2;
    QLabel *InternalSerialNumberStatus;
    QLabel *InternalParameterStatus;
    QLabel *InternalEncoderValuesStatus;
    QPushButton *CheckInternalStatus;
    QLabel *label_45;
    QWidget *tab;
    QGridLayout *gridLayout_13;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_47;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_52;
    QLabel *label_52;
    QLineEdit *LineEditMoveToValue_1;
    QPushButton *MoveTo_1;
    QPushButton *Homing_1;
    QLabel *label_53;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_51;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *LabelMovAnalogInput0_1;
    QLabel *label_51;
    QLabel *LabelMovCurrentPosition_1;
    QPushButton *GetParameterMov_1;
    QLabel *label_211;
    QLabel *label_210;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_33;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_3;
    QLabel *Images;
    QLabel *label_29;
    QLabel *label_343;
    QGridLayout *gridLayout_9;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *LabelMaxVelSetup_1;
    QLineEdit *LineEditMaxVelSetup_1;
    QLabel *label_19;
    QLabel *label_22;
    QLabel *LabelAccelerationSetup_1;
    QLineEdit *LineEditAccelerationSetup_1;
    QLabel *label_20;
    QLabel *label_23;
    QLabel *LabelDecelerationSetup_1;
    QLineEdit *LineEditDecelerationSetup_1;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *LabelPhaseCurrentSetup_1;
    QLineEdit *LineEditPhaseCurrentSetup_1;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *LabelAnalogOutputSetup_1;
    QLineEdit *LineEditAnalogOutputSetup_1;
    QLabel *label_342;
    QLabel *label_341;
    QLabel *LabelVelHomeSetup_1;
    QLineEdit *LineEditVelHomeSetup_1;
    QPushButton *GetParameterDriver_1;
    QPushButton *SetParameterDriver_1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_27;
    QLabel *LabelStatusDriver1;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_49;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_288;
    QTextEdit *LabelPositionStatus_1;
    QPushButton *CheckPositionButton_1;
    QWidget *layoutWidget_55;
    QVBoxLayout *verticalLayout_92;
    QVBoxLayout *verticalLayout_93;
    QLabel *label_326;
    QTextEdit *LabelDrvStatus_1;
    QPushButton *CheckDrvStatusButton_1;
    QWidget *tab_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_53;
    QLabel *label_205;
    QLineEdit *LineEditMoveToValue_2;
    QPushButton *MoveTo_2;
    QPushButton *Homing_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_54;
    QLabel *label_206;
    QLabel *label_207;
    QLabel *LabelMovAnalogInput0_2;
    QLabel *label_208;
    QLabel *LabelMovCurrentPosition_2;
    QPushButton *GetParameterMov_2;
    QWidget *layoutWidget_36;
    QGridLayout *gridLayout_35;
    QLabel *label_26;
    QVBoxLayout *verticalLayout_5;
    QLabel *Images_2;
    QLabel *label_30;
    QLabel *label_344;
    QGridLayout *gridLayout_10;
    QLabel *label_28;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *LabelMaxVelSetup_2;
    QLineEdit *LineEditMaxVelSetup_2;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *LabelAccelerationSetup_2;
    QLineEdit *LineEditAccelerationSetup_2;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *LabelDecelerationSetup_2;
    QLineEdit *LineEditDecelerationSetup_2;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *LabelPhaseCurrentSetup_2;
    QLineEdit *LineEditPhaseCurrentSetup_2;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *LabelAnalogOutputSetup_2;
    QLineEdit *LineEditAnalogOutputSetup_2;
    QLabel *label_345;
    QLabel *label_346;
    QLabel *LabelVelHomeSetup_2;
    QLineEdit *LineEditVelHomeSetup_2;
    QPushButton *GetParameterDriver_2;
    QPushButton *SetParameterDriver_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_40;
    QLabel *LabelStatusDriver2;
    QWidget *layoutWidget_42;
    QVBoxLayout *verticalLayout_50;
    QVBoxLayout *verticalLayout_35;
    QLabel *label_289;
    QTextEdit *LabelPositionStatus_2;
    QPushButton *CheckPositionButton_2;
    QWidget *layoutWidget_56;
    QVBoxLayout *verticalLayout_94;
    QVBoxLayout *verticalLayout_95;
    QLabel *label_327;
    QTextEdit *LabelDrvStatus_2;
    QPushButton *CheckDrvStatusButton_2;
    QWidget *tab_5;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_55;
    QLabel *label_209;
    QLineEdit *LineEditMoveToValue_3;
    QPushButton *MoveTo_3;
    QPushButton *Homing_3;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_56;
    QLabel *label_216;
    QLabel *label_217;
    QLabel *LabelMovAnalogInput0_3;
    QLabel *label_218;
    QLabel *LabelMovCurrentPosition_3;
    QPushButton *GetParameterMov_3;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_36;
    QLabel *label_48;
    QVBoxLayout *verticalLayout_7;
    QLabel *Images_3;
    QLabel *label_54;
    QLabel *label_347;
    QGridLayout *gridLayout_14;
    QLabel *label_55;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *label_58;
    QLabel *LabelMaxVelSetup_3;
    QLineEdit *LineEditMaxVelSetup_3;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *LabelAccelerationSetup_3;
    QLineEdit *LineEditAccelerationSetup_3;
    QLabel *label_61;
    QLabel *label_62;
    QLabel *LabelDecelerationSetup_3;
    QLineEdit *LineEditDecelerationSetup_3;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *LabelPhaseCurrentSetup_3;
    QLineEdit *LineEditPhaseCurrentSetup_3;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *LabelAnalogOutputSetup_3;
    QLineEdit *LineEditAnalogOutputSetup_3;
    QLabel *label_348;
    QLabel *label_349;
    QLabel *LabelVelHomeSetup_3;
    QLineEdit *LineEditVelHomeSetup_3;
    QPushButton *GetParameterDriver_3;
    QPushButton *SetParameterDriver_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_67;
    QLabel *LabelStatusDriver3;
    QWidget *layoutWidget_43;
    QVBoxLayout *verticalLayout_80;
    QVBoxLayout *verticalLayout_36;
    QLabel *label_290;
    QTextEdit *LabelPositionStatus_3;
    QPushButton *CheckPositionButton_3;
    QWidget *layoutWidget_57;
    QVBoxLayout *verticalLayout_96;
    QVBoxLayout *verticalLayout_97;
    QLabel *label_328;
    QTextEdit *LabelDrvStatus_3;
    QPushButton *CheckDrvStatusButton_3;
    QWidget *tab_6;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_57;
    QLabel *label_219;
    QLineEdit *LineEditMoveToValue_4;
    QPushButton *MoveTo_4;
    QPushButton *Homing_4;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_58;
    QLabel *label_222;
    QLabel *label_223;
    QLabel *LabelMovAnalogInput0_4;
    QLabel *label_224;
    QLabel *LabelMovCurrentPosition_4;
    QPushButton *GetParameterMov_4;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_37;
    QLabel *label_68;
    QVBoxLayout *verticalLayout_10;
    QLabel *Images_4;
    QLabel *label_69;
    QLabel *label_350;
    QGridLayout *gridLayout_15;
    QLabel *label_70;
    QLabel *label_71;
    QLabel *label_72;
    QLabel *label_73;
    QLabel *LabelMaxVelSetup_4;
    QLineEdit *LineEditMaxVelSetup_4;
    QLabel *label_74;
    QLabel *label_75;
    QLabel *LabelAccelerationSetup_4;
    QLineEdit *LineEditAccelerationSetup_4;
    QLabel *label_76;
    QLabel *label_77;
    QLabel *LabelDecelerationSetup_4;
    QLineEdit *LineEditDecelerationSetup_4;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *LabelPhaseCurrentSetup_4;
    QLineEdit *LineEditPhaseCurrentSetup_4;
    QLabel *label_80;
    QLabel *label_81;
    QLabel *LabelAnalogOutputSetup_4;
    QLineEdit *LineEditAnalogOutputSetup_4;
    QLabel *label_351;
    QLabel *label_352;
    QLabel *LabelVelHomeSetup_4;
    QLineEdit *LineEditVelHomeSetup_4;
    QPushButton *GetParameterDriver_4;
    QPushButton *SetParameterDriver_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_82;
    QLabel *LabelStatusDriver4;
    QWidget *layoutWidget_44;
    QVBoxLayout *verticalLayout_81;
    QVBoxLayout *verticalLayout_37;
    QLabel *label_291;
    QTextEdit *LabelPositionStatus_4;
    QPushButton *CheckPositionButton_4;
    QWidget *layoutWidget_58;
    QVBoxLayout *verticalLayout_98;
    QVBoxLayout *verticalLayout_99;
    QLabel *label_329;
    QTextEdit *LabelDrvStatus_4;
    QPushButton *CheckDrvStatusButton_4;
    QWidget *tab_7;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_59;
    QLabel *label_225;
    QLineEdit *LineEditMoveToValue_5;
    QPushButton *MoveTo_5;
    QPushButton *Homing_5;
    QWidget *layoutWidget_12;
    QVBoxLayout *verticalLayout_60;
    QLabel *label_228;
    QLabel *label_229;
    QLabel *LabelMovAnalogInput0_5;
    QLabel *label_230;
    QLabel *LabelMovCurrentPosition_5;
    QPushButton *GetParameterMov_5;
    QWidget *layoutWidget_11;
    QGridLayout *gridLayout_38;
    QLabel *label_83;
    QVBoxLayout *verticalLayout_12;
    QLabel *Images_5;
    QLabel *label_84;
    QLabel *label_353;
    QGridLayout *gridLayout_16;
    QLabel *label_85;
    QLabel *label_86;
    QLabel *label_87;
    QLabel *label_88;
    QLabel *LabelMaxVelSetup_5;
    QLineEdit *LineEditMaxVelSetup_5;
    QLabel *label_89;
    QLabel *label_90;
    QLabel *LabelAccelerationSetup_5;
    QLineEdit *LineEditAccelerationSetup_5;
    QLabel *label_91;
    QLabel *label_92;
    QLabel *LabelDecelerationSetup_5;
    QLineEdit *LineEditDecelerationSetup_5;
    QLabel *label_93;
    QLabel *label_94;
    QLabel *LabelPhaseCurrentSetup_5;
    QLineEdit *LineEditPhaseCurrentSetup_5;
    QLabel *label_95;
    QLabel *label_96;
    QLabel *LabelAnalogOutputSetup_5;
    QLineEdit *LineEditAnalogOutputSetup_5;
    QLabel *label_354;
    QLabel *label_355;
    QLabel *LabelVelHomeSetup_5;
    QLineEdit *LineEditVelHomeSetup_5;
    QPushButton *GetParameterDriver_5;
    QPushButton *SetParameterDriver_5;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_97;
    QLabel *LabelStatusDriver5;
    QWidget *layoutWidget_45;
    QVBoxLayout *verticalLayout_82;
    QVBoxLayout *verticalLayout_38;
    QLabel *label_309;
    QTextEdit *LabelPositionStatus_5;
    QPushButton *CheckPositionButton_5;
    QWidget *tab_8;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_61;
    QLabel *label_231;
    QLineEdit *LineEditMoveToValue_6;
    QPushButton *MoveTo_6;
    QPushButton *Homing_6;
    QWidget *layoutWidget_15;
    QVBoxLayout *verticalLayout_62;
    QLabel *label_234;
    QLabel *label_235;
    QLabel *LabelMovAnalogInput0_6;
    QLabel *label_236;
    QLabel *LabelMovCurrentPosition_6;
    QPushButton *GetParameterMov_6;
    QWidget *layoutWidget_14;
    QGridLayout *gridLayout_39;
    QLabel *label_98;
    QVBoxLayout *verticalLayout_14;
    QLabel *Images_6;
    QLabel *label_99;
    QLabel *label_356;
    QGridLayout *gridLayout_17;
    QLabel *label_100;
    QLabel *label_101;
    QLabel *label_102;
    QLabel *label_103;
    QLabel *LabelMaxVelSetup_6;
    QLineEdit *LineEditMaxVelSetup_6;
    QLabel *label_104;
    QLabel *label_105;
    QLabel *LabelAccelerationSetup_6;
    QLineEdit *LineEditAccelerationSetup_6;
    QLabel *label_106;
    QLabel *label_107;
    QLabel *LabelDecelerationSetup_6;
    QLineEdit *LineEditDecelerationSetup_6;
    QLabel *label_108;
    QLabel *label_109;
    QLabel *LabelPhaseCurrentSetup_6;
    QLineEdit *LineEditPhaseCurrentSetup_6;
    QLabel *label_110;
    QLabel *label_111;
    QLabel *LabelAnalogOutputSetup_6;
    QLineEdit *LineEditAnalogOutputSetup_6;
    QLabel *label_357;
    QLabel *label_358;
    QLabel *LabelVelHomeSetup_6;
    QLineEdit *LineEditVelHomeSetup_6;
    QPushButton *GetParameterDriver_6;
    QPushButton *SetParameterDriver_6;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_112;
    QLabel *LabelStatusDriver6;
    QWidget *layoutWidget_46;
    QVBoxLayout *verticalLayout_83;
    QVBoxLayout *verticalLayout_39;
    QLabel *label_310;
    QTextEdit *LabelPositionStatus_6;
    QPushButton *CheckPositionButton_6;
    QWidget *tab_9;
    QWidget *layoutWidget_16;
    QVBoxLayout *verticalLayout_63;
    QLabel *label_237;
    QLineEdit *LineEditMoveToValue_7;
    QPushButton *MoveTo_7;
    QPushButton *Homing_7;
    QWidget *layoutWidget_18;
    QVBoxLayout *verticalLayout_64;
    QLabel *label_240;
    QLabel *label_241;
    QLabel *LabelMovAnalogInput0_7;
    QLabel *label_242;
    QLabel *LabelMovCurrentPosition_7;
    QPushButton *GetParameterMov_7;
    QWidget *layoutWidget_17;
    QGridLayout *gridLayout_40;
    QLabel *label_113;
    QVBoxLayout *verticalLayout_16;
    QLabel *Images_7;
    QLabel *label_114;
    QLabel *label_359;
    QGridLayout *gridLayout_18;
    QLabel *label_115;
    QLabel *label_116;
    QLabel *label_117;
    QLabel *label_118;
    QLabel *LabelMaxVelSetup_7;
    QLineEdit *LineEditMaxVelSetup_7;
    QLabel *label_119;
    QLabel *label_120;
    QLabel *LabelAccelerationSetup_7;
    QLineEdit *LineEditAccelerationSetup_7;
    QLabel *label_121;
    QLabel *label_122;
    QLabel *LabelDecelerationSetup_7;
    QLineEdit *LineEditDecelerationSetup_7;
    QLabel *label_123;
    QLabel *label_124;
    QLabel *LabelPhaseCurrentSetup_7;
    QLineEdit *LineEditPhaseCurrentSetup_7;
    QLabel *label_125;
    QLabel *label_126;
    QLabel *LabelAnalogOutputSetup_7;
    QLineEdit *LineEditAnalogOutputSetup_7;
    QLabel *label_360;
    QLabel *label_361;
    QLabel *LabelVelHomeSetup_7;
    QLineEdit *LineEditVelHomeSetup_7;
    QPushButton *GetParameterDriver_7;
    QPushButton *SetParameterDriver_7;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_127;
    QLabel *LabelStatusDriver7;
    QWidget *layoutWidget_47;
    QVBoxLayout *verticalLayout_84;
    QVBoxLayout *verticalLayout_41;
    QLabel *label_312;
    QTextEdit *LabelPositionStatus_7;
    QPushButton *CheckPositionButton_7;
    QWidget *tab_10;
    QWidget *layoutWidget_19;
    QVBoxLayout *verticalLayout_65;
    QLabel *label_243;
    QLineEdit *LineEditMoveToValue_8;
    QPushButton *MoveTo_8;
    QPushButton *Homing_8;
    QWidget *layoutWidget_21;
    QVBoxLayout *verticalLayout_66;
    QLabel *label_246;
    QLabel *label_247;
    QLabel *LabelMovAnalogInput0_8;
    QLabel *label_248;
    QLabel *LabelMovCurrentPosition_8;
    QPushButton *GetParameterMov_8;
    QWidget *layoutWidget_20;
    QGridLayout *gridLayout_41;
    QLabel *label_128;
    QVBoxLayout *verticalLayout_18;
    QLabel *Images_8;
    QLabel *label_129;
    QLabel *label_362;
    QGridLayout *gridLayout_19;
    QLabel *label_130;
    QLabel *label_131;
    QLabel *label_132;
    QLabel *label_133;
    QLabel *LabelMaxVelSetup_8;
    QLineEdit *LineEditMaxVelSetup_8;
    QLabel *label_134;
    QLabel *label_135;
    QLabel *LabelAccelerationSetup_8;
    QLineEdit *LineEditAccelerationSetup_8;
    QLabel *label_136;
    QLabel *label_137;
    QLabel *LabelDecelerationSetup_8;
    QLineEdit *LineEditDecelerationSetup_8;
    QLabel *label_138;
    QLabel *label_139;
    QLabel *LabelPhaseCurrentSetup_8;
    QLineEdit *LineEditPhaseCurrentSetup_8;
    QLabel *label_140;
    QLabel *label_141;
    QLabel *LabelAnalogOutputSetup_8;
    QLineEdit *LineEditAnalogOutputSetup_8;
    QLabel *label_363;
    QLabel *label_364;
    QLabel *LabelVelHomeSetup_8;
    QLineEdit *LineEditVelHomeSetup_8;
    QPushButton *GetParameterDriver_8;
    QPushButton *SetParameterDriver_8;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_142;
    QLabel *LabelStatusDriver8;
    QWidget *layoutWidget_48;
    QVBoxLayout *verticalLayout_85;
    QVBoxLayout *verticalLayout_42;
    QLabel *label_317;
    QTextEdit *LabelPositionStatus_8;
    QPushButton *CheckPositionButton_8;
    QWidget *tab_11;
    QWidget *layoutWidget_22;
    QVBoxLayout *verticalLayout_67;
    QLabel *label_249;
    QLineEdit *LineEditMoveToValue_9;
    QPushButton *MoveTo_9;
    QPushButton *Homing_9;
    QWidget *layoutWidget_24;
    QVBoxLayout *verticalLayout_68;
    QLabel *label_252;
    QLabel *label_253;
    QLabel *LabelMovAnalogInput0_9;
    QLabel *label_254;
    QLabel *LabelMovCurrentPosition_9;
    QPushButton *GetParameterMov_9;
    QWidget *layoutWidget_23;
    QGridLayout *gridLayout_42;
    QLabel *label_143;
    QVBoxLayout *verticalLayout_20;
    QLabel *Images_9;
    QLabel *label_144;
    QLabel *label_365;
    QGridLayout *gridLayout_20;
    QLabel *label_145;
    QLabel *label_146;
    QLabel *label_147;
    QLabel *label_148;
    QLabel *LabelMaxVelSetup_9;
    QLineEdit *LineEditMaxVelSetup_9;
    QLabel *label_149;
    QLabel *label_150;
    QLabel *LabelAccelerationSetup_9;
    QLineEdit *LineEditAccelerationSetup_9;
    QLabel *label_151;
    QLabel *label_152;
    QLabel *LabelDecelerationSetup_9;
    QLineEdit *LineEditDecelerationSetup_9;
    QLabel *label_153;
    QLabel *label_154;
    QLabel *LabelPhaseCurrentSetup_9;
    QLineEdit *LineEditPhaseCurrentSetup_9;
    QLabel *label_155;
    QLabel *label_156;
    QLabel *LabelAnalogOutputSetup_9;
    QLineEdit *LineEditAnalogOutputSetup_9;
    QLabel *label_366;
    QLabel *label_367;
    QLabel *LabelVelHomeSetup_9;
    QLineEdit *LineEditVelHomeSetup_9;
    QPushButton *GetParameterDriver_9;
    QPushButton *SetParameterDriver_9;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_157;
    QLabel *LabelStatusDriver9;
    QWidget *layoutWidget_49;
    QVBoxLayout *verticalLayout_86;
    QVBoxLayout *verticalLayout_43;
    QLabel *label_318;
    QTextEdit *LabelPositionStatus_9;
    QPushButton *CheckPositionButton_9;
    QWidget *tab_12;
    QWidget *layoutWidget_25;
    QVBoxLayout *verticalLayout_69;
    QLabel *label_255;
    QLineEdit *LineEditMoveToValue_10;
    QPushButton *MoveTo_10;
    QPushButton *Homing_10;
    QWidget *layoutWidget_27;
    QVBoxLayout *verticalLayout_70;
    QLabel *label_258;
    QLabel *label_259;
    QLabel *LabelMovAnalogInput0_10;
    QLabel *label_260;
    QLabel *LabelMovCurrentPosition_10;
    QPushButton *GetParameterMov_10;
    QWidget *layoutWidget_26;
    QGridLayout *gridLayout_43;
    QLabel *label_158;
    QVBoxLayout *verticalLayout_22;
    QLabel *Images_10;
    QLabel *label_159;
    QLabel *label_368;
    QGridLayout *gridLayout_21;
    QLabel *label_160;
    QLabel *label_161;
    QLabel *label_162;
    QLabel *label_163;
    QLabel *LabelMaxVelSetup_10;
    QLineEdit *LineEditMaxVelSetup_10;
    QLabel *label_164;
    QLabel *label_165;
    QLabel *LabelAccelerationSetup_10;
    QLineEdit *LineEditAccelerationSetup_10;
    QLabel *label_166;
    QLabel *label_167;
    QLabel *LabelDecelerationSetup_10;
    QLineEdit *LineEditDecelerationSetup_10;
    QLabel *label_168;
    QLabel *label_169;
    QLabel *LabelPhaseCurrentSetup_10;
    QLineEdit *LineEditPhaseCurrentSetup_10;
    QLabel *label_170;
    QLabel *label_171;
    QLabel *LabelAnalogOutputSetup_10;
    QLineEdit *LineEditAnalogOutputSetup_10;
    QLabel *label_369;
    QLabel *label_370;
    QLabel *LabelVelHomeSetup_10;
    QLineEdit *LineEditVelHomeSetup_10;
    QPushButton *GetParameterDriver_10;
    QPushButton *SetParameterDriver_10;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_172;
    QLabel *LabelStatusDriver10;
    QWidget *layoutWidget_50;
    QVBoxLayout *verticalLayout_87;
    QVBoxLayout *verticalLayout_44;
    QLabel *label_319;
    QTextEdit *LabelPositionStatus_10;
    QPushButton *CheckPositionButton_10;
    QWidget *tab_13;
    QWidget *layoutWidget_28;
    QVBoxLayout *verticalLayout_71;
    QLabel *label_261;
    QLineEdit *LineEditMoveToValue_11;
    QPushButton *MoveTo_11;
    QPushButton *Homing_11;
    QWidget *layoutWidget_30;
    QVBoxLayout *verticalLayout_72;
    QLabel *label_264;
    QLabel *label_265;
    QLabel *LabelMovAnalogInput0_11;
    QLabel *label_266;
    QLabel *LabelMovCurrentPosition_11;
    QPushButton *GetParameterMov_11;
    QWidget *layoutWidget_29;
    QGridLayout *gridLayout_44;
    QLabel *label_173;
    QVBoxLayout *verticalLayout_24;
    QLabel *Images_11;
    QLabel *label_174;
    QLabel *label_371;
    QGridLayout *gridLayout_22;
    QLabel *label_175;
    QLabel *label_176;
    QLabel *label_177;
    QLabel *label_178;
    QLabel *LabelMaxVelSetup_11;
    QLineEdit *LineEditMaxVelSetup_11;
    QLabel *label_179;
    QLabel *label_180;
    QLabel *LabelAccelerationSetup_11;
    QLineEdit *LineEditAccelerationSetup_11;
    QLabel *label_181;
    QLabel *label_182;
    QLabel *LabelDecelerationSetup_11;
    QLineEdit *LineEditDecelerationSetup_11;
    QLabel *label_183;
    QLabel *label_184;
    QLabel *LabelPhaseCurrentSetup_11;
    QLineEdit *LineEditPhaseCurrentSetup_11;
    QLabel *label_185;
    QLabel *label_186;
    QLabel *LabelAnalogOutputSetup_11;
    QLineEdit *LineEditAnalogOutputSetup_11;
    QLabel *label_372;
    QLabel *label_373;
    QLabel *LabelVelHomeSetup_11;
    QLineEdit *LineEditVelHomeSetup_11;
    QPushButton *GetParameterDriver_11;
    QPushButton *SetParameterDriver_11;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_187;
    QLabel *LabelStatusDriver11;
    QWidget *layoutWidget_51;
    QVBoxLayout *verticalLayout_88;
    QVBoxLayout *verticalLayout_45;
    QLabel *label_320;
    QTextEdit *LabelPositionStatus_11;
    QPushButton *CheckPositionButton_11;
    QWidget *tab_14;
    QWidget *layoutWidget_31;
    QVBoxLayout *verticalLayout_73;
    QLabel *label_267;
    QLineEdit *LineEditMoveToValue_12;
    QPushButton *MoveTo_12;
    QPushButton *Homing_12;
    QWidget *layoutWidget_33;
    QVBoxLayout *verticalLayout_74;
    QLabel *label_270;
    QLabel *label_271;
    QLabel *LabelMovAnalogInput0_12;
    QLabel *label_272;
    QLabel *LabelMovCurrentPosition_12;
    QPushButton *GetParameterMov_12;
    QWidget *layoutWidget_32;
    QGridLayout *gridLayout_45;
    QLabel *label_188;
    QVBoxLayout *verticalLayout_26;
    QLabel *Images_12;
    QLabel *label_189;
    QLabel *label_374;
    QGridLayout *gridLayout_23;
    QLabel *label_190;
    QLabel *label_191;
    QLabel *label_192;
    QLabel *label_193;
    QLabel *LabelMaxVelSetup_12;
    QLineEdit *LineEditMaxVelSetup_12;
    QLabel *label_194;
    QLabel *label_195;
    QLabel *LabelAccelerationSetup_12;
    QLineEdit *LineEditAccelerationSetup_12;
    QLabel *label_196;
    QLabel *label_197;
    QLabel *LabelDecelerationSetup_12;
    QLineEdit *LineEditDecelerationSetup_12;
    QLabel *label_198;
    QLabel *label_199;
    QLabel *LabelPhaseCurrentSetup_12;
    QLineEdit *LineEditPhaseCurrentSetup_12;
    QLabel *label_200;
    QLabel *label_201;
    QLabel *LabelAnalogOutputSetup_12;
    QLineEdit *LineEditAnalogOutputSetup_12;
    QLabel *label_375;
    QLabel *label_376;
    QLabel *LabelVelHomeSetup_12;
    QLineEdit *LineEditVelHomeSetup_12;
    QPushButton *GetParameterDriver_12;
    QPushButton *SetParameterDriver_12;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_202;
    QLabel *LabelStatusDriver12;
    QWidget *layoutWidget_52;
    QVBoxLayout *verticalLayout_89;
    QVBoxLayout *verticalLayout_46;
    QLabel *label_321;
    QTextEdit *LabelPositionStatus_12;
    QPushButton *CheckPositionButton_12;
    QWidget *tab_18;
    QWidget *layoutWidget_37;
    QVBoxLayout *verticalLayout_75;
    QLabel *label_313;
    QLineEdit *LineEditMoveToValue_13;
    QPushButton *MoveTo_13;
    QPushButton *Homing_13;
    QWidget *layoutWidget_38;
    QVBoxLayout *verticalLayout_76;
    QLabel *label_314;
    QLabel *label_315;
    QLabel *LabelMovAnalogInput0_13;
    QLabel *label_316;
    QLabel *LabelMovCurrentPosition_13;
    QPushButton *GetParameterMov_13;
    QWidget *layoutWidget_34;
    QGridLayout *gridLayout_46;
    QLabel *label_212;
    QVBoxLayout *verticalLayout_29;
    QLabel *Images_13;
    QLabel *label_213;
    QLabel *label_377;
    QGridLayout *gridLayout_29;
    QLabel *label_214;
    QLabel *label_215;
    QLabel *label_220;
    QLabel *label_221;
    QLabel *LabelMaxVelSetup_13;
    QLineEdit *LineEditMaxVelSetup_13;
    QLabel *label_226;
    QLabel *label_227;
    QLabel *LabelAccelerationSetup_13;
    QLineEdit *LineEditAccelerationSetup_13;
    QLabel *label_232;
    QLabel *label_233;
    QLabel *LabelDecelerationSetup_13;
    QLineEdit *LineEditDecelerationSetup_13;
    QLabel *label_238;
    QLabel *label_239;
    QLabel *LabelPhaseCurrentSetup_13;
    QLineEdit *LineEditPhaseCurrentSetup_13;
    QLabel *label_244;
    QLabel *label_245;
    QLabel *LabelAnalogOutputSetup_13;
    QLineEdit *LineEditAnalogOutputSetup_13;
    QLabel *label_378;
    QLabel *label_379;
    QLabel *LabelVelHomeSetup_13;
    QLineEdit *LineEditVelHomeSetup_13;
    QPushButton *GetParameterDriver_13;
    QPushButton *SetParameterDriver_13;
    QVBoxLayout *verticalLayout_30;
    QLabel *label_250;
    QLabel *LabelStatusDriver13;
    QWidget *layoutWidget_53;
    QVBoxLayout *verticalLayout_90;
    QVBoxLayout *verticalLayout_47;
    QLabel *label_322;
    QTextEdit *LabelPositionStatus_13;
    QPushButton *CheckPositionButton_13;
    QWidget *tab_19;
    QWidget *layoutWidget_40;
    QVBoxLayout *verticalLayout_78;
    QLabel *label_334;
    QLineEdit *LineEditMoveToValue_14;
    QPushButton *MoveTo_14;
    QPushButton *Homing_14;
    QWidget *layoutWidget_41;
    QVBoxLayout *verticalLayout_79;
    QLabel *label_335;
    QLabel *label_336;
    QLabel *LabelMovAnalogInput0_14;
    QLabel *label_337;
    QLabel *LabelMovCurrentPosition_14;
    QPushButton *GetParameterMov_14;
    QWidget *layoutWidget_39;
    QGridLayout *gridLayout_47;
    QLabel *label_251;
    QVBoxLayout *verticalLayout_31;
    QLabel *Images_14;
    QLabel *label_256;
    QLabel *label_380;
    QGridLayout *gridLayout_30;
    QLabel *label_257;
    QLabel *label_262;
    QLabel *label_263;
    QLabel *label_268;
    QLabel *LabelMaxVelSetup_14;
    QLineEdit *LineEditMaxVelSetup_14;
    QLabel *label_269;
    QLabel *label_279;
    QLabel *LabelAccelerationSetup_14;
    QLineEdit *LineEditAccelerationSetup_14;
    QLabel *label_280;
    QLabel *label_281;
    QLabel *LabelDecelerationSetup_14;
    QLineEdit *LineEditDecelerationSetup_14;
    QLabel *label_282;
    QLabel *label_283;
    QLabel *LabelPhaseCurrentSetup_14;
    QLineEdit *LineEditPhaseCurrentSetup_14;
    QLabel *label_284;
    QLabel *label_285;
    QLabel *LabelAnalogOutputSetup_14;
    QLineEdit *LineEditAnalogOutputSetup_14;
    QLabel *label_381;
    QLabel *label_382;
    QLabel *LabelVelHomeSetup_14;
    QLineEdit *LineEditVelHomeSetup_14;
    QPushButton *GetParameterDriver_14;
    QPushButton *SetParameterDriver_14;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_286;
    QLabel *LabelStatusDriver14;
    QWidget *layoutWidget_54;
    QVBoxLayout *verticalLayout_91;
    QVBoxLayout *verticalLayout_48;
    QLabel *label_323;
    QTextEdit *LabelPositionStatus_14;
    QPushButton *CheckPositionButton_14;
    QWidget *tab_16;
    QGridLayout *gridLayout_11;
    QTabWidget *AllDriver;
    QWidget *AllMovimentation;
    QWidget *layoutWidget_35;
    QGridLayout *gridLayout_26;
    QPushButton *Homing_all;
    QVBoxLayout *verticalLayout_77;
    QLabel *label_292;
    QLineEdit *LineEditMoveToValue_all;
    QPushButton *MoveTo_all;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_24;
    QLabel *label_274;
    QLabel *label_203;
    QLineEdit *LineEditMaxVelSetup_all;
    QLineEdit *LineEditPhaseCurrentSetup_all;
    QLabel *label_275;
    QLabel *label_204;
    QLineEdit *LineEditAccelerationSetup_all;
    QLineEdit *LineEditAnalogOutputSetup_all;
    QLabel *label_273;
    QLineEdit *LineEditDecelerationSetup_all;
    QPushButton *SetParameterDriver_all;
    QLabel *label_287;
    QLineEdit *LineEditVelHomeSetup_all;
    QLabel *label_276;
    QLabel *label_277;
    QLabel *label_278;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_25;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_all;
    QWidget *AllParameter;
    QGridLayout *gridLayout_31;
    QVBoxLayout *verticalLayout_33;
    QGridLayout *gridLayout_27;
    QLabel *label_305;
    QLabel *label_306;
    QLabel *label_307;
    QLabel *label_308;
    QLabel *label_324;
    QLabel *label_293;
    QLabel *LabelAllAI0_1;
    QLabel *LabelAllCurrPos_1;
    QLabel *LabelAllAO_1;
    QLabel *LabelAllStatus_1;
    QLabel *LabelAllPosStatus_1;
    QLabel *label_294;
    QLabel *LabelAllAI0_2;
    QLabel *LabelAllCurrPos_2;
    QLabel *LabelAllAO_2;
    QLabel *LabelAllStatus_2;
    QLabel *LabelAllPosStatus_2;
    QLabel *label_295;
    QLabel *LabelAllAI0_3;
    QLabel *LabelAllCurrPos_3;
    QLabel *LabelAllAO_3;
    QLabel *LabelAllStatus_3;
    QLabel *LabelAllPosStatus_3;
    QLabel *label_296;
    QLabel *LabelAllAI0_4;
    QLabel *LabelAllCurrPos_4;
    QLabel *LabelAllAO_4;
    QLabel *LabelAllStatus_4;
    QLabel *LabelAllPosStatus_4;
    QLabel *label_297;
    QLabel *LabelAllAI0_5;
    QLabel *LabelAllCurrPos_5;
    QLabel *LabelAllAO_5;
    QLabel *LabelAllStatus_5;
    QLabel *LabelAllPosStatus_5;
    QLabel *label_298;
    QLabel *LabelAllAI0_6;
    QLabel *LabelAllCurrPos_6;
    QLabel *LabelAllAO_6;
    QLabel *LabelAllStatus_6;
    QLabel *LabelAllPosStatus_6;
    QLabel *label_299;
    QLabel *LabelAllAI0_7;
    QLabel *LabelAllCurrPos_7;
    QLabel *LabelAllAO_7;
    QLabel *LabelAllStatus_7;
    QLabel *LabelAllPosStatus_7;
    QLabel *label_300;
    QLabel *LabelAllAI0_8;
    QLabel *LabelAllCurrPos_8;
    QLabel *LabelAllAO_8;
    QLabel *LabelAllStatus_8;
    QLabel *LabelAllPosStatus_8;
    QLabel *label_301;
    QLabel *LabelAllAI0_9;
    QLabel *LabelAllCurrPos_9;
    QLabel *LabelAllAO_9;
    QLabel *LabelAllStatus_9;
    QLabel *LabelAllPosStatus_9;
    QLabel *label_302;
    QLabel *LabelAllAI0_10;
    QLabel *LabelAllCurrPos_10;
    QLabel *LabelAllAO_10;
    QLabel *LabelAllStatus_10;
    QLabel *LabelAllPosStatus_10;
    QLabel *label_303;
    QLabel *LabelAllAI0_11;
    QLabel *LabelAllCurrPos_11;
    QLabel *LabelAllAO_11;
    QLabel *LabelAllStatus_11;
    QLabel *LabelAllPosStatus_11;
    QLabel *label_304;
    QLabel *LabelAllAI0_12;
    QLabel *LabelAllCurrPos_12;
    QLabel *LabelAllAO_12;
    QLabel *LabelAllStatus_12;
    QLabel *LabelAllPosStatus_12;
    QLabel *label_338;
    QLabel *LabelAllAI0_13;
    QLabel *LabelAllCurrPos_13;
    QLabel *LabelAllAO_13;
    QLabel *LabelAllStatus_13;
    QLabel *LabelAllPosStatus_13;
    QLabel *label_339;
    QLabel *LabelAllAI0_14;
    QLabel *LabelAllCurrPos_14;
    QLabel *LabelAllAO_14;
    QLabel *LabelAllStatus_14;
    QLabel *LabelAllPosStatus_14;
    QPushButton *GetAllParameter;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *CommandString;
    QPushButton *CommandStringButton;
    QTextEdit *ExpertModeMessage;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(786, 829);
        QPalette palette;
        QBrush brush(QColor(255, 255, 220, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Driver.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_34 = new QGridLayout(centralWidget);
        gridLayout_34->setSpacing(6);
        gridLayout_34->setContentsMargins(11, 11, 11, 11);
        gridLayout_34->setObjectName(QStringLiteral("gridLayout_34"));
        AllDriverTab = new QTabWidget(centralWidget);
        AllDriverTab->setObjectName(QStringLiteral("AllDriverTab"));
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        gridLayout_8 = new QGridLayout(tab_15);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        ConnectProgrammerPath = new QLineEdit(tab_15);
        ConnectProgrammerPath->setObjectName(QStringLiteral("ConnectProgrammerPath"));

        gridLayout_4->addWidget(ConnectProgrammerPath, 1, 0, 1, 1);

        ConnectProgrammer = new QPushButton(tab_15);
        ConnectProgrammer->setObjectName(QStringLiteral("ConnectProgrammer"));
        ConnectProgrammer->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(ConnectProgrammer, 2, 0, 1, 1);

        label_2 = new QLabel(tab_15);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        DeviceListButton = new QPushButton(tab_15);
        DeviceListButton->setObjectName(QStringLiteral("DeviceListButton"));

        gridLayout_4->addWidget(DeviceListButton, 3, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        ProgrammerConnectionLog = new QTextEdit(tab_15);
        ProgrammerConnectionLog->setObjectName(QStringLiteral("ProgrammerConnectionLog"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        QBrush brush3(QColor(159, 158, 158, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        ProgrammerConnectionLog->setPalette(palette1);
        ProgrammerConnectionLog->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        ProgrammerConnectionLog->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_7->addWidget(ProgrammerConnectionLog, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 9, 0, 1, 1);

        line_2 = new QFrame(tab_15);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_2, 7, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_17 = new QLabel(tab_15);
        label_17->setObjectName(QStringLiteral("label_17"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);

        horizontalLayout_4->addWidget(label_17);

        label_statusAll = new QLabel(tab_15);
        label_statusAll->setObjectName(QStringLiteral("label_statusAll"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_statusAll->setFont(font1);

        horizontalLayout_4->addWidget(label_statusAll);


        gridLayout_8->addLayout(horizontalLayout_4, 12, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        CollSoftConnectionLog = new QTextEdit(tab_15);
        CollSoftConnectionLog->setObjectName(QStringLiteral("CollSoftConnectionLog"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        CollSoftConnectionLog->setPalette(palette2);
        CollSoftConnectionLog->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        CollSoftConnectionLog->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(CollSoftConnectionLog, 1, 1, 1, 1);

        label_7 = new QLabel(tab_15);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(tab_15);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        ServerIp = new QLineEdit(tab_15);
        ServerIp->setObjectName(QStringLiteral("ServerIp"));

        gridLayout_3->addWidget(ServerIp, 0, 1, 1, 1);

        label_3 = new QLabel(tab_15);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        ServerPort = new QLineEdit(tab_15);
        ServerPort->setObjectName(QStringLiteral("ServerPort"));

        gridLayout_3->addWidget(ServerPort, 1, 1, 1, 1);

        ConnectToServerButton = new QPushButton(tab_15);
        ConnectToServerButton->setObjectName(QStringLiteral("ConnectToServerButton"));
        ConnectToServerButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(ConnectToServerButton, 2, 0, 1, 2);

        DisconnectToServerButton = new QPushButton(tab_15);
        DisconnectToServerButton->setObjectName(QStringLiteral("DisconnectToServerButton"));
        DisconnectToServerButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(DisconnectToServerButton, 3, 0, 1, 2);


        gridLayout_6->addLayout(gridLayout_3, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 5, 0, 1, 1);

        label_16 = new QLabel(tab_15);
        label_16->setObjectName(QStringLiteral("label_16"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_16->setFont(font2);

        gridLayout_8->addWidget(label_16, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_14 = new QLabel(tab_15);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        horizontalLayout_3->addWidget(label_14);

        label_status1 = new QLabel(tab_15);
        label_status1->setObjectName(QStringLiteral("label_status1"));
        label_status1->setFont(font1);

        horizontalLayout_3->addWidget(label_status1);


        gridLayout_8->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        line = new QFrame(tab_15);
        line->setObjectName(QStringLiteral("line"));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        line->setFont(font3);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(tab_15);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        horizontalLayout_2->addWidget(label_11);

        label_status2 = new QLabel(tab_15);
        label_status2->setObjectName(QStringLiteral("label_status2"));
        label_status2->setFont(font1);

        horizontalLayout_2->addWidget(label_status2);


        gridLayout_8->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        label_8 = new QLabel(tab_15);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        gridLayout_8->addWidget(label_8, 8, 0, 1, 1);

        line_3 = new QFrame(tab_15);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_3, 11, 0, 1, 1);

        label_13 = new QLabel(tab_15);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        gridLayout_8->addWidget(label_13, 4, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_5 = new QLabel(tab_15);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_5->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(tab_15);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_5->addWidget(label_6, 0, 0, 1, 6);

        CheckExistence = new QPushButton(tab_15);
        CheckExistence->setObjectName(QStringLiteral("CheckExistence"));
        CheckExistence->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(CheckExistence, 3, 2, 1, 2);

        ConnectExistence = new QPushButton(tab_15);
        ConnectExistence->setObjectName(QStringLiteral("ConnectExistence"));
        ConnectExistence->setCursor(QCursor(Qt::PointingHandCursor));
        ConnectExistence->setToolTipDuration(-1);

        gridLayout_5->addWidget(ConnectExistence, 3, 0, 1, 1);

        KillProcess_CollSoft = new QPushButton(tab_15);
        KillProcess_CollSoft->setObjectName(QStringLiteral("KillProcess_CollSoft"));
        KillProcess_CollSoft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(KillProcess_CollSoft, 3, 4, 1, 1);

        NewProcess_CollSoft = new QPushButton(tab_15);
        NewProcess_CollSoft->setObjectName(QStringLiteral("NewProcess_CollSoft"));
        NewProcess_CollSoft->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(NewProcess_CollSoft, 3, 5, 1, 1);

        label_4 = new QLabel(tab_15);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 1, 0, 1, 1);

        DisconnectExistence = new QPushButton(tab_15);
        DisconnectExistence->setObjectName(QStringLiteral("DisconnectExistence"));
        DisconnectExistence->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(DisconnectExistence, 3, 1, 1, 1);

        CheckExistenceLineIpEdit = new QLineEdit(tab_15);
        CheckExistenceLineIpEdit->setObjectName(QStringLiteral("CheckExistenceLineIpEdit"));

        gridLayout_5->addWidget(CheckExistenceLineIpEdit, 1, 1, 1, 1);

        CheckExistenceLinePortEdit = new QLineEdit(tab_15);
        CheckExistenceLinePortEdit->setObjectName(QStringLiteral("CheckExistenceLinePortEdit"));

        gridLayout_5->addWidget(CheckExistenceLinePortEdit, 2, 1, 1, 1);

        CheckExistenceLog = new QTextEdit(tab_15);
        CheckExistenceLog->setObjectName(QStringLiteral("CheckExistenceLog"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        CheckExistenceLog->setPalette(palette3);
        CheckExistenceLog->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        CheckExistenceLog->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(CheckExistenceLog, 1, 2, 2, 4);


        gridLayout_8->addLayout(gridLayout_5, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_9 = new QLabel(tab_15);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        horizontalLayout->addWidget(label_9);

        label_status3 = new QLabel(tab_15);
        label_status3->setObjectName(QStringLiteral("label_status3"));
        label_status3->setFont(font1);

        horizontalLayout->addWidget(label_status3);


        gridLayout_8->addLayout(horizontalLayout, 10, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/webBlue.png"), QSize(), QIcon::Normal, QIcon::Off);
        AllDriverTab->addTab(tab_15, icon1, QString());
        tab_17 = new QWidget();
        tab_17->setObjectName(QStringLiteral("tab_17"));
        horizontalLayout_5 = new QHBoxLayout(tab_17);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_46 = new QLabel(tab_17);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_5->addWidget(label_46);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Accepted = new QLabel(tab_17);
        label_Accepted->setObjectName(QStringLiteral("label_Accepted"));
        label_Accepted->setFont(font);

        verticalLayout->addWidget(label_Accepted);

        CheckDrvAssoc = new QPushButton(tab_17);
        CheckDrvAssoc->setObjectName(QStringLiteral("CheckDrvAssoc"));
        CheckDrvAssoc->setAcceptDrops(false);

        verticalLayout->addWidget(CheckDrvAssoc);

        ReadSerialDrvLog = new QPushButton(tab_17);
        ReadSerialDrvLog->setObjectName(QStringLiteral("ReadSerialDrvLog"));

        verticalLayout->addWidget(ReadSerialDrvLog);


        gridLayout_12->addLayout(verticalLayout, 0, 0, 1, 1);

        GeneralConnectionLog = new QTextEdit(tab_17);
        GeneralConnectionLog->setObjectName(QStringLiteral("GeneralConnectionLog"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        GeneralConnectionLog->setPalette(palette4);
        GeneralConnectionLog->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        GeneralConnectionLog->setInputMethodHints(Qt::ImhMultiLine);
        GeneralConnectionLog->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        GeneralConnectionLog->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        GeneralConnectionLog->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        GeneralConnectionLog->setLineWrapMode(QTextEdit::NoWrap);
        GeneralConnectionLog->setTextInteractionFlags(Qt::TextSelectableByMouse);

        gridLayout_12->addWidget(GeneralConnectionLog, 0, 1, 6, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_Accepted_Par = new QLabel(tab_17);
        label_Accepted_Par->setObjectName(QStringLiteral("label_Accepted_Par"));
        label_Accepted_Par->setFont(font);

        verticalLayout_9->addWidget(label_Accepted_Par);

        CheckParAssoc = new QPushButton(tab_17);
        CheckParAssoc->setObjectName(QStringLiteral("CheckParAssoc"));

        verticalLayout_9->addWidget(CheckParAssoc);

        ReadFileParLog = new QPushButton(tab_17);
        ReadFileParLog->setObjectName(QStringLiteral("ReadFileParLog"));

        verticalLayout_9->addWidget(ReadFileParLog);


        gridLayout_12->addLayout(verticalLayout_9, 1, 0, 1, 1);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        label_Accepted_Encode = new QLabel(tab_17);
        label_Accepted_Encode->setObjectName(QStringLiteral("label_Accepted_Encode"));
        label_Accepted_Encode->setFont(font);

        verticalLayout_28->addWidget(label_Accepted_Encode);

        CheckEncoderAssoc = new QPushButton(tab_17);
        CheckEncoderAssoc->setObjectName(QStringLiteral("CheckEncoderAssoc"));

        verticalLayout_28->addWidget(CheckEncoderAssoc);

        ReadEncoderLog = new QPushButton(tab_17);
        ReadEncoderLog->setObjectName(QStringLiteral("ReadEncoderLog"));

        verticalLayout_28->addWidget(ReadEncoderLog);


        gridLayout_12->addLayout(verticalLayout_28, 2, 0, 1, 1);

        ReadGeneralLog = new QPushButton(tab_17);
        ReadGeneralLog->setObjectName(QStringLiteral("ReadGeneralLog"));

        gridLayout_12->addWidget(ReadGeneralLog, 3, 0, 1, 1);

        verticalLayout_40 = new QVBoxLayout();
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        label_325 = new QLabel(tab_17);
        label_325->setObjectName(QStringLiteral("label_325"));

        verticalLayout_40->addWidget(label_325);

        ReadActualEncoderValue = new QPushButton(tab_17);
        ReadActualEncoderValue->setObjectName(QStringLiteral("ReadActualEncoderValue"));

        verticalLayout_40->addWidget(ReadActualEncoderValue);

        LoadEncoderFromFileButton = new QPushButton(tab_17);
        LoadEncoderFromFileButton->setObjectName(QStringLiteral("LoadEncoderFromFileButton"));

        verticalLayout_40->addWidget(LoadEncoderFromFileButton);

        label_311 = new QLabel(tab_17);
        label_311->setObjectName(QStringLiteral("label_311"));

        verticalLayout_40->addWidget(label_311);


        gridLayout_12->addLayout(verticalLayout_40, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        InternalSerialNumberStatus = new QLabel(tab_17);
        InternalSerialNumberStatus->setObjectName(QStringLiteral("InternalSerialNumberStatus"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        InternalSerialNumberStatus->setFont(font4);

        verticalLayout_2->addWidget(InternalSerialNumberStatus);

        InternalParameterStatus = new QLabel(tab_17);
        InternalParameterStatus->setObjectName(QStringLiteral("InternalParameterStatus"));
        InternalParameterStatus->setFont(font4);

        verticalLayout_2->addWidget(InternalParameterStatus);

        InternalEncoderValuesStatus = new QLabel(tab_17);
        InternalEncoderValuesStatus->setObjectName(QStringLiteral("InternalEncoderValuesStatus"));
        InternalEncoderValuesStatus->setFont(font4);

        verticalLayout_2->addWidget(InternalEncoderValuesStatus);

        CheckInternalStatus = new QPushButton(tab_17);
        CheckInternalStatus->setObjectName(QStringLiteral("CheckInternalStatus"));

        verticalLayout_2->addWidget(CheckInternalStatus);


        gridLayout_12->addLayout(verticalLayout_2, 5, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_12);

        label_45 = new QLabel(tab_17);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_5->addWidget(label_45);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/txtIconNoBackground.png"), QSize(), QIcon::Normal, QIcon::Off);
        AllDriverTab->addTab(tab_17, icon2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_13 = new QGridLayout(tab);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_47 = new QLabel(tab_3);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(461, 218, 16, 17));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(480, 530, 148, 121));
        verticalLayout_52 = new QVBoxLayout(layoutWidget);
        verticalLayout_52->setSpacing(6);
        verticalLayout_52->setContentsMargins(11, 11, 11, 11);
        verticalLayout_52->setObjectName(QStringLiteral("verticalLayout_52"));
        verticalLayout_52->setContentsMargins(0, 0, 0, 0);
        label_52 = new QLabel(layoutWidget);
        label_52->setObjectName(QStringLiteral("label_52"));

        verticalLayout_52->addWidget(label_52);

        LineEditMoveToValue_1 = new QLineEdit(layoutWidget);
        LineEditMoveToValue_1->setObjectName(QStringLiteral("LineEditMoveToValue_1"));

        verticalLayout_52->addWidget(LineEditMoveToValue_1);

        MoveTo_1 = new QPushButton(layoutWidget);
        MoveTo_1->setObjectName(QStringLiteral("MoveTo_1"));

        verticalLayout_52->addWidget(MoveTo_1);

        Homing_1 = new QPushButton(layoutWidget);
        Homing_1->setObjectName(QStringLiteral("Homing_1"));

        verticalLayout_52->addWidget(Homing_1);

        label_53 = new QLabel(tab_3);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(461, 381, 16, 17));
        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_51 = new QVBoxLayout(layoutWidget1);
        verticalLayout_51->setSpacing(6);
        verticalLayout_51->setContentsMargins(11, 11, 11, 11);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        verticalLayout_51->setContentsMargins(0, 0, 0, 0);
        label_49 = new QLabel(layoutWidget1);
        label_49->setObjectName(QStringLiteral("label_49"));
        QFont font5;
        font5.setPointSize(16);
        label_49->setFont(font5);

        verticalLayout_51->addWidget(label_49);

        label_50 = new QLabel(layoutWidget1);
        label_50->setObjectName(QStringLiteral("label_50"));

        verticalLayout_51->addWidget(label_50);

        LabelMovAnalogInput0_1 = new QLabel(layoutWidget1);
        LabelMovAnalogInput0_1->setObjectName(QStringLiteral("LabelMovAnalogInput0_1"));

        verticalLayout_51->addWidget(LabelMovAnalogInput0_1);

        label_51 = new QLabel(layoutWidget1);
        label_51->setObjectName(QStringLiteral("label_51"));

        verticalLayout_51->addWidget(label_51);

        LabelMovCurrentPosition_1 = new QLabel(layoutWidget1);
        LabelMovCurrentPosition_1->setObjectName(QStringLiteral("LabelMovCurrentPosition_1"));

        verticalLayout_51->addWidget(LabelMovCurrentPosition_1);

        GetParameterMov_1 = new QPushButton(layoutWidget1);
        GetParameterMov_1->setObjectName(QStringLiteral("GetParameterMov_1"));

        verticalLayout_51->addWidget(GetParameterMov_1);

        label_211 = new QLabel(tab_3);
        label_211->setObjectName(QStringLiteral("label_211"));
        label_211->setGeometry(QRect(217, 75, 16, 17));
        label_210 = new QLabel(tab_3);
        label_210->setObjectName(QStringLiteral("label_210"));
        label_210->setGeometry(QRect(99, 99, 16, 17));
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_33 = new QGridLayout(layoutWidget2);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QStringLiteral("gridLayout_33"));
        gridLayout_33->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font5);

        gridLayout_33->addWidget(label_10, 0, 0, 1, 3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Images = new QLabel(layoutWidget2);
        Images->setObjectName(QStringLiteral("Images"));
        Images->setMinimumSize(QSize(0, 100));
        Images->setMaximumSize(QSize(200, 150));
        Images->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images->setScaledContents(true);

        verticalLayout_3->addWidget(Images);

        label_29 = new QLabel(layoutWidget2);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_3->addWidget(label_29);


        gridLayout_33->addLayout(verticalLayout_3, 1, 0, 1, 1);

        label_343 = new QLabel(layoutWidget2);
        label_343->setObjectName(QStringLiteral("label_343"));
        label_343->setMinimumSize(QSize(25, 0));

        gridLayout_33->addWidget(label_343, 1, 1, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_9->addWidget(label_12, 0, 0, 1, 1);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_9->addWidget(label_15, 0, 1, 1, 1);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_9->addWidget(label_18, 1, 0, 1, 1);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_9->addWidget(label_21, 1, 1, 1, 1);

        LabelMaxVelSetup_1 = new QLabel(layoutWidget2);
        LabelMaxVelSetup_1->setObjectName(QStringLiteral("LabelMaxVelSetup_1"));

        gridLayout_9->addWidget(LabelMaxVelSetup_1, 2, 0, 1, 1);

        LineEditMaxVelSetup_1 = new QLineEdit(layoutWidget2);
        LineEditMaxVelSetup_1->setObjectName(QStringLiteral("LineEditMaxVelSetup_1"));

        gridLayout_9->addWidget(LineEditMaxVelSetup_1, 2, 1, 1, 1);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_9->addWidget(label_19, 3, 0, 1, 1);

        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_9->addWidget(label_22, 3, 1, 1, 1);

        LabelAccelerationSetup_1 = new QLabel(layoutWidget2);
        LabelAccelerationSetup_1->setObjectName(QStringLiteral("LabelAccelerationSetup_1"));

        gridLayout_9->addWidget(LabelAccelerationSetup_1, 4, 0, 1, 1);

        LineEditAccelerationSetup_1 = new QLineEdit(layoutWidget2);
        LineEditAccelerationSetup_1->setObjectName(QStringLiteral("LineEditAccelerationSetup_1"));

        gridLayout_9->addWidget(LineEditAccelerationSetup_1, 4, 1, 1, 1);

        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_9->addWidget(label_20, 5, 0, 1, 1);

        label_23 = new QLabel(layoutWidget2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_9->addWidget(label_23, 5, 1, 1, 1);

        LabelDecelerationSetup_1 = new QLabel(layoutWidget2);
        LabelDecelerationSetup_1->setObjectName(QStringLiteral("LabelDecelerationSetup_1"));

        gridLayout_9->addWidget(LabelDecelerationSetup_1, 6, 0, 1, 1);

        LineEditDecelerationSetup_1 = new QLineEdit(layoutWidget2);
        LineEditDecelerationSetup_1->setObjectName(QStringLiteral("LineEditDecelerationSetup_1"));

        gridLayout_9->addWidget(LineEditDecelerationSetup_1, 6, 1, 1, 1);

        label_24 = new QLabel(layoutWidget2);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_9->addWidget(label_24, 7, 0, 1, 1);

        label_25 = new QLabel(layoutWidget2);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_9->addWidget(label_25, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_1 = new QLabel(layoutWidget2);
        LabelPhaseCurrentSetup_1->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_1"));

        gridLayout_9->addWidget(LabelPhaseCurrentSetup_1, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_1 = new QLineEdit(layoutWidget2);
        LineEditPhaseCurrentSetup_1->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_1"));

        gridLayout_9->addWidget(LineEditPhaseCurrentSetup_1, 8, 1, 1, 1);

        label_41 = new QLabel(layoutWidget2);
        label_41->setObjectName(QStringLiteral("label_41"));

        gridLayout_9->addWidget(label_41, 9, 0, 1, 1);

        label_42 = new QLabel(layoutWidget2);
        label_42->setObjectName(QStringLiteral("label_42"));

        gridLayout_9->addWidget(label_42, 9, 1, 1, 1);

        LabelAnalogOutputSetup_1 = new QLabel(layoutWidget2);
        LabelAnalogOutputSetup_1->setObjectName(QStringLiteral("LabelAnalogOutputSetup_1"));

        gridLayout_9->addWidget(LabelAnalogOutputSetup_1, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_1 = new QLineEdit(layoutWidget2);
        LineEditAnalogOutputSetup_1->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_1"));

        gridLayout_9->addWidget(LineEditAnalogOutputSetup_1, 10, 1, 1, 1);

        label_342 = new QLabel(layoutWidget2);
        label_342->setObjectName(QStringLiteral("label_342"));

        gridLayout_9->addWidget(label_342, 11, 0, 1, 1);

        label_341 = new QLabel(layoutWidget2);
        label_341->setObjectName(QStringLiteral("label_341"));

        gridLayout_9->addWidget(label_341, 11, 1, 1, 1);

        LabelVelHomeSetup_1 = new QLabel(layoutWidget2);
        LabelVelHomeSetup_1->setObjectName(QStringLiteral("LabelVelHomeSetup_1"));

        gridLayout_9->addWidget(LabelVelHomeSetup_1, 12, 0, 1, 1);

        LineEditVelHomeSetup_1 = new QLineEdit(layoutWidget2);
        LineEditVelHomeSetup_1->setObjectName(QStringLiteral("LineEditVelHomeSetup_1"));

        gridLayout_9->addWidget(LineEditVelHomeSetup_1, 12, 1, 1, 1);

        GetParameterDriver_1 = new QPushButton(layoutWidget2);
        GetParameterDriver_1->setObjectName(QStringLiteral("GetParameterDriver_1"));

        gridLayout_9->addWidget(GetParameterDriver_1, 13, 0, 1, 1);

        SetParameterDriver_1 = new QPushButton(layoutWidget2);
        SetParameterDriver_1->setObjectName(QStringLiteral("SetParameterDriver_1"));

        gridLayout_9->addWidget(SetParameterDriver_1, 13, 1, 1, 1);


        gridLayout_33->addLayout(gridLayout_9, 1, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_27 = new QLabel(layoutWidget2);
        label_27->setObjectName(QStringLiteral("label_27"));
        QFont font6;
        font6.setPointSize(14);
        label_27->setFont(font6);

        verticalLayout_4->addWidget(label_27);

        LabelStatusDriver1 = new QLabel(layoutWidget2);
        LabelStatusDriver1->setObjectName(QStringLiteral("LabelStatusDriver1"));
        QPalette palette5;
        QBrush brush4(QColor(60, 60, 60, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        LabelStatusDriver1->setPalette(palette5);
        LabelStatusDriver1->setFont(font6);

        verticalLayout_4->addWidget(LabelStatusDriver1);


        gridLayout_33->addLayout(verticalLayout_4, 2, 0, 1, 3);

        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(480, 270, 155, 121));
        verticalLayout_49 = new QVBoxLayout(layoutWidget3);
        verticalLayout_49->setSpacing(6);
        verticalLayout_49->setContentsMargins(11, 11, 11, 11);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        verticalLayout_49->setContentsMargins(0, 0, 0, 0);
        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        label_288 = new QLabel(layoutWidget3);
        label_288->setObjectName(QStringLiteral("label_288"));
        label_288->setFont(font6);

        verticalLayout_34->addWidget(label_288);

        LabelPositionStatus_1 = new QTextEdit(layoutWidget3);
        LabelPositionStatus_1->setObjectName(QStringLiteral("LabelPositionStatus_1"));
        LabelPositionStatus_1->setMaximumSize(QSize(151, 51));
        QPalette palette6;
        QBrush brush5(QColor(242, 241, 240, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_1->setPalette(palette6);
        LabelPositionStatus_1->setFont(font4);
        LabelPositionStatus_1->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_1->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_34->addWidget(LabelPositionStatus_1);


        verticalLayout_49->addLayout(verticalLayout_34);

        CheckPositionButton_1 = new QPushButton(layoutWidget3);
        CheckPositionButton_1->setObjectName(QStringLiteral("CheckPositionButton_1"));

        verticalLayout_49->addWidget(CheckPositionButton_1);

        layoutWidget_55 = new QWidget(tab_3);
        layoutWidget_55->setObjectName(QStringLiteral("layoutWidget_55"));
        layoutWidget_55->setGeometry(QRect(480, 400, 155, 121));
        verticalLayout_92 = new QVBoxLayout(layoutWidget_55);
        verticalLayout_92->setSpacing(6);
        verticalLayout_92->setContentsMargins(11, 11, 11, 11);
        verticalLayout_92->setObjectName(QStringLiteral("verticalLayout_92"));
        verticalLayout_92->setContentsMargins(0, 0, 0, 0);
        verticalLayout_93 = new QVBoxLayout();
        verticalLayout_93->setSpacing(6);
        verticalLayout_93->setObjectName(QStringLiteral("verticalLayout_93"));
        label_326 = new QLabel(layoutWidget_55);
        label_326->setObjectName(QStringLiteral("label_326"));
        label_326->setFont(font6);

        verticalLayout_93->addWidget(label_326);

        LabelDrvStatus_1 = new QTextEdit(layoutWidget_55);
        LabelDrvStatus_1->setObjectName(QStringLiteral("LabelDrvStatus_1"));
        LabelDrvStatus_1->setMaximumSize(QSize(151, 51));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelDrvStatus_1->setPalette(palette7);
        LabelDrvStatus_1->setFont(font4);
        LabelDrvStatus_1->setFrameShape(QFrame::NoFrame);
        LabelDrvStatus_1->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_93->addWidget(LabelDrvStatus_1);


        verticalLayout_92->addLayout(verticalLayout_93);

        CheckDrvStatusButton_1 = new QPushButton(layoutWidget_55);
        CheckDrvStatusButton_1->setObjectName(QStringLiteral("CheckDrvStatusButton_1"));

        verticalLayout_92->addWidget(CheckDrvStatusButton_1);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        layoutWidget_2 = new QWidget(tab_4);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(480, 530, 148, 121));
        verticalLayout_53 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_53->setSpacing(6);
        verticalLayout_53->setContentsMargins(11, 11, 11, 11);
        verticalLayout_53->setObjectName(QStringLiteral("verticalLayout_53"));
        verticalLayout_53->setContentsMargins(0, 0, 0, 0);
        label_205 = new QLabel(layoutWidget_2);
        label_205->setObjectName(QStringLiteral("label_205"));

        verticalLayout_53->addWidget(label_205);

        LineEditMoveToValue_2 = new QLineEdit(layoutWidget_2);
        LineEditMoveToValue_2->setObjectName(QStringLiteral("LineEditMoveToValue_2"));

        verticalLayout_53->addWidget(LineEditMoveToValue_2);

        MoveTo_2 = new QPushButton(layoutWidget_2);
        MoveTo_2->setObjectName(QStringLiteral("MoveTo_2"));

        verticalLayout_53->addWidget(MoveTo_2);

        Homing_2 = new QPushButton(layoutWidget_2);
        Homing_2->setObjectName(QStringLiteral("Homing_2"));

        verticalLayout_53->addWidget(Homing_2);

        layoutWidget_3 = new QWidget(tab_4);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_54 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_54->setSpacing(6);
        verticalLayout_54->setContentsMargins(11, 11, 11, 11);
        verticalLayout_54->setObjectName(QStringLiteral("verticalLayout_54"));
        verticalLayout_54->setContentsMargins(0, 0, 0, 0);
        label_206 = new QLabel(layoutWidget_3);
        label_206->setObjectName(QStringLiteral("label_206"));
        label_206->setFont(font5);

        verticalLayout_54->addWidget(label_206);

        label_207 = new QLabel(layoutWidget_3);
        label_207->setObjectName(QStringLiteral("label_207"));

        verticalLayout_54->addWidget(label_207);

        LabelMovAnalogInput0_2 = new QLabel(layoutWidget_3);
        LabelMovAnalogInput0_2->setObjectName(QStringLiteral("LabelMovAnalogInput0_2"));

        verticalLayout_54->addWidget(LabelMovAnalogInput0_2);

        label_208 = new QLabel(layoutWidget_3);
        label_208->setObjectName(QStringLiteral("label_208"));

        verticalLayout_54->addWidget(label_208);

        LabelMovCurrentPosition_2 = new QLabel(layoutWidget_3);
        LabelMovCurrentPosition_2->setObjectName(QStringLiteral("LabelMovCurrentPosition_2"));

        verticalLayout_54->addWidget(LabelMovCurrentPosition_2);

        GetParameterMov_2 = new QPushButton(layoutWidget_3);
        GetParameterMov_2->setObjectName(QStringLiteral("GetParameterMov_2"));

        verticalLayout_54->addWidget(GetParameterMov_2);

        layoutWidget_36 = new QWidget(tab_4);
        layoutWidget_36->setObjectName(QStringLiteral("layoutWidget_36"));
        layoutWidget_36->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_35 = new QGridLayout(layoutWidget_36);
        gridLayout_35->setSpacing(6);
        gridLayout_35->setContentsMargins(11, 11, 11, 11);
        gridLayout_35->setObjectName(QStringLiteral("gridLayout_35"));
        gridLayout_35->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_36);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font5);

        gridLayout_35->addWidget(label_26, 0, 0, 1, 3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Images_2 = new QLabel(layoutWidget_36);
        Images_2->setObjectName(QStringLiteral("Images_2"));
        Images_2->setMinimumSize(QSize(0, 100));
        Images_2->setMaximumSize(QSize(200, 150));
        Images_2->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_2->setScaledContents(true);

        verticalLayout_5->addWidget(Images_2);

        label_30 = new QLabel(layoutWidget_36);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_5->addWidget(label_30);


        gridLayout_35->addLayout(verticalLayout_5, 1, 0, 1, 1);

        label_344 = new QLabel(layoutWidget_36);
        label_344->setObjectName(QStringLiteral("label_344"));
        label_344->setMinimumSize(QSize(25, 0));

        gridLayout_35->addWidget(label_344, 1, 1, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_28 = new QLabel(layoutWidget_36);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_10->addWidget(label_28, 0, 0, 1, 1);

        label_31 = new QLabel(layoutWidget_36);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_10->addWidget(label_31, 0, 1, 1, 1);

        label_32 = new QLabel(layoutWidget_36);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_10->addWidget(label_32, 1, 0, 1, 1);

        label_33 = new QLabel(layoutWidget_36);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_10->addWidget(label_33, 1, 1, 1, 1);

        LabelMaxVelSetup_2 = new QLabel(layoutWidget_36);
        LabelMaxVelSetup_2->setObjectName(QStringLiteral("LabelMaxVelSetup_2"));

        gridLayout_10->addWidget(LabelMaxVelSetup_2, 2, 0, 1, 1);

        LineEditMaxVelSetup_2 = new QLineEdit(layoutWidget_36);
        LineEditMaxVelSetup_2->setObjectName(QStringLiteral("LineEditMaxVelSetup_2"));

        gridLayout_10->addWidget(LineEditMaxVelSetup_2, 2, 1, 1, 1);

        label_34 = new QLabel(layoutWidget_36);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_10->addWidget(label_34, 3, 0, 1, 1);

        label_35 = new QLabel(layoutWidget_36);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_10->addWidget(label_35, 3, 1, 1, 1);

        LabelAccelerationSetup_2 = new QLabel(layoutWidget_36);
        LabelAccelerationSetup_2->setObjectName(QStringLiteral("LabelAccelerationSetup_2"));

        gridLayout_10->addWidget(LabelAccelerationSetup_2, 4, 0, 1, 1);

        LineEditAccelerationSetup_2 = new QLineEdit(layoutWidget_36);
        LineEditAccelerationSetup_2->setObjectName(QStringLiteral("LineEditAccelerationSetup_2"));

        gridLayout_10->addWidget(LineEditAccelerationSetup_2, 4, 1, 1, 1);

        label_36 = new QLabel(layoutWidget_36);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_10->addWidget(label_36, 5, 0, 1, 1);

        label_37 = new QLabel(layoutWidget_36);
        label_37->setObjectName(QStringLiteral("label_37"));

        gridLayout_10->addWidget(label_37, 5, 1, 1, 1);

        LabelDecelerationSetup_2 = new QLabel(layoutWidget_36);
        LabelDecelerationSetup_2->setObjectName(QStringLiteral("LabelDecelerationSetup_2"));

        gridLayout_10->addWidget(LabelDecelerationSetup_2, 6, 0, 1, 1);

        LineEditDecelerationSetup_2 = new QLineEdit(layoutWidget_36);
        LineEditDecelerationSetup_2->setObjectName(QStringLiteral("LineEditDecelerationSetup_2"));

        gridLayout_10->addWidget(LineEditDecelerationSetup_2, 6, 1, 1, 1);

        label_38 = new QLabel(layoutWidget_36);
        label_38->setObjectName(QStringLiteral("label_38"));

        gridLayout_10->addWidget(label_38, 7, 0, 1, 1);

        label_39 = new QLabel(layoutWidget_36);
        label_39->setObjectName(QStringLiteral("label_39"));

        gridLayout_10->addWidget(label_39, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_2 = new QLabel(layoutWidget_36);
        LabelPhaseCurrentSetup_2->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_2"));

        gridLayout_10->addWidget(LabelPhaseCurrentSetup_2, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_2 = new QLineEdit(layoutWidget_36);
        LineEditPhaseCurrentSetup_2->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_2"));

        gridLayout_10->addWidget(LineEditPhaseCurrentSetup_2, 8, 1, 1, 1);

        label_43 = new QLabel(layoutWidget_36);
        label_43->setObjectName(QStringLiteral("label_43"));

        gridLayout_10->addWidget(label_43, 9, 0, 1, 1);

        label_44 = new QLabel(layoutWidget_36);
        label_44->setObjectName(QStringLiteral("label_44"));

        gridLayout_10->addWidget(label_44, 9, 1, 1, 1);

        LabelAnalogOutputSetup_2 = new QLabel(layoutWidget_36);
        LabelAnalogOutputSetup_2->setObjectName(QStringLiteral("LabelAnalogOutputSetup_2"));

        gridLayout_10->addWidget(LabelAnalogOutputSetup_2, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_2 = new QLineEdit(layoutWidget_36);
        LineEditAnalogOutputSetup_2->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_2"));

        gridLayout_10->addWidget(LineEditAnalogOutputSetup_2, 10, 1, 1, 1);

        label_345 = new QLabel(layoutWidget_36);
        label_345->setObjectName(QStringLiteral("label_345"));

        gridLayout_10->addWidget(label_345, 11, 0, 1, 1);

        label_346 = new QLabel(layoutWidget_36);
        label_346->setObjectName(QStringLiteral("label_346"));

        gridLayout_10->addWidget(label_346, 11, 1, 1, 1);

        LabelVelHomeSetup_2 = new QLabel(layoutWidget_36);
        LabelVelHomeSetup_2->setObjectName(QStringLiteral("LabelVelHomeSetup_2"));

        gridLayout_10->addWidget(LabelVelHomeSetup_2, 12, 0, 1, 1);

        LineEditVelHomeSetup_2 = new QLineEdit(layoutWidget_36);
        LineEditVelHomeSetup_2->setObjectName(QStringLiteral("LineEditVelHomeSetup_2"));

        gridLayout_10->addWidget(LineEditVelHomeSetup_2, 12, 1, 1, 1);

        GetParameterDriver_2 = new QPushButton(layoutWidget_36);
        GetParameterDriver_2->setObjectName(QStringLiteral("GetParameterDriver_2"));

        gridLayout_10->addWidget(GetParameterDriver_2, 13, 0, 1, 1);

        SetParameterDriver_2 = new QPushButton(layoutWidget_36);
        SetParameterDriver_2->setObjectName(QStringLiteral("SetParameterDriver_2"));

        gridLayout_10->addWidget(SetParameterDriver_2, 13, 1, 1, 1);


        gridLayout_35->addLayout(gridLayout_10, 1, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_40 = new QLabel(layoutWidget_36);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setFont(font6);

        verticalLayout_6->addWidget(label_40);

        LabelStatusDriver2 = new QLabel(layoutWidget_36);
        LabelStatusDriver2->setObjectName(QStringLiteral("LabelStatusDriver2"));
        LabelStatusDriver2->setFont(font6);

        verticalLayout_6->addWidget(LabelStatusDriver2);


        gridLayout_35->addLayout(verticalLayout_6, 2, 0, 1, 3);

        layoutWidget_42 = new QWidget(tab_4);
        layoutWidget_42->setObjectName(QStringLiteral("layoutWidget_42"));
        layoutWidget_42->setGeometry(QRect(480, 270, 155, 121));
        verticalLayout_50 = new QVBoxLayout(layoutWidget_42);
        verticalLayout_50->setSpacing(6);
        verticalLayout_50->setContentsMargins(11, 11, 11, 11);
        verticalLayout_50->setObjectName(QStringLiteral("verticalLayout_50"));
        verticalLayout_50->setContentsMargins(0, 0, 0, 0);
        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        label_289 = new QLabel(layoutWidget_42);
        label_289->setObjectName(QStringLiteral("label_289"));
        label_289->setFont(font6);

        verticalLayout_35->addWidget(label_289);

        LabelPositionStatus_2 = new QTextEdit(layoutWidget_42);
        LabelPositionStatus_2->setObjectName(QStringLiteral("LabelPositionStatus_2"));
        LabelPositionStatus_2->setMaximumSize(QSize(151, 51));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_2->setPalette(palette8);
        LabelPositionStatus_2->setFont(font4);
        LabelPositionStatus_2->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_2->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_35->addWidget(LabelPositionStatus_2);


        verticalLayout_50->addLayout(verticalLayout_35);

        CheckPositionButton_2 = new QPushButton(layoutWidget_42);
        CheckPositionButton_2->setObjectName(QStringLiteral("CheckPositionButton_2"));

        verticalLayout_50->addWidget(CheckPositionButton_2);

        layoutWidget_56 = new QWidget(tab_4);
        layoutWidget_56->setObjectName(QStringLiteral("layoutWidget_56"));
        layoutWidget_56->setGeometry(QRect(480, 400, 155, 121));
        verticalLayout_94 = new QVBoxLayout(layoutWidget_56);
        verticalLayout_94->setSpacing(6);
        verticalLayout_94->setContentsMargins(11, 11, 11, 11);
        verticalLayout_94->setObjectName(QStringLiteral("verticalLayout_94"));
        verticalLayout_94->setContentsMargins(0, 0, 0, 0);
        verticalLayout_95 = new QVBoxLayout();
        verticalLayout_95->setSpacing(6);
        verticalLayout_95->setObjectName(QStringLiteral("verticalLayout_95"));
        label_327 = new QLabel(layoutWidget_56);
        label_327->setObjectName(QStringLiteral("label_327"));
        label_327->setFont(font6);

        verticalLayout_95->addWidget(label_327);

        LabelDrvStatus_2 = new QTextEdit(layoutWidget_56);
        LabelDrvStatus_2->setObjectName(QStringLiteral("LabelDrvStatus_2"));
        LabelDrvStatus_2->setMaximumSize(QSize(151, 51));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelDrvStatus_2->setPalette(palette9);
        LabelDrvStatus_2->setFont(font4);
        LabelDrvStatus_2->setFrameShape(QFrame::NoFrame);
        LabelDrvStatus_2->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_95->addWidget(LabelDrvStatus_2);


        verticalLayout_94->addLayout(verticalLayout_95);

        CheckDrvStatusButton_2 = new QPushButton(layoutWidget_56);
        CheckDrvStatusButton_2->setObjectName(QStringLiteral("CheckDrvStatusButton_2"));

        verticalLayout_94->addWidget(CheckDrvStatusButton_2);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        layoutWidget_4 = new QWidget(tab_5);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(480, 530, 148, 121));
        verticalLayout_55 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_55->setSpacing(6);
        verticalLayout_55->setContentsMargins(11, 11, 11, 11);
        verticalLayout_55->setObjectName(QStringLiteral("verticalLayout_55"));
        verticalLayout_55->setContentsMargins(0, 0, 0, 0);
        label_209 = new QLabel(layoutWidget_4);
        label_209->setObjectName(QStringLiteral("label_209"));

        verticalLayout_55->addWidget(label_209);

        LineEditMoveToValue_3 = new QLineEdit(layoutWidget_4);
        LineEditMoveToValue_3->setObjectName(QStringLiteral("LineEditMoveToValue_3"));

        verticalLayout_55->addWidget(LineEditMoveToValue_3);

        MoveTo_3 = new QPushButton(layoutWidget_4);
        MoveTo_3->setObjectName(QStringLiteral("MoveTo_3"));

        verticalLayout_55->addWidget(MoveTo_3);

        Homing_3 = new QPushButton(layoutWidget_4);
        Homing_3->setObjectName(QStringLiteral("Homing_3"));

        verticalLayout_55->addWidget(Homing_3);

        layoutWidget_6 = new QWidget(tab_5);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_56 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_56->setSpacing(6);
        verticalLayout_56->setContentsMargins(11, 11, 11, 11);
        verticalLayout_56->setObjectName(QStringLiteral("verticalLayout_56"));
        verticalLayout_56->setContentsMargins(0, 0, 0, 0);
        label_216 = new QLabel(layoutWidget_6);
        label_216->setObjectName(QStringLiteral("label_216"));
        label_216->setFont(font5);

        verticalLayout_56->addWidget(label_216);

        label_217 = new QLabel(layoutWidget_6);
        label_217->setObjectName(QStringLiteral("label_217"));

        verticalLayout_56->addWidget(label_217);

        LabelMovAnalogInput0_3 = new QLabel(layoutWidget_6);
        LabelMovAnalogInput0_3->setObjectName(QStringLiteral("LabelMovAnalogInput0_3"));

        verticalLayout_56->addWidget(LabelMovAnalogInput0_3);

        label_218 = new QLabel(layoutWidget_6);
        label_218->setObjectName(QStringLiteral("label_218"));

        verticalLayout_56->addWidget(label_218);

        LabelMovCurrentPosition_3 = new QLabel(layoutWidget_6);
        LabelMovCurrentPosition_3->setObjectName(QStringLiteral("LabelMovCurrentPosition_3"));

        verticalLayout_56->addWidget(LabelMovCurrentPosition_3);

        GetParameterMov_3 = new QPushButton(layoutWidget_6);
        GetParameterMov_3->setObjectName(QStringLiteral("GetParameterMov_3"));

        verticalLayout_56->addWidget(GetParameterMov_3);

        layoutWidget_5 = new QWidget(tab_5);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_36 = new QGridLayout(layoutWidget_5);
        gridLayout_36->setSpacing(6);
        gridLayout_36->setContentsMargins(11, 11, 11, 11);
        gridLayout_36->setObjectName(QStringLiteral("gridLayout_36"));
        gridLayout_36->setContentsMargins(0, 0, 0, 0);
        label_48 = new QLabel(layoutWidget_5);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setFont(font5);

        gridLayout_36->addWidget(label_48, 0, 0, 1, 3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        Images_3 = new QLabel(layoutWidget_5);
        Images_3->setObjectName(QStringLiteral("Images_3"));
        Images_3->setMinimumSize(QSize(0, 100));
        Images_3->setMaximumSize(QSize(200, 150));
        Images_3->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_3->setScaledContents(true);

        verticalLayout_7->addWidget(Images_3);

        label_54 = new QLabel(layoutWidget_5);
        label_54->setObjectName(QStringLiteral("label_54"));

        verticalLayout_7->addWidget(label_54);


        gridLayout_36->addLayout(verticalLayout_7, 1, 0, 1, 1);

        label_347 = new QLabel(layoutWidget_5);
        label_347->setObjectName(QStringLiteral("label_347"));
        label_347->setMinimumSize(QSize(25, 0));

        gridLayout_36->addWidget(label_347, 1, 1, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_55 = new QLabel(layoutWidget_5);
        label_55->setObjectName(QStringLiteral("label_55"));

        gridLayout_14->addWidget(label_55, 0, 0, 1, 1);

        label_56 = new QLabel(layoutWidget_5);
        label_56->setObjectName(QStringLiteral("label_56"));

        gridLayout_14->addWidget(label_56, 0, 1, 1, 1);

        label_57 = new QLabel(layoutWidget_5);
        label_57->setObjectName(QStringLiteral("label_57"));

        gridLayout_14->addWidget(label_57, 1, 0, 1, 1);

        label_58 = new QLabel(layoutWidget_5);
        label_58->setObjectName(QStringLiteral("label_58"));

        gridLayout_14->addWidget(label_58, 1, 1, 1, 1);

        LabelMaxVelSetup_3 = new QLabel(layoutWidget_5);
        LabelMaxVelSetup_3->setObjectName(QStringLiteral("LabelMaxVelSetup_3"));

        gridLayout_14->addWidget(LabelMaxVelSetup_3, 2, 0, 1, 1);

        LineEditMaxVelSetup_3 = new QLineEdit(layoutWidget_5);
        LineEditMaxVelSetup_3->setObjectName(QStringLiteral("LineEditMaxVelSetup_3"));

        gridLayout_14->addWidget(LineEditMaxVelSetup_3, 2, 1, 1, 1);

        label_59 = new QLabel(layoutWidget_5);
        label_59->setObjectName(QStringLiteral("label_59"));

        gridLayout_14->addWidget(label_59, 3, 0, 1, 1);

        label_60 = new QLabel(layoutWidget_5);
        label_60->setObjectName(QStringLiteral("label_60"));

        gridLayout_14->addWidget(label_60, 3, 1, 1, 1);

        LabelAccelerationSetup_3 = new QLabel(layoutWidget_5);
        LabelAccelerationSetup_3->setObjectName(QStringLiteral("LabelAccelerationSetup_3"));

        gridLayout_14->addWidget(LabelAccelerationSetup_3, 4, 0, 1, 1);

        LineEditAccelerationSetup_3 = new QLineEdit(layoutWidget_5);
        LineEditAccelerationSetup_3->setObjectName(QStringLiteral("LineEditAccelerationSetup_3"));

        gridLayout_14->addWidget(LineEditAccelerationSetup_3, 4, 1, 1, 1);

        label_61 = new QLabel(layoutWidget_5);
        label_61->setObjectName(QStringLiteral("label_61"));

        gridLayout_14->addWidget(label_61, 5, 0, 1, 1);

        label_62 = new QLabel(layoutWidget_5);
        label_62->setObjectName(QStringLiteral("label_62"));

        gridLayout_14->addWidget(label_62, 5, 1, 1, 1);

        LabelDecelerationSetup_3 = new QLabel(layoutWidget_5);
        LabelDecelerationSetup_3->setObjectName(QStringLiteral("LabelDecelerationSetup_3"));

        gridLayout_14->addWidget(LabelDecelerationSetup_3, 6, 0, 1, 1);

        LineEditDecelerationSetup_3 = new QLineEdit(layoutWidget_5);
        LineEditDecelerationSetup_3->setObjectName(QStringLiteral("LineEditDecelerationSetup_3"));

        gridLayout_14->addWidget(LineEditDecelerationSetup_3, 6, 1, 1, 1);

        label_63 = new QLabel(layoutWidget_5);
        label_63->setObjectName(QStringLiteral("label_63"));

        gridLayout_14->addWidget(label_63, 7, 0, 1, 1);

        label_64 = new QLabel(layoutWidget_5);
        label_64->setObjectName(QStringLiteral("label_64"));

        gridLayout_14->addWidget(label_64, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_3 = new QLabel(layoutWidget_5);
        LabelPhaseCurrentSetup_3->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_3"));

        gridLayout_14->addWidget(LabelPhaseCurrentSetup_3, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_3 = new QLineEdit(layoutWidget_5);
        LineEditPhaseCurrentSetup_3->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_3"));

        gridLayout_14->addWidget(LineEditPhaseCurrentSetup_3, 8, 1, 1, 1);

        label_65 = new QLabel(layoutWidget_5);
        label_65->setObjectName(QStringLiteral("label_65"));

        gridLayout_14->addWidget(label_65, 9, 0, 1, 1);

        label_66 = new QLabel(layoutWidget_5);
        label_66->setObjectName(QStringLiteral("label_66"));

        gridLayout_14->addWidget(label_66, 9, 1, 1, 1);

        LabelAnalogOutputSetup_3 = new QLabel(layoutWidget_5);
        LabelAnalogOutputSetup_3->setObjectName(QStringLiteral("LabelAnalogOutputSetup_3"));

        gridLayout_14->addWidget(LabelAnalogOutputSetup_3, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_3 = new QLineEdit(layoutWidget_5);
        LineEditAnalogOutputSetup_3->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_3"));

        gridLayout_14->addWidget(LineEditAnalogOutputSetup_3, 10, 1, 1, 1);

        label_348 = new QLabel(layoutWidget_5);
        label_348->setObjectName(QStringLiteral("label_348"));

        gridLayout_14->addWidget(label_348, 11, 0, 1, 1);

        label_349 = new QLabel(layoutWidget_5);
        label_349->setObjectName(QStringLiteral("label_349"));

        gridLayout_14->addWidget(label_349, 11, 1, 1, 1);

        LabelVelHomeSetup_3 = new QLabel(layoutWidget_5);
        LabelVelHomeSetup_3->setObjectName(QStringLiteral("LabelVelHomeSetup_3"));

        gridLayout_14->addWidget(LabelVelHomeSetup_3, 12, 0, 1, 1);

        LineEditVelHomeSetup_3 = new QLineEdit(layoutWidget_5);
        LineEditVelHomeSetup_3->setObjectName(QStringLiteral("LineEditVelHomeSetup_3"));

        gridLayout_14->addWidget(LineEditVelHomeSetup_3, 12, 1, 1, 1);

        GetParameterDriver_3 = new QPushButton(layoutWidget_5);
        GetParameterDriver_3->setObjectName(QStringLiteral("GetParameterDriver_3"));

        gridLayout_14->addWidget(GetParameterDriver_3, 13, 0, 1, 1);

        SetParameterDriver_3 = new QPushButton(layoutWidget_5);
        SetParameterDriver_3->setObjectName(QStringLiteral("SetParameterDriver_3"));

        gridLayout_14->addWidget(SetParameterDriver_3, 13, 1, 1, 1);


        gridLayout_36->addLayout(gridLayout_14, 1, 2, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_67 = new QLabel(layoutWidget_5);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setFont(font6);

        verticalLayout_8->addWidget(label_67);

        LabelStatusDriver3 = new QLabel(layoutWidget_5);
        LabelStatusDriver3->setObjectName(QStringLiteral("LabelStatusDriver3"));
        LabelStatusDriver3->setFont(font6);

        verticalLayout_8->addWidget(LabelStatusDriver3);


        gridLayout_36->addLayout(verticalLayout_8, 2, 0, 1, 3);

        layoutWidget_43 = new QWidget(tab_5);
        layoutWidget_43->setObjectName(QStringLiteral("layoutWidget_43"));
        layoutWidget_43->setGeometry(QRect(480, 270, 155, 121));
        verticalLayout_80 = new QVBoxLayout(layoutWidget_43);
        verticalLayout_80->setSpacing(6);
        verticalLayout_80->setContentsMargins(11, 11, 11, 11);
        verticalLayout_80->setObjectName(QStringLiteral("verticalLayout_80"));
        verticalLayout_80->setContentsMargins(0, 0, 0, 0);
        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        label_290 = new QLabel(layoutWidget_43);
        label_290->setObjectName(QStringLiteral("label_290"));
        label_290->setFont(font6);

        verticalLayout_36->addWidget(label_290);

        LabelPositionStatus_3 = new QTextEdit(layoutWidget_43);
        LabelPositionStatus_3->setObjectName(QStringLiteral("LabelPositionStatus_3"));
        LabelPositionStatus_3->setMaximumSize(QSize(151, 51));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_3->setPalette(palette10);
        LabelPositionStatus_3->setFont(font4);
        LabelPositionStatus_3->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_3->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_36->addWidget(LabelPositionStatus_3);


        verticalLayout_80->addLayout(verticalLayout_36);

        CheckPositionButton_3 = new QPushButton(layoutWidget_43);
        CheckPositionButton_3->setObjectName(QStringLiteral("CheckPositionButton_3"));

        verticalLayout_80->addWidget(CheckPositionButton_3);

        layoutWidget_57 = new QWidget(tab_5);
        layoutWidget_57->setObjectName(QStringLiteral("layoutWidget_57"));
        layoutWidget_57->setGeometry(QRect(480, 400, 155, 121));
        verticalLayout_96 = new QVBoxLayout(layoutWidget_57);
        verticalLayout_96->setSpacing(6);
        verticalLayout_96->setContentsMargins(11, 11, 11, 11);
        verticalLayout_96->setObjectName(QStringLiteral("verticalLayout_96"));
        verticalLayout_96->setContentsMargins(0, 0, 0, 0);
        verticalLayout_97 = new QVBoxLayout();
        verticalLayout_97->setSpacing(6);
        verticalLayout_97->setObjectName(QStringLiteral("verticalLayout_97"));
        label_328 = new QLabel(layoutWidget_57);
        label_328->setObjectName(QStringLiteral("label_328"));
        label_328->setFont(font6);

        verticalLayout_97->addWidget(label_328);

        LabelDrvStatus_3 = new QTextEdit(layoutWidget_57);
        LabelDrvStatus_3->setObjectName(QStringLiteral("LabelDrvStatus_3"));
        LabelDrvStatus_3->setMaximumSize(QSize(151, 51));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelDrvStatus_3->setPalette(palette11);
        LabelDrvStatus_3->setFont(font4);
        LabelDrvStatus_3->setFrameShape(QFrame::NoFrame);
        LabelDrvStatus_3->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_97->addWidget(LabelDrvStatus_3);


        verticalLayout_96->addLayout(verticalLayout_97);

        CheckDrvStatusButton_3 = new QPushButton(layoutWidget_57);
        CheckDrvStatusButton_3->setObjectName(QStringLiteral("CheckDrvStatusButton_3"));

        verticalLayout_96->addWidget(CheckDrvStatusButton_3);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        layoutWidget_7 = new QWidget(tab_6);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(480, 530, 148, 121));
        verticalLayout_57 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_57->setSpacing(6);
        verticalLayout_57->setContentsMargins(11, 11, 11, 11);
        verticalLayout_57->setObjectName(QStringLiteral("verticalLayout_57"));
        verticalLayout_57->setContentsMargins(0, 0, 0, 0);
        label_219 = new QLabel(layoutWidget_7);
        label_219->setObjectName(QStringLiteral("label_219"));

        verticalLayout_57->addWidget(label_219);

        LineEditMoveToValue_4 = new QLineEdit(layoutWidget_7);
        LineEditMoveToValue_4->setObjectName(QStringLiteral("LineEditMoveToValue_4"));

        verticalLayout_57->addWidget(LineEditMoveToValue_4);

        MoveTo_4 = new QPushButton(layoutWidget_7);
        MoveTo_4->setObjectName(QStringLiteral("MoveTo_4"));

        verticalLayout_57->addWidget(MoveTo_4);

        Homing_4 = new QPushButton(layoutWidget_7);
        Homing_4->setObjectName(QStringLiteral("Homing_4"));

        verticalLayout_57->addWidget(Homing_4);

        layoutWidget_9 = new QWidget(tab_6);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_58 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_58->setSpacing(6);
        verticalLayout_58->setContentsMargins(11, 11, 11, 11);
        verticalLayout_58->setObjectName(QStringLiteral("verticalLayout_58"));
        verticalLayout_58->setContentsMargins(0, 0, 0, 0);
        label_222 = new QLabel(layoutWidget_9);
        label_222->setObjectName(QStringLiteral("label_222"));
        label_222->setFont(font5);

        verticalLayout_58->addWidget(label_222);

        label_223 = new QLabel(layoutWidget_9);
        label_223->setObjectName(QStringLiteral("label_223"));

        verticalLayout_58->addWidget(label_223);

        LabelMovAnalogInput0_4 = new QLabel(layoutWidget_9);
        LabelMovAnalogInput0_4->setObjectName(QStringLiteral("LabelMovAnalogInput0_4"));

        verticalLayout_58->addWidget(LabelMovAnalogInput0_4);

        label_224 = new QLabel(layoutWidget_9);
        label_224->setObjectName(QStringLiteral("label_224"));

        verticalLayout_58->addWidget(label_224);

        LabelMovCurrentPosition_4 = new QLabel(layoutWidget_9);
        LabelMovCurrentPosition_4->setObjectName(QStringLiteral("LabelMovCurrentPosition_4"));

        verticalLayout_58->addWidget(LabelMovCurrentPosition_4);

        GetParameterMov_4 = new QPushButton(layoutWidget_9);
        GetParameterMov_4->setObjectName(QStringLiteral("GetParameterMov_4"));

        verticalLayout_58->addWidget(GetParameterMov_4);

        layoutWidget_8 = new QWidget(tab_6);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_37 = new QGridLayout(layoutWidget_8);
        gridLayout_37->setSpacing(6);
        gridLayout_37->setContentsMargins(11, 11, 11, 11);
        gridLayout_37->setObjectName(QStringLiteral("gridLayout_37"));
        gridLayout_37->setContentsMargins(0, 0, 0, 0);
        label_68 = new QLabel(layoutWidget_8);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setFont(font5);

        gridLayout_37->addWidget(label_68, 0, 0, 1, 3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        Images_4 = new QLabel(layoutWidget_8);
        Images_4->setObjectName(QStringLiteral("Images_4"));
        Images_4->setMinimumSize(QSize(0, 100));
        Images_4->setMaximumSize(QSize(200, 150));
        Images_4->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_4->setScaledContents(true);

        verticalLayout_10->addWidget(Images_4);

        label_69 = new QLabel(layoutWidget_8);
        label_69->setObjectName(QStringLiteral("label_69"));

        verticalLayout_10->addWidget(label_69);


        gridLayout_37->addLayout(verticalLayout_10, 1, 0, 1, 1);

        label_350 = new QLabel(layoutWidget_8);
        label_350->setObjectName(QStringLiteral("label_350"));
        label_350->setMinimumSize(QSize(25, 0));

        gridLayout_37->addWidget(label_350, 1, 1, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        label_70 = new QLabel(layoutWidget_8);
        label_70->setObjectName(QStringLiteral("label_70"));

        gridLayout_15->addWidget(label_70, 0, 0, 1, 1);

        label_71 = new QLabel(layoutWidget_8);
        label_71->setObjectName(QStringLiteral("label_71"));

        gridLayout_15->addWidget(label_71, 0, 1, 1, 1);

        label_72 = new QLabel(layoutWidget_8);
        label_72->setObjectName(QStringLiteral("label_72"));

        gridLayout_15->addWidget(label_72, 1, 0, 1, 1);

        label_73 = new QLabel(layoutWidget_8);
        label_73->setObjectName(QStringLiteral("label_73"));

        gridLayout_15->addWidget(label_73, 1, 1, 1, 1);

        LabelMaxVelSetup_4 = new QLabel(layoutWidget_8);
        LabelMaxVelSetup_4->setObjectName(QStringLiteral("LabelMaxVelSetup_4"));

        gridLayout_15->addWidget(LabelMaxVelSetup_4, 2, 0, 1, 1);

        LineEditMaxVelSetup_4 = new QLineEdit(layoutWidget_8);
        LineEditMaxVelSetup_4->setObjectName(QStringLiteral("LineEditMaxVelSetup_4"));

        gridLayout_15->addWidget(LineEditMaxVelSetup_4, 2, 1, 1, 1);

        label_74 = new QLabel(layoutWidget_8);
        label_74->setObjectName(QStringLiteral("label_74"));

        gridLayout_15->addWidget(label_74, 3, 0, 1, 1);

        label_75 = new QLabel(layoutWidget_8);
        label_75->setObjectName(QStringLiteral("label_75"));

        gridLayout_15->addWidget(label_75, 3, 1, 1, 1);

        LabelAccelerationSetup_4 = new QLabel(layoutWidget_8);
        LabelAccelerationSetup_4->setObjectName(QStringLiteral("LabelAccelerationSetup_4"));

        gridLayout_15->addWidget(LabelAccelerationSetup_4, 4, 0, 1, 1);

        LineEditAccelerationSetup_4 = new QLineEdit(layoutWidget_8);
        LineEditAccelerationSetup_4->setObjectName(QStringLiteral("LineEditAccelerationSetup_4"));

        gridLayout_15->addWidget(LineEditAccelerationSetup_4, 4, 1, 1, 1);

        label_76 = new QLabel(layoutWidget_8);
        label_76->setObjectName(QStringLiteral("label_76"));

        gridLayout_15->addWidget(label_76, 5, 0, 1, 1);

        label_77 = new QLabel(layoutWidget_8);
        label_77->setObjectName(QStringLiteral("label_77"));

        gridLayout_15->addWidget(label_77, 5, 1, 1, 1);

        LabelDecelerationSetup_4 = new QLabel(layoutWidget_8);
        LabelDecelerationSetup_4->setObjectName(QStringLiteral("LabelDecelerationSetup_4"));

        gridLayout_15->addWidget(LabelDecelerationSetup_4, 6, 0, 1, 1);

        LineEditDecelerationSetup_4 = new QLineEdit(layoutWidget_8);
        LineEditDecelerationSetup_4->setObjectName(QStringLiteral("LineEditDecelerationSetup_4"));

        gridLayout_15->addWidget(LineEditDecelerationSetup_4, 6, 1, 1, 1);

        label_78 = new QLabel(layoutWidget_8);
        label_78->setObjectName(QStringLiteral("label_78"));

        gridLayout_15->addWidget(label_78, 7, 0, 1, 1);

        label_79 = new QLabel(layoutWidget_8);
        label_79->setObjectName(QStringLiteral("label_79"));

        gridLayout_15->addWidget(label_79, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_4 = new QLabel(layoutWidget_8);
        LabelPhaseCurrentSetup_4->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_4"));

        gridLayout_15->addWidget(LabelPhaseCurrentSetup_4, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_4 = new QLineEdit(layoutWidget_8);
        LineEditPhaseCurrentSetup_4->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_4"));

        gridLayout_15->addWidget(LineEditPhaseCurrentSetup_4, 8, 1, 1, 1);

        label_80 = new QLabel(layoutWidget_8);
        label_80->setObjectName(QStringLiteral("label_80"));

        gridLayout_15->addWidget(label_80, 9, 0, 1, 1);

        label_81 = new QLabel(layoutWidget_8);
        label_81->setObjectName(QStringLiteral("label_81"));

        gridLayout_15->addWidget(label_81, 9, 1, 1, 1);

        LabelAnalogOutputSetup_4 = new QLabel(layoutWidget_8);
        LabelAnalogOutputSetup_4->setObjectName(QStringLiteral("LabelAnalogOutputSetup_4"));

        gridLayout_15->addWidget(LabelAnalogOutputSetup_4, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_4 = new QLineEdit(layoutWidget_8);
        LineEditAnalogOutputSetup_4->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_4"));

        gridLayout_15->addWidget(LineEditAnalogOutputSetup_4, 10, 1, 1, 1);

        label_351 = new QLabel(layoutWidget_8);
        label_351->setObjectName(QStringLiteral("label_351"));

        gridLayout_15->addWidget(label_351, 11, 0, 1, 1);

        label_352 = new QLabel(layoutWidget_8);
        label_352->setObjectName(QStringLiteral("label_352"));

        gridLayout_15->addWidget(label_352, 11, 1, 1, 1);

        LabelVelHomeSetup_4 = new QLabel(layoutWidget_8);
        LabelVelHomeSetup_4->setObjectName(QStringLiteral("LabelVelHomeSetup_4"));

        gridLayout_15->addWidget(LabelVelHomeSetup_4, 12, 0, 1, 1);

        LineEditVelHomeSetup_4 = new QLineEdit(layoutWidget_8);
        LineEditVelHomeSetup_4->setObjectName(QStringLiteral("LineEditVelHomeSetup_4"));

        gridLayout_15->addWidget(LineEditVelHomeSetup_4, 12, 1, 1, 1);

        GetParameterDriver_4 = new QPushButton(layoutWidget_8);
        GetParameterDriver_4->setObjectName(QStringLiteral("GetParameterDriver_4"));

        gridLayout_15->addWidget(GetParameterDriver_4, 13, 0, 1, 1);

        SetParameterDriver_4 = new QPushButton(layoutWidget_8);
        SetParameterDriver_4->setObjectName(QStringLiteral("SetParameterDriver_4"));

        gridLayout_15->addWidget(SetParameterDriver_4, 13, 1, 1, 1);


        gridLayout_37->addLayout(gridLayout_15, 1, 2, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_82 = new QLabel(layoutWidget_8);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setFont(font6);

        verticalLayout_11->addWidget(label_82);

        LabelStatusDriver4 = new QLabel(layoutWidget_8);
        LabelStatusDriver4->setObjectName(QStringLiteral("LabelStatusDriver4"));
        LabelStatusDriver4->setFont(font6);

        verticalLayout_11->addWidget(LabelStatusDriver4);


        gridLayout_37->addLayout(verticalLayout_11, 2, 0, 1, 3);

        layoutWidget_44 = new QWidget(tab_6);
        layoutWidget_44->setObjectName(QStringLiteral("layoutWidget_44"));
        layoutWidget_44->setGeometry(QRect(480, 270, 155, 121));
        verticalLayout_81 = new QVBoxLayout(layoutWidget_44);
        verticalLayout_81->setSpacing(6);
        verticalLayout_81->setContentsMargins(11, 11, 11, 11);
        verticalLayout_81->setObjectName(QStringLiteral("verticalLayout_81"));
        verticalLayout_81->setContentsMargins(0, 0, 0, 0);
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        label_291 = new QLabel(layoutWidget_44);
        label_291->setObjectName(QStringLiteral("label_291"));
        label_291->setFont(font6);

        verticalLayout_37->addWidget(label_291);

        LabelPositionStatus_4 = new QTextEdit(layoutWidget_44);
        LabelPositionStatus_4->setObjectName(QStringLiteral("LabelPositionStatus_4"));
        LabelPositionStatus_4->setMaximumSize(QSize(151, 51));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_4->setPalette(palette12);
        LabelPositionStatus_4->setFont(font4);
        LabelPositionStatus_4->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_4->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_37->addWidget(LabelPositionStatus_4);


        verticalLayout_81->addLayout(verticalLayout_37);

        CheckPositionButton_4 = new QPushButton(layoutWidget_44);
        CheckPositionButton_4->setObjectName(QStringLiteral("CheckPositionButton_4"));

        verticalLayout_81->addWidget(CheckPositionButton_4);

        layoutWidget_58 = new QWidget(tab_6);
        layoutWidget_58->setObjectName(QStringLiteral("layoutWidget_58"));
        layoutWidget_58->setGeometry(QRect(480, 400, 155, 121));
        verticalLayout_98 = new QVBoxLayout(layoutWidget_58);
        verticalLayout_98->setSpacing(6);
        verticalLayout_98->setContentsMargins(11, 11, 11, 11);
        verticalLayout_98->setObjectName(QStringLiteral("verticalLayout_98"));
        verticalLayout_98->setContentsMargins(0, 0, 0, 0);
        verticalLayout_99 = new QVBoxLayout();
        verticalLayout_99->setSpacing(6);
        verticalLayout_99->setObjectName(QStringLiteral("verticalLayout_99"));
        label_329 = new QLabel(layoutWidget_58);
        label_329->setObjectName(QStringLiteral("label_329"));
        label_329->setFont(font6);

        verticalLayout_99->addWidget(label_329);

        LabelDrvStatus_4 = new QTextEdit(layoutWidget_58);
        LabelDrvStatus_4->setObjectName(QStringLiteral("LabelDrvStatus_4"));
        LabelDrvStatus_4->setMaximumSize(QSize(151, 51));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelDrvStatus_4->setPalette(palette13);
        LabelDrvStatus_4->setFont(font4);
        LabelDrvStatus_4->setFrameShape(QFrame::NoFrame);
        LabelDrvStatus_4->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_99->addWidget(LabelDrvStatus_4);


        verticalLayout_98->addLayout(verticalLayout_99);

        CheckDrvStatusButton_4 = new QPushButton(layoutWidget_58);
        CheckDrvStatusButton_4->setObjectName(QStringLiteral("CheckDrvStatusButton_4"));

        verticalLayout_98->addWidget(CheckDrvStatusButton_4);

        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        layoutWidget_10 = new QWidget(tab_7);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_59 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_59->setSpacing(6);
        verticalLayout_59->setContentsMargins(11, 11, 11, 11);
        verticalLayout_59->setObjectName(QStringLiteral("verticalLayout_59"));
        verticalLayout_59->setContentsMargins(0, 0, 0, 0);
        label_225 = new QLabel(layoutWidget_10);
        label_225->setObjectName(QStringLiteral("label_225"));

        verticalLayout_59->addWidget(label_225);

        LineEditMoveToValue_5 = new QLineEdit(layoutWidget_10);
        LineEditMoveToValue_5->setObjectName(QStringLiteral("LineEditMoveToValue_5"));

        verticalLayout_59->addWidget(LineEditMoveToValue_5);

        MoveTo_5 = new QPushButton(layoutWidget_10);
        MoveTo_5->setObjectName(QStringLiteral("MoveTo_5"));

        verticalLayout_59->addWidget(MoveTo_5);

        Homing_5 = new QPushButton(layoutWidget_10);
        Homing_5->setObjectName(QStringLiteral("Homing_5"));

        verticalLayout_59->addWidget(Homing_5);

        layoutWidget_12 = new QWidget(tab_7);
        layoutWidget_12->setObjectName(QStringLiteral("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_60 = new QVBoxLayout(layoutWidget_12);
        verticalLayout_60->setSpacing(6);
        verticalLayout_60->setContentsMargins(11, 11, 11, 11);
        verticalLayout_60->setObjectName(QStringLiteral("verticalLayout_60"));
        verticalLayout_60->setContentsMargins(0, 0, 0, 0);
        label_228 = new QLabel(layoutWidget_12);
        label_228->setObjectName(QStringLiteral("label_228"));
        label_228->setFont(font5);

        verticalLayout_60->addWidget(label_228);

        label_229 = new QLabel(layoutWidget_12);
        label_229->setObjectName(QStringLiteral("label_229"));

        verticalLayout_60->addWidget(label_229);

        LabelMovAnalogInput0_5 = new QLabel(layoutWidget_12);
        LabelMovAnalogInput0_5->setObjectName(QStringLiteral("LabelMovAnalogInput0_5"));

        verticalLayout_60->addWidget(LabelMovAnalogInput0_5);

        label_230 = new QLabel(layoutWidget_12);
        label_230->setObjectName(QStringLiteral("label_230"));

        verticalLayout_60->addWidget(label_230);

        LabelMovCurrentPosition_5 = new QLabel(layoutWidget_12);
        LabelMovCurrentPosition_5->setObjectName(QStringLiteral("LabelMovCurrentPosition_5"));

        verticalLayout_60->addWidget(LabelMovCurrentPosition_5);

        GetParameterMov_5 = new QPushButton(layoutWidget_12);
        GetParameterMov_5->setObjectName(QStringLiteral("GetParameterMov_5"));

        verticalLayout_60->addWidget(GetParameterMov_5);

        layoutWidget_11 = new QWidget(tab_7);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_38 = new QGridLayout(layoutWidget_11);
        gridLayout_38->setSpacing(6);
        gridLayout_38->setContentsMargins(11, 11, 11, 11);
        gridLayout_38->setObjectName(QStringLiteral("gridLayout_38"));
        gridLayout_38->setContentsMargins(0, 0, 0, 0);
        label_83 = new QLabel(layoutWidget_11);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setFont(font5);

        gridLayout_38->addWidget(label_83, 0, 0, 1, 3);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        Images_5 = new QLabel(layoutWidget_11);
        Images_5->setObjectName(QStringLiteral("Images_5"));
        Images_5->setMinimumSize(QSize(0, 100));
        Images_5->setMaximumSize(QSize(200, 150));
        Images_5->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_5->setScaledContents(true);

        verticalLayout_12->addWidget(Images_5);

        label_84 = new QLabel(layoutWidget_11);
        label_84->setObjectName(QStringLiteral("label_84"));

        verticalLayout_12->addWidget(label_84);


        gridLayout_38->addLayout(verticalLayout_12, 1, 0, 1, 1);

        label_353 = new QLabel(layoutWidget_11);
        label_353->setObjectName(QStringLiteral("label_353"));
        label_353->setMinimumSize(QSize(25, 0));

        gridLayout_38->addWidget(label_353, 1, 1, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        label_85 = new QLabel(layoutWidget_11);
        label_85->setObjectName(QStringLiteral("label_85"));

        gridLayout_16->addWidget(label_85, 0, 0, 1, 1);

        label_86 = new QLabel(layoutWidget_11);
        label_86->setObjectName(QStringLiteral("label_86"));

        gridLayout_16->addWidget(label_86, 0, 1, 1, 1);

        label_87 = new QLabel(layoutWidget_11);
        label_87->setObjectName(QStringLiteral("label_87"));

        gridLayout_16->addWidget(label_87, 1, 0, 1, 1);

        label_88 = new QLabel(layoutWidget_11);
        label_88->setObjectName(QStringLiteral("label_88"));

        gridLayout_16->addWidget(label_88, 1, 1, 1, 1);

        LabelMaxVelSetup_5 = new QLabel(layoutWidget_11);
        LabelMaxVelSetup_5->setObjectName(QStringLiteral("LabelMaxVelSetup_5"));

        gridLayout_16->addWidget(LabelMaxVelSetup_5, 2, 0, 1, 1);

        LineEditMaxVelSetup_5 = new QLineEdit(layoutWidget_11);
        LineEditMaxVelSetup_5->setObjectName(QStringLiteral("LineEditMaxVelSetup_5"));

        gridLayout_16->addWidget(LineEditMaxVelSetup_5, 2, 1, 1, 1);

        label_89 = new QLabel(layoutWidget_11);
        label_89->setObjectName(QStringLiteral("label_89"));

        gridLayout_16->addWidget(label_89, 3, 0, 1, 1);

        label_90 = new QLabel(layoutWidget_11);
        label_90->setObjectName(QStringLiteral("label_90"));

        gridLayout_16->addWidget(label_90, 3, 1, 1, 1);

        LabelAccelerationSetup_5 = new QLabel(layoutWidget_11);
        LabelAccelerationSetup_5->setObjectName(QStringLiteral("LabelAccelerationSetup_5"));

        gridLayout_16->addWidget(LabelAccelerationSetup_5, 4, 0, 1, 1);

        LineEditAccelerationSetup_5 = new QLineEdit(layoutWidget_11);
        LineEditAccelerationSetup_5->setObjectName(QStringLiteral("LineEditAccelerationSetup_5"));

        gridLayout_16->addWidget(LineEditAccelerationSetup_5, 4, 1, 1, 1);

        label_91 = new QLabel(layoutWidget_11);
        label_91->setObjectName(QStringLiteral("label_91"));

        gridLayout_16->addWidget(label_91, 5, 0, 1, 1);

        label_92 = new QLabel(layoutWidget_11);
        label_92->setObjectName(QStringLiteral("label_92"));

        gridLayout_16->addWidget(label_92, 5, 1, 1, 1);

        LabelDecelerationSetup_5 = new QLabel(layoutWidget_11);
        LabelDecelerationSetup_5->setObjectName(QStringLiteral("LabelDecelerationSetup_5"));

        gridLayout_16->addWidget(LabelDecelerationSetup_5, 6, 0, 1, 1);

        LineEditDecelerationSetup_5 = new QLineEdit(layoutWidget_11);
        LineEditDecelerationSetup_5->setObjectName(QStringLiteral("LineEditDecelerationSetup_5"));

        gridLayout_16->addWidget(LineEditDecelerationSetup_5, 6, 1, 1, 1);

        label_93 = new QLabel(layoutWidget_11);
        label_93->setObjectName(QStringLiteral("label_93"));

        gridLayout_16->addWidget(label_93, 7, 0, 1, 1);

        label_94 = new QLabel(layoutWidget_11);
        label_94->setObjectName(QStringLiteral("label_94"));

        gridLayout_16->addWidget(label_94, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_5 = new QLabel(layoutWidget_11);
        LabelPhaseCurrentSetup_5->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_5"));

        gridLayout_16->addWidget(LabelPhaseCurrentSetup_5, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_5 = new QLineEdit(layoutWidget_11);
        LineEditPhaseCurrentSetup_5->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_5"));

        gridLayout_16->addWidget(LineEditPhaseCurrentSetup_5, 8, 1, 1, 1);

        label_95 = new QLabel(layoutWidget_11);
        label_95->setObjectName(QStringLiteral("label_95"));

        gridLayout_16->addWidget(label_95, 9, 0, 1, 1);

        label_96 = new QLabel(layoutWidget_11);
        label_96->setObjectName(QStringLiteral("label_96"));

        gridLayout_16->addWidget(label_96, 9, 1, 1, 1);

        LabelAnalogOutputSetup_5 = new QLabel(layoutWidget_11);
        LabelAnalogOutputSetup_5->setObjectName(QStringLiteral("LabelAnalogOutputSetup_5"));

        gridLayout_16->addWidget(LabelAnalogOutputSetup_5, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_5 = new QLineEdit(layoutWidget_11);
        LineEditAnalogOutputSetup_5->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_5"));

        gridLayout_16->addWidget(LineEditAnalogOutputSetup_5, 10, 1, 1, 1);

        label_354 = new QLabel(layoutWidget_11);
        label_354->setObjectName(QStringLiteral("label_354"));

        gridLayout_16->addWidget(label_354, 11, 0, 1, 1);

        label_355 = new QLabel(layoutWidget_11);
        label_355->setObjectName(QStringLiteral("label_355"));

        gridLayout_16->addWidget(label_355, 11, 1, 1, 1);

        LabelVelHomeSetup_5 = new QLabel(layoutWidget_11);
        LabelVelHomeSetup_5->setObjectName(QStringLiteral("LabelVelHomeSetup_5"));

        gridLayout_16->addWidget(LabelVelHomeSetup_5, 12, 0, 1, 1);

        LineEditVelHomeSetup_5 = new QLineEdit(layoutWidget_11);
        LineEditVelHomeSetup_5->setObjectName(QStringLiteral("LineEditVelHomeSetup_5"));

        gridLayout_16->addWidget(LineEditVelHomeSetup_5, 12, 1, 1, 1);

        GetParameterDriver_5 = new QPushButton(layoutWidget_11);
        GetParameterDriver_5->setObjectName(QStringLiteral("GetParameterDriver_5"));

        gridLayout_16->addWidget(GetParameterDriver_5, 13, 0, 1, 1);

        SetParameterDriver_5 = new QPushButton(layoutWidget_11);
        SetParameterDriver_5->setObjectName(QStringLiteral("SetParameterDriver_5"));

        gridLayout_16->addWidget(SetParameterDriver_5, 13, 1, 1, 1);


        gridLayout_38->addLayout(gridLayout_16, 1, 2, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_97 = new QLabel(layoutWidget_11);
        label_97->setObjectName(QStringLiteral("label_97"));
        label_97->setFont(font6);

        verticalLayout_13->addWidget(label_97);

        LabelStatusDriver5 = new QLabel(layoutWidget_11);
        LabelStatusDriver5->setObjectName(QStringLiteral("LabelStatusDriver5"));
        LabelStatusDriver5->setFont(font6);

        verticalLayout_13->addWidget(LabelStatusDriver5);


        gridLayout_38->addLayout(verticalLayout_13, 2, 0, 1, 3);

        layoutWidget_45 = new QWidget(tab_7);
        layoutWidget_45->setObjectName(QStringLiteral("layoutWidget_45"));
        layoutWidget_45->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_82 = new QVBoxLayout(layoutWidget_45);
        verticalLayout_82->setSpacing(6);
        verticalLayout_82->setContentsMargins(11, 11, 11, 11);
        verticalLayout_82->setObjectName(QStringLiteral("verticalLayout_82"));
        verticalLayout_82->setContentsMargins(0, 0, 0, 0);
        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        label_309 = new QLabel(layoutWidget_45);
        label_309->setObjectName(QStringLiteral("label_309"));
        label_309->setFont(font6);

        verticalLayout_38->addWidget(label_309);

        LabelPositionStatus_5 = new QTextEdit(layoutWidget_45);
        LabelPositionStatus_5->setObjectName(QStringLiteral("LabelPositionStatus_5"));
        LabelPositionStatus_5->setMaximumSize(QSize(151, 51));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_5->setPalette(palette14);
        LabelPositionStatus_5->setFont(font4);
        LabelPositionStatus_5->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_5->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_38->addWidget(LabelPositionStatus_5);


        verticalLayout_82->addLayout(verticalLayout_38);

        CheckPositionButton_5 = new QPushButton(layoutWidget_45);
        CheckPositionButton_5->setObjectName(QStringLiteral("CheckPositionButton_5"));

        verticalLayout_82->addWidget(CheckPositionButton_5);

        tabWidget_2->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        layoutWidget_13 = new QWidget(tab_8);
        layoutWidget_13->setObjectName(QStringLiteral("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_61 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_61->setSpacing(6);
        verticalLayout_61->setContentsMargins(11, 11, 11, 11);
        verticalLayout_61->setObjectName(QStringLiteral("verticalLayout_61"));
        verticalLayout_61->setContentsMargins(0, 0, 0, 0);
        label_231 = new QLabel(layoutWidget_13);
        label_231->setObjectName(QStringLiteral("label_231"));

        verticalLayout_61->addWidget(label_231);

        LineEditMoveToValue_6 = new QLineEdit(layoutWidget_13);
        LineEditMoveToValue_6->setObjectName(QStringLiteral("LineEditMoveToValue_6"));

        verticalLayout_61->addWidget(LineEditMoveToValue_6);

        MoveTo_6 = new QPushButton(layoutWidget_13);
        MoveTo_6->setObjectName(QStringLiteral("MoveTo_6"));

        verticalLayout_61->addWidget(MoveTo_6);

        Homing_6 = new QPushButton(layoutWidget_13);
        Homing_6->setObjectName(QStringLiteral("Homing_6"));

        verticalLayout_61->addWidget(Homing_6);

        layoutWidget_15 = new QWidget(tab_8);
        layoutWidget_15->setObjectName(QStringLiteral("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_62 = new QVBoxLayout(layoutWidget_15);
        verticalLayout_62->setSpacing(6);
        verticalLayout_62->setContentsMargins(11, 11, 11, 11);
        verticalLayout_62->setObjectName(QStringLiteral("verticalLayout_62"));
        verticalLayout_62->setContentsMargins(0, 0, 0, 0);
        label_234 = new QLabel(layoutWidget_15);
        label_234->setObjectName(QStringLiteral("label_234"));
        label_234->setFont(font5);

        verticalLayout_62->addWidget(label_234);

        label_235 = new QLabel(layoutWidget_15);
        label_235->setObjectName(QStringLiteral("label_235"));

        verticalLayout_62->addWidget(label_235);

        LabelMovAnalogInput0_6 = new QLabel(layoutWidget_15);
        LabelMovAnalogInput0_6->setObjectName(QStringLiteral("LabelMovAnalogInput0_6"));

        verticalLayout_62->addWidget(LabelMovAnalogInput0_6);

        label_236 = new QLabel(layoutWidget_15);
        label_236->setObjectName(QStringLiteral("label_236"));

        verticalLayout_62->addWidget(label_236);

        LabelMovCurrentPosition_6 = new QLabel(layoutWidget_15);
        LabelMovCurrentPosition_6->setObjectName(QStringLiteral("LabelMovCurrentPosition_6"));

        verticalLayout_62->addWidget(LabelMovCurrentPosition_6);

        GetParameterMov_6 = new QPushButton(layoutWidget_15);
        GetParameterMov_6->setObjectName(QStringLiteral("GetParameterMov_6"));

        verticalLayout_62->addWidget(GetParameterMov_6);

        layoutWidget_14 = new QWidget(tab_8);
        layoutWidget_14->setObjectName(QStringLiteral("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_39 = new QGridLayout(layoutWidget_14);
        gridLayout_39->setSpacing(6);
        gridLayout_39->setContentsMargins(11, 11, 11, 11);
        gridLayout_39->setObjectName(QStringLiteral("gridLayout_39"));
        gridLayout_39->setContentsMargins(0, 0, 0, 0);
        label_98 = new QLabel(layoutWidget_14);
        label_98->setObjectName(QStringLiteral("label_98"));
        label_98->setFont(font5);

        gridLayout_39->addWidget(label_98, 0, 0, 1, 3);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        Images_6 = new QLabel(layoutWidget_14);
        Images_6->setObjectName(QStringLiteral("Images_6"));
        Images_6->setMinimumSize(QSize(0, 100));
        Images_6->setMaximumSize(QSize(200, 150));
        Images_6->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_6->setScaledContents(true);

        verticalLayout_14->addWidget(Images_6);

        label_99 = new QLabel(layoutWidget_14);
        label_99->setObjectName(QStringLiteral("label_99"));

        verticalLayout_14->addWidget(label_99);


        gridLayout_39->addLayout(verticalLayout_14, 1, 0, 1, 1);

        label_356 = new QLabel(layoutWidget_14);
        label_356->setObjectName(QStringLiteral("label_356"));
        label_356->setMinimumSize(QSize(25, 0));

        gridLayout_39->addWidget(label_356, 1, 1, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        label_100 = new QLabel(layoutWidget_14);
        label_100->setObjectName(QStringLiteral("label_100"));

        gridLayout_17->addWidget(label_100, 0, 0, 1, 1);

        label_101 = new QLabel(layoutWidget_14);
        label_101->setObjectName(QStringLiteral("label_101"));

        gridLayout_17->addWidget(label_101, 0, 1, 1, 1);

        label_102 = new QLabel(layoutWidget_14);
        label_102->setObjectName(QStringLiteral("label_102"));

        gridLayout_17->addWidget(label_102, 1, 0, 1, 1);

        label_103 = new QLabel(layoutWidget_14);
        label_103->setObjectName(QStringLiteral("label_103"));

        gridLayout_17->addWidget(label_103, 1, 1, 1, 1);

        LabelMaxVelSetup_6 = new QLabel(layoutWidget_14);
        LabelMaxVelSetup_6->setObjectName(QStringLiteral("LabelMaxVelSetup_6"));

        gridLayout_17->addWidget(LabelMaxVelSetup_6, 2, 0, 1, 1);

        LineEditMaxVelSetup_6 = new QLineEdit(layoutWidget_14);
        LineEditMaxVelSetup_6->setObjectName(QStringLiteral("LineEditMaxVelSetup_6"));

        gridLayout_17->addWidget(LineEditMaxVelSetup_6, 2, 1, 1, 1);

        label_104 = new QLabel(layoutWidget_14);
        label_104->setObjectName(QStringLiteral("label_104"));

        gridLayout_17->addWidget(label_104, 3, 0, 1, 1);

        label_105 = new QLabel(layoutWidget_14);
        label_105->setObjectName(QStringLiteral("label_105"));

        gridLayout_17->addWidget(label_105, 3, 1, 1, 1);

        LabelAccelerationSetup_6 = new QLabel(layoutWidget_14);
        LabelAccelerationSetup_6->setObjectName(QStringLiteral("LabelAccelerationSetup_6"));

        gridLayout_17->addWidget(LabelAccelerationSetup_6, 4, 0, 1, 1);

        LineEditAccelerationSetup_6 = new QLineEdit(layoutWidget_14);
        LineEditAccelerationSetup_6->setObjectName(QStringLiteral("LineEditAccelerationSetup_6"));

        gridLayout_17->addWidget(LineEditAccelerationSetup_6, 4, 1, 1, 1);

        label_106 = new QLabel(layoutWidget_14);
        label_106->setObjectName(QStringLiteral("label_106"));

        gridLayout_17->addWidget(label_106, 5, 0, 1, 1);

        label_107 = new QLabel(layoutWidget_14);
        label_107->setObjectName(QStringLiteral("label_107"));

        gridLayout_17->addWidget(label_107, 5, 1, 1, 1);

        LabelDecelerationSetup_6 = new QLabel(layoutWidget_14);
        LabelDecelerationSetup_6->setObjectName(QStringLiteral("LabelDecelerationSetup_6"));

        gridLayout_17->addWidget(LabelDecelerationSetup_6, 6, 0, 1, 1);

        LineEditDecelerationSetup_6 = new QLineEdit(layoutWidget_14);
        LineEditDecelerationSetup_6->setObjectName(QStringLiteral("LineEditDecelerationSetup_6"));

        gridLayout_17->addWidget(LineEditDecelerationSetup_6, 6, 1, 1, 1);

        label_108 = new QLabel(layoutWidget_14);
        label_108->setObjectName(QStringLiteral("label_108"));

        gridLayout_17->addWidget(label_108, 7, 0, 1, 1);

        label_109 = new QLabel(layoutWidget_14);
        label_109->setObjectName(QStringLiteral("label_109"));

        gridLayout_17->addWidget(label_109, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_6 = new QLabel(layoutWidget_14);
        LabelPhaseCurrentSetup_6->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_6"));

        gridLayout_17->addWidget(LabelPhaseCurrentSetup_6, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_6 = new QLineEdit(layoutWidget_14);
        LineEditPhaseCurrentSetup_6->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_6"));

        gridLayout_17->addWidget(LineEditPhaseCurrentSetup_6, 8, 1, 1, 1);

        label_110 = new QLabel(layoutWidget_14);
        label_110->setObjectName(QStringLiteral("label_110"));

        gridLayout_17->addWidget(label_110, 9, 0, 1, 1);

        label_111 = new QLabel(layoutWidget_14);
        label_111->setObjectName(QStringLiteral("label_111"));

        gridLayout_17->addWidget(label_111, 9, 1, 1, 1);

        LabelAnalogOutputSetup_6 = new QLabel(layoutWidget_14);
        LabelAnalogOutputSetup_6->setObjectName(QStringLiteral("LabelAnalogOutputSetup_6"));

        gridLayout_17->addWidget(LabelAnalogOutputSetup_6, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_6 = new QLineEdit(layoutWidget_14);
        LineEditAnalogOutputSetup_6->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_6"));

        gridLayout_17->addWidget(LineEditAnalogOutputSetup_6, 10, 1, 1, 1);

        label_357 = new QLabel(layoutWidget_14);
        label_357->setObjectName(QStringLiteral("label_357"));

        gridLayout_17->addWidget(label_357, 11, 0, 1, 1);

        label_358 = new QLabel(layoutWidget_14);
        label_358->setObjectName(QStringLiteral("label_358"));

        gridLayout_17->addWidget(label_358, 11, 1, 1, 1);

        LabelVelHomeSetup_6 = new QLabel(layoutWidget_14);
        LabelVelHomeSetup_6->setObjectName(QStringLiteral("LabelVelHomeSetup_6"));

        gridLayout_17->addWidget(LabelVelHomeSetup_6, 12, 0, 1, 1);

        LineEditVelHomeSetup_6 = new QLineEdit(layoutWidget_14);
        LineEditVelHomeSetup_6->setObjectName(QStringLiteral("LineEditVelHomeSetup_6"));

        gridLayout_17->addWidget(LineEditVelHomeSetup_6, 12, 1, 1, 1);

        GetParameterDriver_6 = new QPushButton(layoutWidget_14);
        GetParameterDriver_6->setObjectName(QStringLiteral("GetParameterDriver_6"));

        gridLayout_17->addWidget(GetParameterDriver_6, 13, 0, 1, 1);

        SetParameterDriver_6 = new QPushButton(layoutWidget_14);
        SetParameterDriver_6->setObjectName(QStringLiteral("SetParameterDriver_6"));

        gridLayout_17->addWidget(SetParameterDriver_6, 13, 1, 1, 1);


        gridLayout_39->addLayout(gridLayout_17, 1, 2, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_112 = new QLabel(layoutWidget_14);
        label_112->setObjectName(QStringLiteral("label_112"));
        label_112->setFont(font6);

        verticalLayout_15->addWidget(label_112);

        LabelStatusDriver6 = new QLabel(layoutWidget_14);
        LabelStatusDriver6->setObjectName(QStringLiteral("LabelStatusDriver6"));
        LabelStatusDriver6->setFont(font6);

        verticalLayout_15->addWidget(LabelStatusDriver6);


        gridLayout_39->addLayout(verticalLayout_15, 2, 0, 1, 3);

        layoutWidget_46 = new QWidget(tab_8);
        layoutWidget_46->setObjectName(QStringLiteral("layoutWidget_46"));
        layoutWidget_46->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_83 = new QVBoxLayout(layoutWidget_46);
        verticalLayout_83->setSpacing(6);
        verticalLayout_83->setContentsMargins(11, 11, 11, 11);
        verticalLayout_83->setObjectName(QStringLiteral("verticalLayout_83"));
        verticalLayout_83->setContentsMargins(0, 0, 0, 0);
        verticalLayout_39 = new QVBoxLayout();
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        label_310 = new QLabel(layoutWidget_46);
        label_310->setObjectName(QStringLiteral("label_310"));
        label_310->setFont(font6);

        verticalLayout_39->addWidget(label_310);

        LabelPositionStatus_6 = new QTextEdit(layoutWidget_46);
        LabelPositionStatus_6->setObjectName(QStringLiteral("LabelPositionStatus_6"));
        LabelPositionStatus_6->setMaximumSize(QSize(151, 51));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_6->setPalette(palette15);
        LabelPositionStatus_6->setFont(font4);
        LabelPositionStatus_6->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_6->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_39->addWidget(LabelPositionStatus_6);


        verticalLayout_83->addLayout(verticalLayout_39);

        CheckPositionButton_6 = new QPushButton(layoutWidget_46);
        CheckPositionButton_6->setObjectName(QStringLiteral("CheckPositionButton_6"));

        verticalLayout_83->addWidget(CheckPositionButton_6);

        tabWidget_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        layoutWidget_16 = new QWidget(tab_9);
        layoutWidget_16->setObjectName(QStringLiteral("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_63 = new QVBoxLayout(layoutWidget_16);
        verticalLayout_63->setSpacing(6);
        verticalLayout_63->setContentsMargins(11, 11, 11, 11);
        verticalLayout_63->setObjectName(QStringLiteral("verticalLayout_63"));
        verticalLayout_63->setContentsMargins(0, 0, 0, 0);
        label_237 = new QLabel(layoutWidget_16);
        label_237->setObjectName(QStringLiteral("label_237"));

        verticalLayout_63->addWidget(label_237);

        LineEditMoveToValue_7 = new QLineEdit(layoutWidget_16);
        LineEditMoveToValue_7->setObjectName(QStringLiteral("LineEditMoveToValue_7"));

        verticalLayout_63->addWidget(LineEditMoveToValue_7);

        MoveTo_7 = new QPushButton(layoutWidget_16);
        MoveTo_7->setObjectName(QStringLiteral("MoveTo_7"));

        verticalLayout_63->addWidget(MoveTo_7);

        Homing_7 = new QPushButton(layoutWidget_16);
        Homing_7->setObjectName(QStringLiteral("Homing_7"));
        Homing_7->setAcceptDrops(true);

        verticalLayout_63->addWidget(Homing_7);

        layoutWidget_18 = new QWidget(tab_9);
        layoutWidget_18->setObjectName(QStringLiteral("layoutWidget_18"));
        layoutWidget_18->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_64 = new QVBoxLayout(layoutWidget_18);
        verticalLayout_64->setSpacing(6);
        verticalLayout_64->setContentsMargins(11, 11, 11, 11);
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        verticalLayout_64->setContentsMargins(0, 0, 0, 0);
        label_240 = new QLabel(layoutWidget_18);
        label_240->setObjectName(QStringLiteral("label_240"));
        label_240->setFont(font5);

        verticalLayout_64->addWidget(label_240);

        label_241 = new QLabel(layoutWidget_18);
        label_241->setObjectName(QStringLiteral("label_241"));

        verticalLayout_64->addWidget(label_241);

        LabelMovAnalogInput0_7 = new QLabel(layoutWidget_18);
        LabelMovAnalogInput0_7->setObjectName(QStringLiteral("LabelMovAnalogInput0_7"));

        verticalLayout_64->addWidget(LabelMovAnalogInput0_7);

        label_242 = new QLabel(layoutWidget_18);
        label_242->setObjectName(QStringLiteral("label_242"));

        verticalLayout_64->addWidget(label_242);

        LabelMovCurrentPosition_7 = new QLabel(layoutWidget_18);
        LabelMovCurrentPosition_7->setObjectName(QStringLiteral("LabelMovCurrentPosition_7"));

        verticalLayout_64->addWidget(LabelMovCurrentPosition_7);

        GetParameterMov_7 = new QPushButton(layoutWidget_18);
        GetParameterMov_7->setObjectName(QStringLiteral("GetParameterMov_7"));

        verticalLayout_64->addWidget(GetParameterMov_7);

        layoutWidget_17 = new QWidget(tab_9);
        layoutWidget_17->setObjectName(QStringLiteral("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_40 = new QGridLayout(layoutWidget_17);
        gridLayout_40->setSpacing(6);
        gridLayout_40->setContentsMargins(11, 11, 11, 11);
        gridLayout_40->setObjectName(QStringLiteral("gridLayout_40"));
        gridLayout_40->setContentsMargins(0, 0, 0, 0);
        label_113 = new QLabel(layoutWidget_17);
        label_113->setObjectName(QStringLiteral("label_113"));
        label_113->setFont(font5);

        gridLayout_40->addWidget(label_113, 0, 0, 1, 3);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        Images_7 = new QLabel(layoutWidget_17);
        Images_7->setObjectName(QStringLiteral("Images_7"));
        Images_7->setMinimumSize(QSize(0, 100));
        Images_7->setMaximumSize(QSize(200, 150));
        Images_7->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_7->setScaledContents(true);

        verticalLayout_16->addWidget(Images_7);

        label_114 = new QLabel(layoutWidget_17);
        label_114->setObjectName(QStringLiteral("label_114"));

        verticalLayout_16->addWidget(label_114);


        gridLayout_40->addLayout(verticalLayout_16, 1, 0, 1, 1);

        label_359 = new QLabel(layoutWidget_17);
        label_359->setObjectName(QStringLiteral("label_359"));
        label_359->setMinimumSize(QSize(25, 0));

        gridLayout_40->addWidget(label_359, 1, 1, 1, 1);

        gridLayout_18 = new QGridLayout();
        gridLayout_18->setSpacing(6);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        label_115 = new QLabel(layoutWidget_17);
        label_115->setObjectName(QStringLiteral("label_115"));

        gridLayout_18->addWidget(label_115, 0, 0, 1, 1);

        label_116 = new QLabel(layoutWidget_17);
        label_116->setObjectName(QStringLiteral("label_116"));

        gridLayout_18->addWidget(label_116, 0, 1, 1, 1);

        label_117 = new QLabel(layoutWidget_17);
        label_117->setObjectName(QStringLiteral("label_117"));

        gridLayout_18->addWidget(label_117, 1, 0, 1, 1);

        label_118 = new QLabel(layoutWidget_17);
        label_118->setObjectName(QStringLiteral("label_118"));

        gridLayout_18->addWidget(label_118, 1, 1, 1, 1);

        LabelMaxVelSetup_7 = new QLabel(layoutWidget_17);
        LabelMaxVelSetup_7->setObjectName(QStringLiteral("LabelMaxVelSetup_7"));

        gridLayout_18->addWidget(LabelMaxVelSetup_7, 2, 0, 1, 1);

        LineEditMaxVelSetup_7 = new QLineEdit(layoutWidget_17);
        LineEditMaxVelSetup_7->setObjectName(QStringLiteral("LineEditMaxVelSetup_7"));

        gridLayout_18->addWidget(LineEditMaxVelSetup_7, 2, 1, 1, 1);

        label_119 = new QLabel(layoutWidget_17);
        label_119->setObjectName(QStringLiteral("label_119"));

        gridLayout_18->addWidget(label_119, 3, 0, 1, 1);

        label_120 = new QLabel(layoutWidget_17);
        label_120->setObjectName(QStringLiteral("label_120"));

        gridLayout_18->addWidget(label_120, 3, 1, 1, 1);

        LabelAccelerationSetup_7 = new QLabel(layoutWidget_17);
        LabelAccelerationSetup_7->setObjectName(QStringLiteral("LabelAccelerationSetup_7"));

        gridLayout_18->addWidget(LabelAccelerationSetup_7, 4, 0, 1, 1);

        LineEditAccelerationSetup_7 = new QLineEdit(layoutWidget_17);
        LineEditAccelerationSetup_7->setObjectName(QStringLiteral("LineEditAccelerationSetup_7"));

        gridLayout_18->addWidget(LineEditAccelerationSetup_7, 4, 1, 1, 1);

        label_121 = new QLabel(layoutWidget_17);
        label_121->setObjectName(QStringLiteral("label_121"));

        gridLayout_18->addWidget(label_121, 5, 0, 1, 1);

        label_122 = new QLabel(layoutWidget_17);
        label_122->setObjectName(QStringLiteral("label_122"));

        gridLayout_18->addWidget(label_122, 5, 1, 1, 1);

        LabelDecelerationSetup_7 = new QLabel(layoutWidget_17);
        LabelDecelerationSetup_7->setObjectName(QStringLiteral("LabelDecelerationSetup_7"));

        gridLayout_18->addWidget(LabelDecelerationSetup_7, 6, 0, 1, 1);

        LineEditDecelerationSetup_7 = new QLineEdit(layoutWidget_17);
        LineEditDecelerationSetup_7->setObjectName(QStringLiteral("LineEditDecelerationSetup_7"));

        gridLayout_18->addWidget(LineEditDecelerationSetup_7, 6, 1, 1, 1);

        label_123 = new QLabel(layoutWidget_17);
        label_123->setObjectName(QStringLiteral("label_123"));

        gridLayout_18->addWidget(label_123, 7, 0, 1, 1);

        label_124 = new QLabel(layoutWidget_17);
        label_124->setObjectName(QStringLiteral("label_124"));

        gridLayout_18->addWidget(label_124, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_7 = new QLabel(layoutWidget_17);
        LabelPhaseCurrentSetup_7->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_7"));

        gridLayout_18->addWidget(LabelPhaseCurrentSetup_7, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_7 = new QLineEdit(layoutWidget_17);
        LineEditPhaseCurrentSetup_7->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_7"));

        gridLayout_18->addWidget(LineEditPhaseCurrentSetup_7, 8, 1, 1, 1);

        label_125 = new QLabel(layoutWidget_17);
        label_125->setObjectName(QStringLiteral("label_125"));

        gridLayout_18->addWidget(label_125, 9, 0, 1, 1);

        label_126 = new QLabel(layoutWidget_17);
        label_126->setObjectName(QStringLiteral("label_126"));

        gridLayout_18->addWidget(label_126, 9, 1, 1, 1);

        LabelAnalogOutputSetup_7 = new QLabel(layoutWidget_17);
        LabelAnalogOutputSetup_7->setObjectName(QStringLiteral("LabelAnalogOutputSetup_7"));

        gridLayout_18->addWidget(LabelAnalogOutputSetup_7, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_7 = new QLineEdit(layoutWidget_17);
        LineEditAnalogOutputSetup_7->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_7"));

        gridLayout_18->addWidget(LineEditAnalogOutputSetup_7, 10, 1, 1, 1);

        label_360 = new QLabel(layoutWidget_17);
        label_360->setObjectName(QStringLiteral("label_360"));

        gridLayout_18->addWidget(label_360, 11, 0, 1, 1);

        label_361 = new QLabel(layoutWidget_17);
        label_361->setObjectName(QStringLiteral("label_361"));

        gridLayout_18->addWidget(label_361, 11, 1, 1, 1);

        LabelVelHomeSetup_7 = new QLabel(layoutWidget_17);
        LabelVelHomeSetup_7->setObjectName(QStringLiteral("LabelVelHomeSetup_7"));

        gridLayout_18->addWidget(LabelVelHomeSetup_7, 12, 0, 1, 1);

        LineEditVelHomeSetup_7 = new QLineEdit(layoutWidget_17);
        LineEditVelHomeSetup_7->setObjectName(QStringLiteral("LineEditVelHomeSetup_7"));

        gridLayout_18->addWidget(LineEditVelHomeSetup_7, 12, 1, 1, 1);

        GetParameterDriver_7 = new QPushButton(layoutWidget_17);
        GetParameterDriver_7->setObjectName(QStringLiteral("GetParameterDriver_7"));

        gridLayout_18->addWidget(GetParameterDriver_7, 13, 0, 1, 1);

        SetParameterDriver_7 = new QPushButton(layoutWidget_17);
        SetParameterDriver_7->setObjectName(QStringLiteral("SetParameterDriver_7"));

        gridLayout_18->addWidget(SetParameterDriver_7, 13, 1, 1, 1);


        gridLayout_40->addLayout(gridLayout_18, 1, 2, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_127 = new QLabel(layoutWidget_17);
        label_127->setObjectName(QStringLiteral("label_127"));
        label_127->setFont(font6);

        verticalLayout_17->addWidget(label_127);

        LabelStatusDriver7 = new QLabel(layoutWidget_17);
        LabelStatusDriver7->setObjectName(QStringLiteral("LabelStatusDriver7"));
        LabelStatusDriver7->setFont(font6);

        verticalLayout_17->addWidget(LabelStatusDriver7);


        gridLayout_40->addLayout(verticalLayout_17, 2, 0, 1, 3);

        layoutWidget_47 = new QWidget(tab_9);
        layoutWidget_47->setObjectName(QStringLiteral("layoutWidget_47"));
        layoutWidget_47->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_84 = new QVBoxLayout(layoutWidget_47);
        verticalLayout_84->setSpacing(6);
        verticalLayout_84->setContentsMargins(11, 11, 11, 11);
        verticalLayout_84->setObjectName(QStringLiteral("verticalLayout_84"));
        verticalLayout_84->setContentsMargins(0, 0, 0, 0);
        verticalLayout_41 = new QVBoxLayout();
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        label_312 = new QLabel(layoutWidget_47);
        label_312->setObjectName(QStringLiteral("label_312"));
        label_312->setFont(font6);

        verticalLayout_41->addWidget(label_312);

        LabelPositionStatus_7 = new QTextEdit(layoutWidget_47);
        LabelPositionStatus_7->setObjectName(QStringLiteral("LabelPositionStatus_7"));
        LabelPositionStatus_7->setMaximumSize(QSize(151, 51));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_7->setPalette(palette16);
        LabelPositionStatus_7->setFont(font4);
        LabelPositionStatus_7->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_7->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_41->addWidget(LabelPositionStatus_7);


        verticalLayout_84->addLayout(verticalLayout_41);

        CheckPositionButton_7 = new QPushButton(layoutWidget_47);
        CheckPositionButton_7->setObjectName(QStringLiteral("CheckPositionButton_7"));

        verticalLayout_84->addWidget(CheckPositionButton_7);

        tabWidget_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        layoutWidget_19 = new QWidget(tab_10);
        layoutWidget_19->setObjectName(QStringLiteral("layoutWidget_19"));
        layoutWidget_19->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_65 = new QVBoxLayout(layoutWidget_19);
        verticalLayout_65->setSpacing(6);
        verticalLayout_65->setContentsMargins(11, 11, 11, 11);
        verticalLayout_65->setObjectName(QStringLiteral("verticalLayout_65"));
        verticalLayout_65->setContentsMargins(0, 0, 0, 0);
        label_243 = new QLabel(layoutWidget_19);
        label_243->setObjectName(QStringLiteral("label_243"));

        verticalLayout_65->addWidget(label_243);

        LineEditMoveToValue_8 = new QLineEdit(layoutWidget_19);
        LineEditMoveToValue_8->setObjectName(QStringLiteral("LineEditMoveToValue_8"));

        verticalLayout_65->addWidget(LineEditMoveToValue_8);

        MoveTo_8 = new QPushButton(layoutWidget_19);
        MoveTo_8->setObjectName(QStringLiteral("MoveTo_8"));

        verticalLayout_65->addWidget(MoveTo_8);

        Homing_8 = new QPushButton(layoutWidget_19);
        Homing_8->setObjectName(QStringLiteral("Homing_8"));

        verticalLayout_65->addWidget(Homing_8);

        layoutWidget_21 = new QWidget(tab_10);
        layoutWidget_21->setObjectName(QStringLiteral("layoutWidget_21"));
        layoutWidget_21->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_66 = new QVBoxLayout(layoutWidget_21);
        verticalLayout_66->setSpacing(6);
        verticalLayout_66->setContentsMargins(11, 11, 11, 11);
        verticalLayout_66->setObjectName(QStringLiteral("verticalLayout_66"));
        verticalLayout_66->setContentsMargins(0, 0, 0, 0);
        label_246 = new QLabel(layoutWidget_21);
        label_246->setObjectName(QStringLiteral("label_246"));
        label_246->setFont(font5);

        verticalLayout_66->addWidget(label_246);

        label_247 = new QLabel(layoutWidget_21);
        label_247->setObjectName(QStringLiteral("label_247"));

        verticalLayout_66->addWidget(label_247);

        LabelMovAnalogInput0_8 = new QLabel(layoutWidget_21);
        LabelMovAnalogInput0_8->setObjectName(QStringLiteral("LabelMovAnalogInput0_8"));

        verticalLayout_66->addWidget(LabelMovAnalogInput0_8);

        label_248 = new QLabel(layoutWidget_21);
        label_248->setObjectName(QStringLiteral("label_248"));

        verticalLayout_66->addWidget(label_248);

        LabelMovCurrentPosition_8 = new QLabel(layoutWidget_21);
        LabelMovCurrentPosition_8->setObjectName(QStringLiteral("LabelMovCurrentPosition_8"));

        verticalLayout_66->addWidget(LabelMovCurrentPosition_8);

        GetParameterMov_8 = new QPushButton(layoutWidget_21);
        GetParameterMov_8->setObjectName(QStringLiteral("GetParameterMov_8"));

        verticalLayout_66->addWidget(GetParameterMov_8);

        layoutWidget_20 = new QWidget(tab_10);
        layoutWidget_20->setObjectName(QStringLiteral("layoutWidget_20"));
        layoutWidget_20->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_41 = new QGridLayout(layoutWidget_20);
        gridLayout_41->setSpacing(6);
        gridLayout_41->setContentsMargins(11, 11, 11, 11);
        gridLayout_41->setObjectName(QStringLiteral("gridLayout_41"));
        gridLayout_41->setContentsMargins(0, 0, 0, 0);
        label_128 = new QLabel(layoutWidget_20);
        label_128->setObjectName(QStringLiteral("label_128"));
        label_128->setFont(font5);

        gridLayout_41->addWidget(label_128, 0, 0, 1, 3);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        Images_8 = new QLabel(layoutWidget_20);
        Images_8->setObjectName(QStringLiteral("Images_8"));
        Images_8->setMinimumSize(QSize(0, 100));
        Images_8->setMaximumSize(QSize(200, 150));
        Images_8->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_8->setScaledContents(true);

        verticalLayout_18->addWidget(Images_8);

        label_129 = new QLabel(layoutWidget_20);
        label_129->setObjectName(QStringLiteral("label_129"));

        verticalLayout_18->addWidget(label_129);


        gridLayout_41->addLayout(verticalLayout_18, 1, 0, 1, 1);

        label_362 = new QLabel(layoutWidget_20);
        label_362->setObjectName(QStringLiteral("label_362"));
        label_362->setMinimumSize(QSize(25, 0));

        gridLayout_41->addWidget(label_362, 1, 1, 1, 1);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setSpacing(6);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        label_130 = new QLabel(layoutWidget_20);
        label_130->setObjectName(QStringLiteral("label_130"));

        gridLayout_19->addWidget(label_130, 0, 0, 1, 1);

        label_131 = new QLabel(layoutWidget_20);
        label_131->setObjectName(QStringLiteral("label_131"));

        gridLayout_19->addWidget(label_131, 0, 1, 1, 1);

        label_132 = new QLabel(layoutWidget_20);
        label_132->setObjectName(QStringLiteral("label_132"));

        gridLayout_19->addWidget(label_132, 1, 0, 1, 1);

        label_133 = new QLabel(layoutWidget_20);
        label_133->setObjectName(QStringLiteral("label_133"));

        gridLayout_19->addWidget(label_133, 1, 1, 1, 1);

        LabelMaxVelSetup_8 = new QLabel(layoutWidget_20);
        LabelMaxVelSetup_8->setObjectName(QStringLiteral("LabelMaxVelSetup_8"));

        gridLayout_19->addWidget(LabelMaxVelSetup_8, 2, 0, 1, 1);

        LineEditMaxVelSetup_8 = new QLineEdit(layoutWidget_20);
        LineEditMaxVelSetup_8->setObjectName(QStringLiteral("LineEditMaxVelSetup_8"));

        gridLayout_19->addWidget(LineEditMaxVelSetup_8, 2, 1, 1, 1);

        label_134 = new QLabel(layoutWidget_20);
        label_134->setObjectName(QStringLiteral("label_134"));

        gridLayout_19->addWidget(label_134, 3, 0, 1, 1);

        label_135 = new QLabel(layoutWidget_20);
        label_135->setObjectName(QStringLiteral("label_135"));

        gridLayout_19->addWidget(label_135, 3, 1, 1, 1);

        LabelAccelerationSetup_8 = new QLabel(layoutWidget_20);
        LabelAccelerationSetup_8->setObjectName(QStringLiteral("LabelAccelerationSetup_8"));

        gridLayout_19->addWidget(LabelAccelerationSetup_8, 4, 0, 1, 1);

        LineEditAccelerationSetup_8 = new QLineEdit(layoutWidget_20);
        LineEditAccelerationSetup_8->setObjectName(QStringLiteral("LineEditAccelerationSetup_8"));

        gridLayout_19->addWidget(LineEditAccelerationSetup_8, 4, 1, 1, 1);

        label_136 = new QLabel(layoutWidget_20);
        label_136->setObjectName(QStringLiteral("label_136"));

        gridLayout_19->addWidget(label_136, 5, 0, 1, 1);

        label_137 = new QLabel(layoutWidget_20);
        label_137->setObjectName(QStringLiteral("label_137"));

        gridLayout_19->addWidget(label_137, 5, 1, 1, 1);

        LabelDecelerationSetup_8 = new QLabel(layoutWidget_20);
        LabelDecelerationSetup_8->setObjectName(QStringLiteral("LabelDecelerationSetup_8"));

        gridLayout_19->addWidget(LabelDecelerationSetup_8, 6, 0, 1, 1);

        LineEditDecelerationSetup_8 = new QLineEdit(layoutWidget_20);
        LineEditDecelerationSetup_8->setObjectName(QStringLiteral("LineEditDecelerationSetup_8"));

        gridLayout_19->addWidget(LineEditDecelerationSetup_8, 6, 1, 1, 1);

        label_138 = new QLabel(layoutWidget_20);
        label_138->setObjectName(QStringLiteral("label_138"));

        gridLayout_19->addWidget(label_138, 7, 0, 1, 1);

        label_139 = new QLabel(layoutWidget_20);
        label_139->setObjectName(QStringLiteral("label_139"));

        gridLayout_19->addWidget(label_139, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_8 = new QLabel(layoutWidget_20);
        LabelPhaseCurrentSetup_8->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_8"));

        gridLayout_19->addWidget(LabelPhaseCurrentSetup_8, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_8 = new QLineEdit(layoutWidget_20);
        LineEditPhaseCurrentSetup_8->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_8"));

        gridLayout_19->addWidget(LineEditPhaseCurrentSetup_8, 8, 1, 1, 1);

        label_140 = new QLabel(layoutWidget_20);
        label_140->setObjectName(QStringLiteral("label_140"));

        gridLayout_19->addWidget(label_140, 9, 0, 1, 1);

        label_141 = new QLabel(layoutWidget_20);
        label_141->setObjectName(QStringLiteral("label_141"));

        gridLayout_19->addWidget(label_141, 9, 1, 1, 1);

        LabelAnalogOutputSetup_8 = new QLabel(layoutWidget_20);
        LabelAnalogOutputSetup_8->setObjectName(QStringLiteral("LabelAnalogOutputSetup_8"));

        gridLayout_19->addWidget(LabelAnalogOutputSetup_8, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_8 = new QLineEdit(layoutWidget_20);
        LineEditAnalogOutputSetup_8->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_8"));

        gridLayout_19->addWidget(LineEditAnalogOutputSetup_8, 10, 1, 1, 1);

        label_363 = new QLabel(layoutWidget_20);
        label_363->setObjectName(QStringLiteral("label_363"));

        gridLayout_19->addWidget(label_363, 11, 0, 1, 1);

        label_364 = new QLabel(layoutWidget_20);
        label_364->setObjectName(QStringLiteral("label_364"));

        gridLayout_19->addWidget(label_364, 11, 1, 1, 1);

        LabelVelHomeSetup_8 = new QLabel(layoutWidget_20);
        LabelVelHomeSetup_8->setObjectName(QStringLiteral("LabelVelHomeSetup_8"));

        gridLayout_19->addWidget(LabelVelHomeSetup_8, 12, 0, 1, 1);

        LineEditVelHomeSetup_8 = new QLineEdit(layoutWidget_20);
        LineEditVelHomeSetup_8->setObjectName(QStringLiteral("LineEditVelHomeSetup_8"));

        gridLayout_19->addWidget(LineEditVelHomeSetup_8, 12, 1, 1, 1);

        GetParameterDriver_8 = new QPushButton(layoutWidget_20);
        GetParameterDriver_8->setObjectName(QStringLiteral("GetParameterDriver_8"));

        gridLayout_19->addWidget(GetParameterDriver_8, 13, 0, 1, 1);

        SetParameterDriver_8 = new QPushButton(layoutWidget_20);
        SetParameterDriver_8->setObjectName(QStringLiteral("SetParameterDriver_8"));

        gridLayout_19->addWidget(SetParameterDriver_8, 13, 1, 1, 1);


        gridLayout_41->addLayout(gridLayout_19, 1, 2, 1, 1);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_142 = new QLabel(layoutWidget_20);
        label_142->setObjectName(QStringLiteral("label_142"));
        label_142->setFont(font6);

        verticalLayout_19->addWidget(label_142);

        LabelStatusDriver8 = new QLabel(layoutWidget_20);
        LabelStatusDriver8->setObjectName(QStringLiteral("LabelStatusDriver8"));
        LabelStatusDriver8->setFont(font6);

        verticalLayout_19->addWidget(LabelStatusDriver8);


        gridLayout_41->addLayout(verticalLayout_19, 2, 0, 1, 3);

        layoutWidget_48 = new QWidget(tab_10);
        layoutWidget_48->setObjectName(QStringLiteral("layoutWidget_48"));
        layoutWidget_48->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_85 = new QVBoxLayout(layoutWidget_48);
        verticalLayout_85->setSpacing(6);
        verticalLayout_85->setContentsMargins(11, 11, 11, 11);
        verticalLayout_85->setObjectName(QStringLiteral("verticalLayout_85"));
        verticalLayout_85->setContentsMargins(0, 0, 0, 0);
        verticalLayout_42 = new QVBoxLayout();
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        label_317 = new QLabel(layoutWidget_48);
        label_317->setObjectName(QStringLiteral("label_317"));
        label_317->setFont(font6);

        verticalLayout_42->addWidget(label_317);

        LabelPositionStatus_8 = new QTextEdit(layoutWidget_48);
        LabelPositionStatus_8->setObjectName(QStringLiteral("LabelPositionStatus_8"));
        LabelPositionStatus_8->setMaximumSize(QSize(151, 51));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_8->setPalette(palette17);
        LabelPositionStatus_8->setFont(font4);
        LabelPositionStatus_8->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_8->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_42->addWidget(LabelPositionStatus_8);


        verticalLayout_85->addLayout(verticalLayout_42);

        CheckPositionButton_8 = new QPushButton(layoutWidget_48);
        CheckPositionButton_8->setObjectName(QStringLiteral("CheckPositionButton_8"));

        verticalLayout_85->addWidget(CheckPositionButton_8);

        tabWidget_2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        layoutWidget_22 = new QWidget(tab_11);
        layoutWidget_22->setObjectName(QStringLiteral("layoutWidget_22"));
        layoutWidget_22->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_67 = new QVBoxLayout(layoutWidget_22);
        verticalLayout_67->setSpacing(6);
        verticalLayout_67->setContentsMargins(11, 11, 11, 11);
        verticalLayout_67->setObjectName(QStringLiteral("verticalLayout_67"));
        verticalLayout_67->setContentsMargins(0, 0, 0, 0);
        label_249 = new QLabel(layoutWidget_22);
        label_249->setObjectName(QStringLiteral("label_249"));

        verticalLayout_67->addWidget(label_249);

        LineEditMoveToValue_9 = new QLineEdit(layoutWidget_22);
        LineEditMoveToValue_9->setObjectName(QStringLiteral("LineEditMoveToValue_9"));

        verticalLayout_67->addWidget(LineEditMoveToValue_9);

        MoveTo_9 = new QPushButton(layoutWidget_22);
        MoveTo_9->setObjectName(QStringLiteral("MoveTo_9"));

        verticalLayout_67->addWidget(MoveTo_9);

        Homing_9 = new QPushButton(layoutWidget_22);
        Homing_9->setObjectName(QStringLiteral("Homing_9"));

        verticalLayout_67->addWidget(Homing_9);

        layoutWidget_24 = new QWidget(tab_11);
        layoutWidget_24->setObjectName(QStringLiteral("layoutWidget_24"));
        layoutWidget_24->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_68 = new QVBoxLayout(layoutWidget_24);
        verticalLayout_68->setSpacing(6);
        verticalLayout_68->setContentsMargins(11, 11, 11, 11);
        verticalLayout_68->setObjectName(QStringLiteral("verticalLayout_68"));
        verticalLayout_68->setContentsMargins(0, 0, 0, 0);
        label_252 = new QLabel(layoutWidget_24);
        label_252->setObjectName(QStringLiteral("label_252"));
        label_252->setFont(font5);

        verticalLayout_68->addWidget(label_252);

        label_253 = new QLabel(layoutWidget_24);
        label_253->setObjectName(QStringLiteral("label_253"));

        verticalLayout_68->addWidget(label_253);

        LabelMovAnalogInput0_9 = new QLabel(layoutWidget_24);
        LabelMovAnalogInput0_9->setObjectName(QStringLiteral("LabelMovAnalogInput0_9"));

        verticalLayout_68->addWidget(LabelMovAnalogInput0_9);

        label_254 = new QLabel(layoutWidget_24);
        label_254->setObjectName(QStringLiteral("label_254"));

        verticalLayout_68->addWidget(label_254);

        LabelMovCurrentPosition_9 = new QLabel(layoutWidget_24);
        LabelMovCurrentPosition_9->setObjectName(QStringLiteral("LabelMovCurrentPosition_9"));

        verticalLayout_68->addWidget(LabelMovCurrentPosition_9);

        GetParameterMov_9 = new QPushButton(layoutWidget_24);
        GetParameterMov_9->setObjectName(QStringLiteral("GetParameterMov_9"));

        verticalLayout_68->addWidget(GetParameterMov_9);

        layoutWidget_23 = new QWidget(tab_11);
        layoutWidget_23->setObjectName(QStringLiteral("layoutWidget_23"));
        layoutWidget_23->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_42 = new QGridLayout(layoutWidget_23);
        gridLayout_42->setSpacing(6);
        gridLayout_42->setContentsMargins(11, 11, 11, 11);
        gridLayout_42->setObjectName(QStringLiteral("gridLayout_42"));
        gridLayout_42->setContentsMargins(0, 0, 0, 0);
        label_143 = new QLabel(layoutWidget_23);
        label_143->setObjectName(QStringLiteral("label_143"));
        label_143->setFont(font5);

        gridLayout_42->addWidget(label_143, 0, 0, 1, 3);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        Images_9 = new QLabel(layoutWidget_23);
        Images_9->setObjectName(QStringLiteral("Images_9"));
        Images_9->setMinimumSize(QSize(0, 100));
        Images_9->setMaximumSize(QSize(200, 150));
        Images_9->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_9->setScaledContents(true);

        verticalLayout_20->addWidget(Images_9);

        label_144 = new QLabel(layoutWidget_23);
        label_144->setObjectName(QStringLiteral("label_144"));

        verticalLayout_20->addWidget(label_144);


        gridLayout_42->addLayout(verticalLayout_20, 1, 0, 1, 1);

        label_365 = new QLabel(layoutWidget_23);
        label_365->setObjectName(QStringLiteral("label_365"));
        label_365->setMinimumSize(QSize(25, 0));

        gridLayout_42->addWidget(label_365, 1, 1, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        label_145 = new QLabel(layoutWidget_23);
        label_145->setObjectName(QStringLiteral("label_145"));

        gridLayout_20->addWidget(label_145, 0, 0, 1, 1);

        label_146 = new QLabel(layoutWidget_23);
        label_146->setObjectName(QStringLiteral("label_146"));

        gridLayout_20->addWidget(label_146, 0, 1, 1, 1);

        label_147 = new QLabel(layoutWidget_23);
        label_147->setObjectName(QStringLiteral("label_147"));

        gridLayout_20->addWidget(label_147, 1, 0, 1, 1);

        label_148 = new QLabel(layoutWidget_23);
        label_148->setObjectName(QStringLiteral("label_148"));

        gridLayout_20->addWidget(label_148, 1, 1, 1, 1);

        LabelMaxVelSetup_9 = new QLabel(layoutWidget_23);
        LabelMaxVelSetup_9->setObjectName(QStringLiteral("LabelMaxVelSetup_9"));

        gridLayout_20->addWidget(LabelMaxVelSetup_9, 2, 0, 1, 1);

        LineEditMaxVelSetup_9 = new QLineEdit(layoutWidget_23);
        LineEditMaxVelSetup_9->setObjectName(QStringLiteral("LineEditMaxVelSetup_9"));

        gridLayout_20->addWidget(LineEditMaxVelSetup_9, 2, 1, 1, 1);

        label_149 = new QLabel(layoutWidget_23);
        label_149->setObjectName(QStringLiteral("label_149"));

        gridLayout_20->addWidget(label_149, 3, 0, 1, 1);

        label_150 = new QLabel(layoutWidget_23);
        label_150->setObjectName(QStringLiteral("label_150"));

        gridLayout_20->addWidget(label_150, 3, 1, 1, 1);

        LabelAccelerationSetup_9 = new QLabel(layoutWidget_23);
        LabelAccelerationSetup_9->setObjectName(QStringLiteral("LabelAccelerationSetup_9"));

        gridLayout_20->addWidget(LabelAccelerationSetup_9, 4, 0, 1, 1);

        LineEditAccelerationSetup_9 = new QLineEdit(layoutWidget_23);
        LineEditAccelerationSetup_9->setObjectName(QStringLiteral("LineEditAccelerationSetup_9"));

        gridLayout_20->addWidget(LineEditAccelerationSetup_9, 4, 1, 1, 1);

        label_151 = new QLabel(layoutWidget_23);
        label_151->setObjectName(QStringLiteral("label_151"));

        gridLayout_20->addWidget(label_151, 5, 0, 1, 1);

        label_152 = new QLabel(layoutWidget_23);
        label_152->setObjectName(QStringLiteral("label_152"));

        gridLayout_20->addWidget(label_152, 5, 1, 1, 1);

        LabelDecelerationSetup_9 = new QLabel(layoutWidget_23);
        LabelDecelerationSetup_9->setObjectName(QStringLiteral("LabelDecelerationSetup_9"));

        gridLayout_20->addWidget(LabelDecelerationSetup_9, 6, 0, 1, 1);

        LineEditDecelerationSetup_9 = new QLineEdit(layoutWidget_23);
        LineEditDecelerationSetup_9->setObjectName(QStringLiteral("LineEditDecelerationSetup_9"));

        gridLayout_20->addWidget(LineEditDecelerationSetup_9, 6, 1, 1, 1);

        label_153 = new QLabel(layoutWidget_23);
        label_153->setObjectName(QStringLiteral("label_153"));

        gridLayout_20->addWidget(label_153, 7, 0, 1, 1);

        label_154 = new QLabel(layoutWidget_23);
        label_154->setObjectName(QStringLiteral("label_154"));

        gridLayout_20->addWidget(label_154, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_9 = new QLabel(layoutWidget_23);
        LabelPhaseCurrentSetup_9->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_9"));

        gridLayout_20->addWidget(LabelPhaseCurrentSetup_9, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_9 = new QLineEdit(layoutWidget_23);
        LineEditPhaseCurrentSetup_9->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_9"));

        gridLayout_20->addWidget(LineEditPhaseCurrentSetup_9, 8, 1, 1, 1);

        label_155 = new QLabel(layoutWidget_23);
        label_155->setObjectName(QStringLiteral("label_155"));

        gridLayout_20->addWidget(label_155, 9, 0, 1, 1);

        label_156 = new QLabel(layoutWidget_23);
        label_156->setObjectName(QStringLiteral("label_156"));

        gridLayout_20->addWidget(label_156, 9, 1, 1, 1);

        LabelAnalogOutputSetup_9 = new QLabel(layoutWidget_23);
        LabelAnalogOutputSetup_9->setObjectName(QStringLiteral("LabelAnalogOutputSetup_9"));

        gridLayout_20->addWidget(LabelAnalogOutputSetup_9, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_9 = new QLineEdit(layoutWidget_23);
        LineEditAnalogOutputSetup_9->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_9"));

        gridLayout_20->addWidget(LineEditAnalogOutputSetup_9, 10, 1, 1, 1);

        label_366 = new QLabel(layoutWidget_23);
        label_366->setObjectName(QStringLiteral("label_366"));

        gridLayout_20->addWidget(label_366, 11, 0, 1, 1);

        label_367 = new QLabel(layoutWidget_23);
        label_367->setObjectName(QStringLiteral("label_367"));

        gridLayout_20->addWidget(label_367, 11, 1, 1, 1);

        LabelVelHomeSetup_9 = new QLabel(layoutWidget_23);
        LabelVelHomeSetup_9->setObjectName(QStringLiteral("LabelVelHomeSetup_9"));

        gridLayout_20->addWidget(LabelVelHomeSetup_9, 12, 0, 1, 1);

        LineEditVelHomeSetup_9 = new QLineEdit(layoutWidget_23);
        LineEditVelHomeSetup_9->setObjectName(QStringLiteral("LineEditVelHomeSetup_9"));

        gridLayout_20->addWidget(LineEditVelHomeSetup_9, 12, 1, 1, 1);

        GetParameterDriver_9 = new QPushButton(layoutWidget_23);
        GetParameterDriver_9->setObjectName(QStringLiteral("GetParameterDriver_9"));

        gridLayout_20->addWidget(GetParameterDriver_9, 13, 0, 1, 1);

        SetParameterDriver_9 = new QPushButton(layoutWidget_23);
        SetParameterDriver_9->setObjectName(QStringLiteral("SetParameterDriver_9"));

        gridLayout_20->addWidget(SetParameterDriver_9, 13, 1, 1, 1);


        gridLayout_42->addLayout(gridLayout_20, 1, 2, 1, 1);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        label_157 = new QLabel(layoutWidget_23);
        label_157->setObjectName(QStringLiteral("label_157"));
        label_157->setFont(font6);

        verticalLayout_21->addWidget(label_157);

        LabelStatusDriver9 = new QLabel(layoutWidget_23);
        LabelStatusDriver9->setObjectName(QStringLiteral("LabelStatusDriver9"));
        LabelStatusDriver9->setFont(font6);

        verticalLayout_21->addWidget(LabelStatusDriver9);


        gridLayout_42->addLayout(verticalLayout_21, 2, 0, 1, 3);

        layoutWidget_49 = new QWidget(tab_11);
        layoutWidget_49->setObjectName(QStringLiteral("layoutWidget_49"));
        layoutWidget_49->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_86 = new QVBoxLayout(layoutWidget_49);
        verticalLayout_86->setSpacing(6);
        verticalLayout_86->setContentsMargins(11, 11, 11, 11);
        verticalLayout_86->setObjectName(QStringLiteral("verticalLayout_86"));
        verticalLayout_86->setContentsMargins(0, 0, 0, 0);
        verticalLayout_43 = new QVBoxLayout();
        verticalLayout_43->setSpacing(6);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        label_318 = new QLabel(layoutWidget_49);
        label_318->setObjectName(QStringLiteral("label_318"));
        label_318->setFont(font6);

        verticalLayout_43->addWidget(label_318);

        LabelPositionStatus_9 = new QTextEdit(layoutWidget_49);
        LabelPositionStatus_9->setObjectName(QStringLiteral("LabelPositionStatus_9"));
        LabelPositionStatus_9->setMaximumSize(QSize(151, 51));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_9->setPalette(palette18);
        LabelPositionStatus_9->setFont(font4);
        LabelPositionStatus_9->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_9->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_43->addWidget(LabelPositionStatus_9);


        verticalLayout_86->addLayout(verticalLayout_43);

        CheckPositionButton_9 = new QPushButton(layoutWidget_49);
        CheckPositionButton_9->setObjectName(QStringLiteral("CheckPositionButton_9"));

        verticalLayout_86->addWidget(CheckPositionButton_9);

        tabWidget_2->addTab(tab_11, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        layoutWidget_25 = new QWidget(tab_12);
        layoutWidget_25->setObjectName(QStringLiteral("layoutWidget_25"));
        layoutWidget_25->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_69 = new QVBoxLayout(layoutWidget_25);
        verticalLayout_69->setSpacing(6);
        verticalLayout_69->setContentsMargins(11, 11, 11, 11);
        verticalLayout_69->setObjectName(QStringLiteral("verticalLayout_69"));
        verticalLayout_69->setContentsMargins(0, 0, 0, 0);
        label_255 = new QLabel(layoutWidget_25);
        label_255->setObjectName(QStringLiteral("label_255"));

        verticalLayout_69->addWidget(label_255);

        LineEditMoveToValue_10 = new QLineEdit(layoutWidget_25);
        LineEditMoveToValue_10->setObjectName(QStringLiteral("LineEditMoveToValue_10"));

        verticalLayout_69->addWidget(LineEditMoveToValue_10);

        MoveTo_10 = new QPushButton(layoutWidget_25);
        MoveTo_10->setObjectName(QStringLiteral("MoveTo_10"));

        verticalLayout_69->addWidget(MoveTo_10);

        Homing_10 = new QPushButton(layoutWidget_25);
        Homing_10->setObjectName(QStringLiteral("Homing_10"));

        verticalLayout_69->addWidget(Homing_10);

        layoutWidget_27 = new QWidget(tab_12);
        layoutWidget_27->setObjectName(QStringLiteral("layoutWidget_27"));
        layoutWidget_27->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_70 = new QVBoxLayout(layoutWidget_27);
        verticalLayout_70->setSpacing(6);
        verticalLayout_70->setContentsMargins(11, 11, 11, 11);
        verticalLayout_70->setObjectName(QStringLiteral("verticalLayout_70"));
        verticalLayout_70->setContentsMargins(0, 0, 0, 0);
        label_258 = new QLabel(layoutWidget_27);
        label_258->setObjectName(QStringLiteral("label_258"));
        label_258->setFont(font5);

        verticalLayout_70->addWidget(label_258);

        label_259 = new QLabel(layoutWidget_27);
        label_259->setObjectName(QStringLiteral("label_259"));

        verticalLayout_70->addWidget(label_259);

        LabelMovAnalogInput0_10 = new QLabel(layoutWidget_27);
        LabelMovAnalogInput0_10->setObjectName(QStringLiteral("LabelMovAnalogInput0_10"));

        verticalLayout_70->addWidget(LabelMovAnalogInput0_10);

        label_260 = new QLabel(layoutWidget_27);
        label_260->setObjectName(QStringLiteral("label_260"));

        verticalLayout_70->addWidget(label_260);

        LabelMovCurrentPosition_10 = new QLabel(layoutWidget_27);
        LabelMovCurrentPosition_10->setObjectName(QStringLiteral("LabelMovCurrentPosition_10"));

        verticalLayout_70->addWidget(LabelMovCurrentPosition_10);

        GetParameterMov_10 = new QPushButton(layoutWidget_27);
        GetParameterMov_10->setObjectName(QStringLiteral("GetParameterMov_10"));

        verticalLayout_70->addWidget(GetParameterMov_10);

        layoutWidget_26 = new QWidget(tab_12);
        layoutWidget_26->setObjectName(QStringLiteral("layoutWidget_26"));
        layoutWidget_26->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_43 = new QGridLayout(layoutWidget_26);
        gridLayout_43->setSpacing(6);
        gridLayout_43->setContentsMargins(11, 11, 11, 11);
        gridLayout_43->setObjectName(QStringLiteral("gridLayout_43"));
        gridLayout_43->setContentsMargins(0, 0, 0, 0);
        label_158 = new QLabel(layoutWidget_26);
        label_158->setObjectName(QStringLiteral("label_158"));
        label_158->setFont(font5);

        gridLayout_43->addWidget(label_158, 0, 0, 1, 3);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        Images_10 = new QLabel(layoutWidget_26);
        Images_10->setObjectName(QStringLiteral("Images_10"));
        Images_10->setMinimumSize(QSize(0, 100));
        Images_10->setMaximumSize(QSize(200, 150));
        Images_10->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_10->setScaledContents(true);

        verticalLayout_22->addWidget(Images_10);

        label_159 = new QLabel(layoutWidget_26);
        label_159->setObjectName(QStringLiteral("label_159"));

        verticalLayout_22->addWidget(label_159);


        gridLayout_43->addLayout(verticalLayout_22, 1, 0, 1, 1);

        label_368 = new QLabel(layoutWidget_26);
        label_368->setObjectName(QStringLiteral("label_368"));
        label_368->setMinimumSize(QSize(25, 0));

        gridLayout_43->addWidget(label_368, 1, 1, 1, 1);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setSpacing(6);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        label_160 = new QLabel(layoutWidget_26);
        label_160->setObjectName(QStringLiteral("label_160"));

        gridLayout_21->addWidget(label_160, 0, 0, 1, 1);

        label_161 = new QLabel(layoutWidget_26);
        label_161->setObjectName(QStringLiteral("label_161"));

        gridLayout_21->addWidget(label_161, 0, 1, 1, 1);

        label_162 = new QLabel(layoutWidget_26);
        label_162->setObjectName(QStringLiteral("label_162"));

        gridLayout_21->addWidget(label_162, 1, 0, 1, 1);

        label_163 = new QLabel(layoutWidget_26);
        label_163->setObjectName(QStringLiteral("label_163"));

        gridLayout_21->addWidget(label_163, 1, 1, 1, 1);

        LabelMaxVelSetup_10 = new QLabel(layoutWidget_26);
        LabelMaxVelSetup_10->setObjectName(QStringLiteral("LabelMaxVelSetup_10"));

        gridLayout_21->addWidget(LabelMaxVelSetup_10, 2, 0, 1, 1);

        LineEditMaxVelSetup_10 = new QLineEdit(layoutWidget_26);
        LineEditMaxVelSetup_10->setObjectName(QStringLiteral("LineEditMaxVelSetup_10"));

        gridLayout_21->addWidget(LineEditMaxVelSetup_10, 2, 1, 1, 1);

        label_164 = new QLabel(layoutWidget_26);
        label_164->setObjectName(QStringLiteral("label_164"));

        gridLayout_21->addWidget(label_164, 3, 0, 1, 1);

        label_165 = new QLabel(layoutWidget_26);
        label_165->setObjectName(QStringLiteral("label_165"));

        gridLayout_21->addWidget(label_165, 3, 1, 1, 1);

        LabelAccelerationSetup_10 = new QLabel(layoutWidget_26);
        LabelAccelerationSetup_10->setObjectName(QStringLiteral("LabelAccelerationSetup_10"));

        gridLayout_21->addWidget(LabelAccelerationSetup_10, 4, 0, 1, 1);

        LineEditAccelerationSetup_10 = new QLineEdit(layoutWidget_26);
        LineEditAccelerationSetup_10->setObjectName(QStringLiteral("LineEditAccelerationSetup_10"));

        gridLayout_21->addWidget(LineEditAccelerationSetup_10, 4, 1, 1, 1);

        label_166 = new QLabel(layoutWidget_26);
        label_166->setObjectName(QStringLiteral("label_166"));

        gridLayout_21->addWidget(label_166, 5, 0, 1, 1);

        label_167 = new QLabel(layoutWidget_26);
        label_167->setObjectName(QStringLiteral("label_167"));

        gridLayout_21->addWidget(label_167, 5, 1, 1, 1);

        LabelDecelerationSetup_10 = new QLabel(layoutWidget_26);
        LabelDecelerationSetup_10->setObjectName(QStringLiteral("LabelDecelerationSetup_10"));

        gridLayout_21->addWidget(LabelDecelerationSetup_10, 6, 0, 1, 1);

        LineEditDecelerationSetup_10 = new QLineEdit(layoutWidget_26);
        LineEditDecelerationSetup_10->setObjectName(QStringLiteral("LineEditDecelerationSetup_10"));

        gridLayout_21->addWidget(LineEditDecelerationSetup_10, 6, 1, 1, 1);

        label_168 = new QLabel(layoutWidget_26);
        label_168->setObjectName(QStringLiteral("label_168"));

        gridLayout_21->addWidget(label_168, 7, 0, 1, 1);

        label_169 = new QLabel(layoutWidget_26);
        label_169->setObjectName(QStringLiteral("label_169"));

        gridLayout_21->addWidget(label_169, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_10 = new QLabel(layoutWidget_26);
        LabelPhaseCurrentSetup_10->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_10"));

        gridLayout_21->addWidget(LabelPhaseCurrentSetup_10, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_10 = new QLineEdit(layoutWidget_26);
        LineEditPhaseCurrentSetup_10->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_10"));

        gridLayout_21->addWidget(LineEditPhaseCurrentSetup_10, 8, 1, 1, 1);

        label_170 = new QLabel(layoutWidget_26);
        label_170->setObjectName(QStringLiteral("label_170"));

        gridLayout_21->addWidget(label_170, 9, 0, 1, 1);

        label_171 = new QLabel(layoutWidget_26);
        label_171->setObjectName(QStringLiteral("label_171"));

        gridLayout_21->addWidget(label_171, 9, 1, 1, 1);

        LabelAnalogOutputSetup_10 = new QLabel(layoutWidget_26);
        LabelAnalogOutputSetup_10->setObjectName(QStringLiteral("LabelAnalogOutputSetup_10"));

        gridLayout_21->addWidget(LabelAnalogOutputSetup_10, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_10 = new QLineEdit(layoutWidget_26);
        LineEditAnalogOutputSetup_10->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_10"));

        gridLayout_21->addWidget(LineEditAnalogOutputSetup_10, 10, 1, 1, 1);

        label_369 = new QLabel(layoutWidget_26);
        label_369->setObjectName(QStringLiteral("label_369"));

        gridLayout_21->addWidget(label_369, 11, 0, 1, 1);

        label_370 = new QLabel(layoutWidget_26);
        label_370->setObjectName(QStringLiteral("label_370"));

        gridLayout_21->addWidget(label_370, 11, 1, 1, 1);

        LabelVelHomeSetup_10 = new QLabel(layoutWidget_26);
        LabelVelHomeSetup_10->setObjectName(QStringLiteral("LabelVelHomeSetup_10"));

        gridLayout_21->addWidget(LabelVelHomeSetup_10, 12, 0, 1, 1);

        LineEditVelHomeSetup_10 = new QLineEdit(layoutWidget_26);
        LineEditVelHomeSetup_10->setObjectName(QStringLiteral("LineEditVelHomeSetup_10"));

        gridLayout_21->addWidget(LineEditVelHomeSetup_10, 12, 1, 1, 1);

        GetParameterDriver_10 = new QPushButton(layoutWidget_26);
        GetParameterDriver_10->setObjectName(QStringLiteral("GetParameterDriver_10"));

        gridLayout_21->addWidget(GetParameterDriver_10, 13, 0, 1, 1);

        SetParameterDriver_10 = new QPushButton(layoutWidget_26);
        SetParameterDriver_10->setObjectName(QStringLiteral("SetParameterDriver_10"));

        gridLayout_21->addWidget(SetParameterDriver_10, 13, 1, 1, 1);


        gridLayout_43->addLayout(gridLayout_21, 1, 2, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        label_172 = new QLabel(layoutWidget_26);
        label_172->setObjectName(QStringLiteral("label_172"));
        label_172->setFont(font6);

        verticalLayout_23->addWidget(label_172);

        LabelStatusDriver10 = new QLabel(layoutWidget_26);
        LabelStatusDriver10->setObjectName(QStringLiteral("LabelStatusDriver10"));
        LabelStatusDriver10->setFont(font6);

        verticalLayout_23->addWidget(LabelStatusDriver10);


        gridLayout_43->addLayout(verticalLayout_23, 2, 0, 1, 3);

        layoutWidget_50 = new QWidget(tab_12);
        layoutWidget_50->setObjectName(QStringLiteral("layoutWidget_50"));
        layoutWidget_50->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_87 = new QVBoxLayout(layoutWidget_50);
        verticalLayout_87->setSpacing(6);
        verticalLayout_87->setContentsMargins(11, 11, 11, 11);
        verticalLayout_87->setObjectName(QStringLiteral("verticalLayout_87"));
        verticalLayout_87->setContentsMargins(0, 0, 0, 0);
        verticalLayout_44 = new QVBoxLayout();
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        label_319 = new QLabel(layoutWidget_50);
        label_319->setObjectName(QStringLiteral("label_319"));
        label_319->setFont(font6);

        verticalLayout_44->addWidget(label_319);

        LabelPositionStatus_10 = new QTextEdit(layoutWidget_50);
        LabelPositionStatus_10->setObjectName(QStringLiteral("LabelPositionStatus_10"));
        LabelPositionStatus_10->setMaximumSize(QSize(151, 51));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_10->setPalette(palette19);
        LabelPositionStatus_10->setFont(font4);
        LabelPositionStatus_10->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_10->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_44->addWidget(LabelPositionStatus_10);


        verticalLayout_87->addLayout(verticalLayout_44);

        CheckPositionButton_10 = new QPushButton(layoutWidget_50);
        CheckPositionButton_10->setObjectName(QStringLiteral("CheckPositionButton_10"));

        verticalLayout_87->addWidget(CheckPositionButton_10);

        tabWidget_2->addTab(tab_12, QString());
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        layoutWidget_28 = new QWidget(tab_13);
        layoutWidget_28->setObjectName(QStringLiteral("layoutWidget_28"));
        layoutWidget_28->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_71 = new QVBoxLayout(layoutWidget_28);
        verticalLayout_71->setSpacing(6);
        verticalLayout_71->setContentsMargins(11, 11, 11, 11);
        verticalLayout_71->setObjectName(QStringLiteral("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 0, 0, 0);
        label_261 = new QLabel(layoutWidget_28);
        label_261->setObjectName(QStringLiteral("label_261"));

        verticalLayout_71->addWidget(label_261);

        LineEditMoveToValue_11 = new QLineEdit(layoutWidget_28);
        LineEditMoveToValue_11->setObjectName(QStringLiteral("LineEditMoveToValue_11"));

        verticalLayout_71->addWidget(LineEditMoveToValue_11);

        MoveTo_11 = new QPushButton(layoutWidget_28);
        MoveTo_11->setObjectName(QStringLiteral("MoveTo_11"));

        verticalLayout_71->addWidget(MoveTo_11);

        Homing_11 = new QPushButton(layoutWidget_28);
        Homing_11->setObjectName(QStringLiteral("Homing_11"));

        verticalLayout_71->addWidget(Homing_11);

        layoutWidget_30 = new QWidget(tab_13);
        layoutWidget_30->setObjectName(QStringLiteral("layoutWidget_30"));
        layoutWidget_30->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_72 = new QVBoxLayout(layoutWidget_30);
        verticalLayout_72->setSpacing(6);
        verticalLayout_72->setContentsMargins(11, 11, 11, 11);
        verticalLayout_72->setObjectName(QStringLiteral("verticalLayout_72"));
        verticalLayout_72->setContentsMargins(0, 0, 0, 0);
        label_264 = new QLabel(layoutWidget_30);
        label_264->setObjectName(QStringLiteral("label_264"));
        label_264->setFont(font5);

        verticalLayout_72->addWidget(label_264);

        label_265 = new QLabel(layoutWidget_30);
        label_265->setObjectName(QStringLiteral("label_265"));

        verticalLayout_72->addWidget(label_265);

        LabelMovAnalogInput0_11 = new QLabel(layoutWidget_30);
        LabelMovAnalogInput0_11->setObjectName(QStringLiteral("LabelMovAnalogInput0_11"));

        verticalLayout_72->addWidget(LabelMovAnalogInput0_11);

        label_266 = new QLabel(layoutWidget_30);
        label_266->setObjectName(QStringLiteral("label_266"));

        verticalLayout_72->addWidget(label_266);

        LabelMovCurrentPosition_11 = new QLabel(layoutWidget_30);
        LabelMovCurrentPosition_11->setObjectName(QStringLiteral("LabelMovCurrentPosition_11"));

        verticalLayout_72->addWidget(LabelMovCurrentPosition_11);

        GetParameterMov_11 = new QPushButton(layoutWidget_30);
        GetParameterMov_11->setObjectName(QStringLiteral("GetParameterMov_11"));

        verticalLayout_72->addWidget(GetParameterMov_11);

        layoutWidget_29 = new QWidget(tab_13);
        layoutWidget_29->setObjectName(QStringLiteral("layoutWidget_29"));
        layoutWidget_29->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_44 = new QGridLayout(layoutWidget_29);
        gridLayout_44->setSpacing(6);
        gridLayout_44->setContentsMargins(11, 11, 11, 11);
        gridLayout_44->setObjectName(QStringLiteral("gridLayout_44"));
        gridLayout_44->setContentsMargins(0, 0, 0, 0);
        label_173 = new QLabel(layoutWidget_29);
        label_173->setObjectName(QStringLiteral("label_173"));
        label_173->setFont(font5);

        gridLayout_44->addWidget(label_173, 0, 0, 1, 3);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        Images_11 = new QLabel(layoutWidget_29);
        Images_11->setObjectName(QStringLiteral("Images_11"));
        Images_11->setMinimumSize(QSize(0, 100));
        Images_11->setMaximumSize(QSize(200, 150));
        Images_11->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_11->setScaledContents(true);

        verticalLayout_24->addWidget(Images_11);

        label_174 = new QLabel(layoutWidget_29);
        label_174->setObjectName(QStringLiteral("label_174"));

        verticalLayout_24->addWidget(label_174);


        gridLayout_44->addLayout(verticalLayout_24, 1, 0, 1, 1);

        label_371 = new QLabel(layoutWidget_29);
        label_371->setObjectName(QStringLiteral("label_371"));
        label_371->setMinimumSize(QSize(25, 0));

        gridLayout_44->addWidget(label_371, 1, 1, 1, 1);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(6);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        label_175 = new QLabel(layoutWidget_29);
        label_175->setObjectName(QStringLiteral("label_175"));

        gridLayout_22->addWidget(label_175, 0, 0, 1, 1);

        label_176 = new QLabel(layoutWidget_29);
        label_176->setObjectName(QStringLiteral("label_176"));

        gridLayout_22->addWidget(label_176, 0, 1, 1, 1);

        label_177 = new QLabel(layoutWidget_29);
        label_177->setObjectName(QStringLiteral("label_177"));

        gridLayout_22->addWidget(label_177, 1, 0, 1, 1);

        label_178 = new QLabel(layoutWidget_29);
        label_178->setObjectName(QStringLiteral("label_178"));

        gridLayout_22->addWidget(label_178, 1, 1, 1, 1);

        LabelMaxVelSetup_11 = new QLabel(layoutWidget_29);
        LabelMaxVelSetup_11->setObjectName(QStringLiteral("LabelMaxVelSetup_11"));

        gridLayout_22->addWidget(LabelMaxVelSetup_11, 2, 0, 1, 1);

        LineEditMaxVelSetup_11 = new QLineEdit(layoutWidget_29);
        LineEditMaxVelSetup_11->setObjectName(QStringLiteral("LineEditMaxVelSetup_11"));

        gridLayout_22->addWidget(LineEditMaxVelSetup_11, 2, 1, 1, 1);

        label_179 = new QLabel(layoutWidget_29);
        label_179->setObjectName(QStringLiteral("label_179"));

        gridLayout_22->addWidget(label_179, 3, 0, 1, 1);

        label_180 = new QLabel(layoutWidget_29);
        label_180->setObjectName(QStringLiteral("label_180"));

        gridLayout_22->addWidget(label_180, 3, 1, 1, 1);

        LabelAccelerationSetup_11 = new QLabel(layoutWidget_29);
        LabelAccelerationSetup_11->setObjectName(QStringLiteral("LabelAccelerationSetup_11"));

        gridLayout_22->addWidget(LabelAccelerationSetup_11, 4, 0, 1, 1);

        LineEditAccelerationSetup_11 = new QLineEdit(layoutWidget_29);
        LineEditAccelerationSetup_11->setObjectName(QStringLiteral("LineEditAccelerationSetup_11"));

        gridLayout_22->addWidget(LineEditAccelerationSetup_11, 4, 1, 1, 1);

        label_181 = new QLabel(layoutWidget_29);
        label_181->setObjectName(QStringLiteral("label_181"));

        gridLayout_22->addWidget(label_181, 5, 0, 1, 1);

        label_182 = new QLabel(layoutWidget_29);
        label_182->setObjectName(QStringLiteral("label_182"));

        gridLayout_22->addWidget(label_182, 5, 1, 1, 1);

        LabelDecelerationSetup_11 = new QLabel(layoutWidget_29);
        LabelDecelerationSetup_11->setObjectName(QStringLiteral("LabelDecelerationSetup_11"));

        gridLayout_22->addWidget(LabelDecelerationSetup_11, 6, 0, 1, 1);

        LineEditDecelerationSetup_11 = new QLineEdit(layoutWidget_29);
        LineEditDecelerationSetup_11->setObjectName(QStringLiteral("LineEditDecelerationSetup_11"));

        gridLayout_22->addWidget(LineEditDecelerationSetup_11, 6, 1, 1, 1);

        label_183 = new QLabel(layoutWidget_29);
        label_183->setObjectName(QStringLiteral("label_183"));

        gridLayout_22->addWidget(label_183, 7, 0, 1, 1);

        label_184 = new QLabel(layoutWidget_29);
        label_184->setObjectName(QStringLiteral("label_184"));

        gridLayout_22->addWidget(label_184, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_11 = new QLabel(layoutWidget_29);
        LabelPhaseCurrentSetup_11->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_11"));

        gridLayout_22->addWidget(LabelPhaseCurrentSetup_11, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_11 = new QLineEdit(layoutWidget_29);
        LineEditPhaseCurrentSetup_11->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_11"));

        gridLayout_22->addWidget(LineEditPhaseCurrentSetup_11, 8, 1, 1, 1);

        label_185 = new QLabel(layoutWidget_29);
        label_185->setObjectName(QStringLiteral("label_185"));

        gridLayout_22->addWidget(label_185, 9, 0, 1, 1);

        label_186 = new QLabel(layoutWidget_29);
        label_186->setObjectName(QStringLiteral("label_186"));

        gridLayout_22->addWidget(label_186, 9, 1, 1, 1);

        LabelAnalogOutputSetup_11 = new QLabel(layoutWidget_29);
        LabelAnalogOutputSetup_11->setObjectName(QStringLiteral("LabelAnalogOutputSetup_11"));

        gridLayout_22->addWidget(LabelAnalogOutputSetup_11, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_11 = new QLineEdit(layoutWidget_29);
        LineEditAnalogOutputSetup_11->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_11"));

        gridLayout_22->addWidget(LineEditAnalogOutputSetup_11, 10, 1, 1, 1);

        label_372 = new QLabel(layoutWidget_29);
        label_372->setObjectName(QStringLiteral("label_372"));

        gridLayout_22->addWidget(label_372, 11, 0, 1, 1);

        label_373 = new QLabel(layoutWidget_29);
        label_373->setObjectName(QStringLiteral("label_373"));

        gridLayout_22->addWidget(label_373, 11, 1, 1, 1);

        LabelVelHomeSetup_11 = new QLabel(layoutWidget_29);
        LabelVelHomeSetup_11->setObjectName(QStringLiteral("LabelVelHomeSetup_11"));

        gridLayout_22->addWidget(LabelVelHomeSetup_11, 12, 0, 1, 1);

        LineEditVelHomeSetup_11 = new QLineEdit(layoutWidget_29);
        LineEditVelHomeSetup_11->setObjectName(QStringLiteral("LineEditVelHomeSetup_11"));

        gridLayout_22->addWidget(LineEditVelHomeSetup_11, 12, 1, 1, 1);

        GetParameterDriver_11 = new QPushButton(layoutWidget_29);
        GetParameterDriver_11->setObjectName(QStringLiteral("GetParameterDriver_11"));

        gridLayout_22->addWidget(GetParameterDriver_11, 13, 0, 1, 1);

        SetParameterDriver_11 = new QPushButton(layoutWidget_29);
        SetParameterDriver_11->setObjectName(QStringLiteral("SetParameterDriver_11"));

        gridLayout_22->addWidget(SetParameterDriver_11, 13, 1, 1, 1);


        gridLayout_44->addLayout(gridLayout_22, 1, 2, 1, 1);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        label_187 = new QLabel(layoutWidget_29);
        label_187->setObjectName(QStringLiteral("label_187"));
        label_187->setFont(font6);

        verticalLayout_25->addWidget(label_187);

        LabelStatusDriver11 = new QLabel(layoutWidget_29);
        LabelStatusDriver11->setObjectName(QStringLiteral("LabelStatusDriver11"));
        LabelStatusDriver11->setFont(font6);

        verticalLayout_25->addWidget(LabelStatusDriver11);


        gridLayout_44->addLayout(verticalLayout_25, 2, 0, 1, 3);

        layoutWidget_51 = new QWidget(tab_13);
        layoutWidget_51->setObjectName(QStringLiteral("layoutWidget_51"));
        layoutWidget_51->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_88 = new QVBoxLayout(layoutWidget_51);
        verticalLayout_88->setSpacing(6);
        verticalLayout_88->setContentsMargins(11, 11, 11, 11);
        verticalLayout_88->setObjectName(QStringLiteral("verticalLayout_88"));
        verticalLayout_88->setContentsMargins(0, 0, 0, 0);
        verticalLayout_45 = new QVBoxLayout();
        verticalLayout_45->setSpacing(6);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        label_320 = new QLabel(layoutWidget_51);
        label_320->setObjectName(QStringLiteral("label_320"));
        label_320->setFont(font6);

        verticalLayout_45->addWidget(label_320);

        LabelPositionStatus_11 = new QTextEdit(layoutWidget_51);
        LabelPositionStatus_11->setObjectName(QStringLiteral("LabelPositionStatus_11"));
        LabelPositionStatus_11->setMaximumSize(QSize(151, 51));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_11->setPalette(palette20);
        LabelPositionStatus_11->setFont(font4);
        LabelPositionStatus_11->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_11->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_45->addWidget(LabelPositionStatus_11);


        verticalLayout_88->addLayout(verticalLayout_45);

        CheckPositionButton_11 = new QPushButton(layoutWidget_51);
        CheckPositionButton_11->setObjectName(QStringLiteral("CheckPositionButton_11"));

        verticalLayout_88->addWidget(CheckPositionButton_11);

        tabWidget_2->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        layoutWidget_31 = new QWidget(tab_14);
        layoutWidget_31->setObjectName(QStringLiteral("layoutWidget_31"));
        layoutWidget_31->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_73 = new QVBoxLayout(layoutWidget_31);
        verticalLayout_73->setSpacing(6);
        verticalLayout_73->setContentsMargins(11, 11, 11, 11);
        verticalLayout_73->setObjectName(QStringLiteral("verticalLayout_73"));
        verticalLayout_73->setContentsMargins(0, 0, 0, 0);
        label_267 = new QLabel(layoutWidget_31);
        label_267->setObjectName(QStringLiteral("label_267"));

        verticalLayout_73->addWidget(label_267);

        LineEditMoveToValue_12 = new QLineEdit(layoutWidget_31);
        LineEditMoveToValue_12->setObjectName(QStringLiteral("LineEditMoveToValue_12"));

        verticalLayout_73->addWidget(LineEditMoveToValue_12);

        MoveTo_12 = new QPushButton(layoutWidget_31);
        MoveTo_12->setObjectName(QStringLiteral("MoveTo_12"));

        verticalLayout_73->addWidget(MoveTo_12);

        Homing_12 = new QPushButton(layoutWidget_31);
        Homing_12->setObjectName(QStringLiteral("Homing_12"));

        verticalLayout_73->addWidget(Homing_12);

        layoutWidget_33 = new QWidget(tab_14);
        layoutWidget_33->setObjectName(QStringLiteral("layoutWidget_33"));
        layoutWidget_33->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_74 = new QVBoxLayout(layoutWidget_33);
        verticalLayout_74->setSpacing(6);
        verticalLayout_74->setContentsMargins(11, 11, 11, 11);
        verticalLayout_74->setObjectName(QStringLiteral("verticalLayout_74"));
        verticalLayout_74->setContentsMargins(0, 0, 0, 0);
        label_270 = new QLabel(layoutWidget_33);
        label_270->setObjectName(QStringLiteral("label_270"));
        label_270->setFont(font5);

        verticalLayout_74->addWidget(label_270);

        label_271 = new QLabel(layoutWidget_33);
        label_271->setObjectName(QStringLiteral("label_271"));

        verticalLayout_74->addWidget(label_271);

        LabelMovAnalogInput0_12 = new QLabel(layoutWidget_33);
        LabelMovAnalogInput0_12->setObjectName(QStringLiteral("LabelMovAnalogInput0_12"));

        verticalLayout_74->addWidget(LabelMovAnalogInput0_12);

        label_272 = new QLabel(layoutWidget_33);
        label_272->setObjectName(QStringLiteral("label_272"));

        verticalLayout_74->addWidget(label_272);

        LabelMovCurrentPosition_12 = new QLabel(layoutWidget_33);
        LabelMovCurrentPosition_12->setObjectName(QStringLiteral("LabelMovCurrentPosition_12"));

        verticalLayout_74->addWidget(LabelMovCurrentPosition_12);

        GetParameterMov_12 = new QPushButton(layoutWidget_33);
        GetParameterMov_12->setObjectName(QStringLiteral("GetParameterMov_12"));

        verticalLayout_74->addWidget(GetParameterMov_12);

        layoutWidget_32 = new QWidget(tab_14);
        layoutWidget_32->setObjectName(QStringLiteral("layoutWidget_32"));
        layoutWidget_32->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_45 = new QGridLayout(layoutWidget_32);
        gridLayout_45->setSpacing(6);
        gridLayout_45->setContentsMargins(11, 11, 11, 11);
        gridLayout_45->setObjectName(QStringLiteral("gridLayout_45"));
        gridLayout_45->setContentsMargins(0, 0, 0, 0);
        label_188 = new QLabel(layoutWidget_32);
        label_188->setObjectName(QStringLiteral("label_188"));
        label_188->setFont(font5);

        gridLayout_45->addWidget(label_188, 0, 0, 1, 3);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        Images_12 = new QLabel(layoutWidget_32);
        Images_12->setObjectName(QStringLiteral("Images_12"));
        Images_12->setMinimumSize(QSize(0, 100));
        Images_12->setMaximumSize(QSize(200, 150));
        Images_12->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_12->setScaledContents(true);

        verticalLayout_26->addWidget(Images_12);

        label_189 = new QLabel(layoutWidget_32);
        label_189->setObjectName(QStringLiteral("label_189"));

        verticalLayout_26->addWidget(label_189);


        gridLayout_45->addLayout(verticalLayout_26, 1, 0, 1, 1);

        label_374 = new QLabel(layoutWidget_32);
        label_374->setObjectName(QStringLiteral("label_374"));
        label_374->setMinimumSize(QSize(25, 0));

        gridLayout_45->addWidget(label_374, 1, 1, 1, 1);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setSpacing(6);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        label_190 = new QLabel(layoutWidget_32);
        label_190->setObjectName(QStringLiteral("label_190"));

        gridLayout_23->addWidget(label_190, 0, 0, 1, 1);

        label_191 = new QLabel(layoutWidget_32);
        label_191->setObjectName(QStringLiteral("label_191"));

        gridLayout_23->addWidget(label_191, 0, 1, 1, 1);

        label_192 = new QLabel(layoutWidget_32);
        label_192->setObjectName(QStringLiteral("label_192"));

        gridLayout_23->addWidget(label_192, 1, 0, 1, 1);

        label_193 = new QLabel(layoutWidget_32);
        label_193->setObjectName(QStringLiteral("label_193"));

        gridLayout_23->addWidget(label_193, 1, 1, 1, 1);

        LabelMaxVelSetup_12 = new QLabel(layoutWidget_32);
        LabelMaxVelSetup_12->setObjectName(QStringLiteral("LabelMaxVelSetup_12"));

        gridLayout_23->addWidget(LabelMaxVelSetup_12, 2, 0, 1, 1);

        LineEditMaxVelSetup_12 = new QLineEdit(layoutWidget_32);
        LineEditMaxVelSetup_12->setObjectName(QStringLiteral("LineEditMaxVelSetup_12"));

        gridLayout_23->addWidget(LineEditMaxVelSetup_12, 2, 1, 1, 1);

        label_194 = new QLabel(layoutWidget_32);
        label_194->setObjectName(QStringLiteral("label_194"));

        gridLayout_23->addWidget(label_194, 3, 0, 1, 1);

        label_195 = new QLabel(layoutWidget_32);
        label_195->setObjectName(QStringLiteral("label_195"));

        gridLayout_23->addWidget(label_195, 3, 1, 1, 1);

        LabelAccelerationSetup_12 = new QLabel(layoutWidget_32);
        LabelAccelerationSetup_12->setObjectName(QStringLiteral("LabelAccelerationSetup_12"));

        gridLayout_23->addWidget(LabelAccelerationSetup_12, 4, 0, 1, 1);

        LineEditAccelerationSetup_12 = new QLineEdit(layoutWidget_32);
        LineEditAccelerationSetup_12->setObjectName(QStringLiteral("LineEditAccelerationSetup_12"));

        gridLayout_23->addWidget(LineEditAccelerationSetup_12, 4, 1, 1, 1);

        label_196 = new QLabel(layoutWidget_32);
        label_196->setObjectName(QStringLiteral("label_196"));

        gridLayout_23->addWidget(label_196, 5, 0, 1, 1);

        label_197 = new QLabel(layoutWidget_32);
        label_197->setObjectName(QStringLiteral("label_197"));

        gridLayout_23->addWidget(label_197, 5, 1, 1, 1);

        LabelDecelerationSetup_12 = new QLabel(layoutWidget_32);
        LabelDecelerationSetup_12->setObjectName(QStringLiteral("LabelDecelerationSetup_12"));

        gridLayout_23->addWidget(LabelDecelerationSetup_12, 6, 0, 1, 1);

        LineEditDecelerationSetup_12 = new QLineEdit(layoutWidget_32);
        LineEditDecelerationSetup_12->setObjectName(QStringLiteral("LineEditDecelerationSetup_12"));

        gridLayout_23->addWidget(LineEditDecelerationSetup_12, 6, 1, 1, 1);

        label_198 = new QLabel(layoutWidget_32);
        label_198->setObjectName(QStringLiteral("label_198"));

        gridLayout_23->addWidget(label_198, 7, 0, 1, 1);

        label_199 = new QLabel(layoutWidget_32);
        label_199->setObjectName(QStringLiteral("label_199"));

        gridLayout_23->addWidget(label_199, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_12 = new QLabel(layoutWidget_32);
        LabelPhaseCurrentSetup_12->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_12"));

        gridLayout_23->addWidget(LabelPhaseCurrentSetup_12, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_12 = new QLineEdit(layoutWidget_32);
        LineEditPhaseCurrentSetup_12->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_12"));

        gridLayout_23->addWidget(LineEditPhaseCurrentSetup_12, 8, 1, 1, 1);

        label_200 = new QLabel(layoutWidget_32);
        label_200->setObjectName(QStringLiteral("label_200"));

        gridLayout_23->addWidget(label_200, 9, 0, 1, 1);

        label_201 = new QLabel(layoutWidget_32);
        label_201->setObjectName(QStringLiteral("label_201"));

        gridLayout_23->addWidget(label_201, 9, 1, 1, 1);

        LabelAnalogOutputSetup_12 = new QLabel(layoutWidget_32);
        LabelAnalogOutputSetup_12->setObjectName(QStringLiteral("LabelAnalogOutputSetup_12"));

        gridLayout_23->addWidget(LabelAnalogOutputSetup_12, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_12 = new QLineEdit(layoutWidget_32);
        LineEditAnalogOutputSetup_12->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_12"));

        gridLayout_23->addWidget(LineEditAnalogOutputSetup_12, 10, 1, 1, 1);

        label_375 = new QLabel(layoutWidget_32);
        label_375->setObjectName(QStringLiteral("label_375"));

        gridLayout_23->addWidget(label_375, 11, 0, 1, 1);

        label_376 = new QLabel(layoutWidget_32);
        label_376->setObjectName(QStringLiteral("label_376"));

        gridLayout_23->addWidget(label_376, 11, 1, 1, 1);

        LabelVelHomeSetup_12 = new QLabel(layoutWidget_32);
        LabelVelHomeSetup_12->setObjectName(QStringLiteral("LabelVelHomeSetup_12"));

        gridLayout_23->addWidget(LabelVelHomeSetup_12, 12, 0, 1, 1);

        LineEditVelHomeSetup_12 = new QLineEdit(layoutWidget_32);
        LineEditVelHomeSetup_12->setObjectName(QStringLiteral("LineEditVelHomeSetup_12"));

        gridLayout_23->addWidget(LineEditVelHomeSetup_12, 12, 1, 1, 1);

        GetParameterDriver_12 = new QPushButton(layoutWidget_32);
        GetParameterDriver_12->setObjectName(QStringLiteral("GetParameterDriver_12"));

        gridLayout_23->addWidget(GetParameterDriver_12, 13, 0, 1, 1);

        SetParameterDriver_12 = new QPushButton(layoutWidget_32);
        SetParameterDriver_12->setObjectName(QStringLiteral("SetParameterDriver_12"));

        gridLayout_23->addWidget(SetParameterDriver_12, 13, 1, 1, 1);


        gridLayout_45->addLayout(gridLayout_23, 1, 2, 1, 1);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        label_202 = new QLabel(layoutWidget_32);
        label_202->setObjectName(QStringLiteral("label_202"));
        label_202->setFont(font6);

        verticalLayout_27->addWidget(label_202);

        LabelStatusDriver12 = new QLabel(layoutWidget_32);
        LabelStatusDriver12->setObjectName(QStringLiteral("LabelStatusDriver12"));
        LabelStatusDriver12->setFont(font6);

        verticalLayout_27->addWidget(LabelStatusDriver12);


        gridLayout_45->addLayout(verticalLayout_27, 2, 0, 1, 3);

        layoutWidget_52 = new QWidget(tab_14);
        layoutWidget_52->setObjectName(QStringLiteral("layoutWidget_52"));
        layoutWidget_52->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_89 = new QVBoxLayout(layoutWidget_52);
        verticalLayout_89->setSpacing(6);
        verticalLayout_89->setContentsMargins(11, 11, 11, 11);
        verticalLayout_89->setObjectName(QStringLiteral("verticalLayout_89"));
        verticalLayout_89->setContentsMargins(0, 0, 0, 0);
        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        label_321 = new QLabel(layoutWidget_52);
        label_321->setObjectName(QStringLiteral("label_321"));
        label_321->setFont(font6);

        verticalLayout_46->addWidget(label_321);

        LabelPositionStatus_12 = new QTextEdit(layoutWidget_52);
        LabelPositionStatus_12->setObjectName(QStringLiteral("LabelPositionStatus_12"));
        LabelPositionStatus_12->setMaximumSize(QSize(151, 51));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_12->setPalette(palette21);
        LabelPositionStatus_12->setFont(font4);
        LabelPositionStatus_12->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_12->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_46->addWidget(LabelPositionStatus_12);


        verticalLayout_89->addLayout(verticalLayout_46);

        CheckPositionButton_12 = new QPushButton(layoutWidget_52);
        CheckPositionButton_12->setObjectName(QStringLiteral("CheckPositionButton_12"));

        verticalLayout_89->addWidget(CheckPositionButton_12);

        tabWidget_2->addTab(tab_14, QString());
        tab_18 = new QWidget();
        tab_18->setObjectName(QStringLiteral("tab_18"));
        layoutWidget_37 = new QWidget(tab_18);
        layoutWidget_37->setObjectName(QStringLiteral("layoutWidget_37"));
        layoutWidget_37->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_75 = new QVBoxLayout(layoutWidget_37);
        verticalLayout_75->setSpacing(6);
        verticalLayout_75->setContentsMargins(11, 11, 11, 11);
        verticalLayout_75->setObjectName(QStringLiteral("verticalLayout_75"));
        verticalLayout_75->setContentsMargins(0, 0, 0, 0);
        label_313 = new QLabel(layoutWidget_37);
        label_313->setObjectName(QStringLiteral("label_313"));

        verticalLayout_75->addWidget(label_313);

        LineEditMoveToValue_13 = new QLineEdit(layoutWidget_37);
        LineEditMoveToValue_13->setObjectName(QStringLiteral("LineEditMoveToValue_13"));

        verticalLayout_75->addWidget(LineEditMoveToValue_13);

        MoveTo_13 = new QPushButton(layoutWidget_37);
        MoveTo_13->setObjectName(QStringLiteral("MoveTo_13"));

        verticalLayout_75->addWidget(MoveTo_13);

        Homing_13 = new QPushButton(layoutWidget_37);
        Homing_13->setObjectName(QStringLiteral("Homing_13"));

        verticalLayout_75->addWidget(Homing_13);

        layoutWidget_38 = new QWidget(tab_18);
        layoutWidget_38->setObjectName(QStringLiteral("layoutWidget_38"));
        layoutWidget_38->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_76 = new QVBoxLayout(layoutWidget_38);
        verticalLayout_76->setSpacing(6);
        verticalLayout_76->setContentsMargins(11, 11, 11, 11);
        verticalLayout_76->setObjectName(QStringLiteral("verticalLayout_76"));
        verticalLayout_76->setContentsMargins(0, 0, 0, 0);
        label_314 = new QLabel(layoutWidget_38);
        label_314->setObjectName(QStringLiteral("label_314"));
        label_314->setFont(font5);

        verticalLayout_76->addWidget(label_314);

        label_315 = new QLabel(layoutWidget_38);
        label_315->setObjectName(QStringLiteral("label_315"));

        verticalLayout_76->addWidget(label_315);

        LabelMovAnalogInput0_13 = new QLabel(layoutWidget_38);
        LabelMovAnalogInput0_13->setObjectName(QStringLiteral("LabelMovAnalogInput0_13"));

        verticalLayout_76->addWidget(LabelMovAnalogInput0_13);

        label_316 = new QLabel(layoutWidget_38);
        label_316->setObjectName(QStringLiteral("label_316"));

        verticalLayout_76->addWidget(label_316);

        LabelMovCurrentPosition_13 = new QLabel(layoutWidget_38);
        LabelMovCurrentPosition_13->setObjectName(QStringLiteral("LabelMovCurrentPosition_13"));

        verticalLayout_76->addWidget(LabelMovCurrentPosition_13);

        GetParameterMov_13 = new QPushButton(layoutWidget_38);
        GetParameterMov_13->setObjectName(QStringLiteral("GetParameterMov_13"));

        verticalLayout_76->addWidget(GetParameterMov_13);

        layoutWidget_34 = new QWidget(tab_18);
        layoutWidget_34->setObjectName(QStringLiteral("layoutWidget_34"));
        layoutWidget_34->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_46 = new QGridLayout(layoutWidget_34);
        gridLayout_46->setSpacing(6);
        gridLayout_46->setContentsMargins(11, 11, 11, 11);
        gridLayout_46->setObjectName(QStringLiteral("gridLayout_46"));
        gridLayout_46->setContentsMargins(0, 0, 0, 0);
        label_212 = new QLabel(layoutWidget_34);
        label_212->setObjectName(QStringLiteral("label_212"));
        label_212->setFont(font5);

        gridLayout_46->addWidget(label_212, 0, 0, 1, 3);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        Images_13 = new QLabel(layoutWidget_34);
        Images_13->setObjectName(QStringLiteral("Images_13"));
        Images_13->setMinimumSize(QSize(0, 100));
        Images_13->setMaximumSize(QSize(200, 150));
        Images_13->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_13->setScaledContents(true);

        verticalLayout_29->addWidget(Images_13);

        label_213 = new QLabel(layoutWidget_34);
        label_213->setObjectName(QStringLiteral("label_213"));

        verticalLayout_29->addWidget(label_213);


        gridLayout_46->addLayout(verticalLayout_29, 1, 0, 1, 1);

        label_377 = new QLabel(layoutWidget_34);
        label_377->setObjectName(QStringLiteral("label_377"));
        label_377->setMinimumSize(QSize(25, 0));

        gridLayout_46->addWidget(label_377, 1, 1, 1, 1);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setSpacing(6);
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        label_214 = new QLabel(layoutWidget_34);
        label_214->setObjectName(QStringLiteral("label_214"));

        gridLayout_29->addWidget(label_214, 0, 0, 1, 1);

        label_215 = new QLabel(layoutWidget_34);
        label_215->setObjectName(QStringLiteral("label_215"));

        gridLayout_29->addWidget(label_215, 0, 1, 1, 1);

        label_220 = new QLabel(layoutWidget_34);
        label_220->setObjectName(QStringLiteral("label_220"));

        gridLayout_29->addWidget(label_220, 1, 0, 1, 1);

        label_221 = new QLabel(layoutWidget_34);
        label_221->setObjectName(QStringLiteral("label_221"));

        gridLayout_29->addWidget(label_221, 1, 1, 1, 1);

        LabelMaxVelSetup_13 = new QLabel(layoutWidget_34);
        LabelMaxVelSetup_13->setObjectName(QStringLiteral("LabelMaxVelSetup_13"));

        gridLayout_29->addWidget(LabelMaxVelSetup_13, 2, 0, 1, 1);

        LineEditMaxVelSetup_13 = new QLineEdit(layoutWidget_34);
        LineEditMaxVelSetup_13->setObjectName(QStringLiteral("LineEditMaxVelSetup_13"));

        gridLayout_29->addWidget(LineEditMaxVelSetup_13, 2, 1, 1, 1);

        label_226 = new QLabel(layoutWidget_34);
        label_226->setObjectName(QStringLiteral("label_226"));

        gridLayout_29->addWidget(label_226, 3, 0, 1, 1);

        label_227 = new QLabel(layoutWidget_34);
        label_227->setObjectName(QStringLiteral("label_227"));

        gridLayout_29->addWidget(label_227, 3, 1, 1, 1);

        LabelAccelerationSetup_13 = new QLabel(layoutWidget_34);
        LabelAccelerationSetup_13->setObjectName(QStringLiteral("LabelAccelerationSetup_13"));

        gridLayout_29->addWidget(LabelAccelerationSetup_13, 4, 0, 1, 1);

        LineEditAccelerationSetup_13 = new QLineEdit(layoutWidget_34);
        LineEditAccelerationSetup_13->setObjectName(QStringLiteral("LineEditAccelerationSetup_13"));

        gridLayout_29->addWidget(LineEditAccelerationSetup_13, 4, 1, 1, 1);

        label_232 = new QLabel(layoutWidget_34);
        label_232->setObjectName(QStringLiteral("label_232"));

        gridLayout_29->addWidget(label_232, 5, 0, 1, 1);

        label_233 = new QLabel(layoutWidget_34);
        label_233->setObjectName(QStringLiteral("label_233"));

        gridLayout_29->addWidget(label_233, 5, 1, 1, 1);

        LabelDecelerationSetup_13 = new QLabel(layoutWidget_34);
        LabelDecelerationSetup_13->setObjectName(QStringLiteral("LabelDecelerationSetup_13"));

        gridLayout_29->addWidget(LabelDecelerationSetup_13, 6, 0, 1, 1);

        LineEditDecelerationSetup_13 = new QLineEdit(layoutWidget_34);
        LineEditDecelerationSetup_13->setObjectName(QStringLiteral("LineEditDecelerationSetup_13"));

        gridLayout_29->addWidget(LineEditDecelerationSetup_13, 6, 1, 1, 1);

        label_238 = new QLabel(layoutWidget_34);
        label_238->setObjectName(QStringLiteral("label_238"));

        gridLayout_29->addWidget(label_238, 7, 0, 1, 1);

        label_239 = new QLabel(layoutWidget_34);
        label_239->setObjectName(QStringLiteral("label_239"));

        gridLayout_29->addWidget(label_239, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_13 = new QLabel(layoutWidget_34);
        LabelPhaseCurrentSetup_13->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_13"));

        gridLayout_29->addWidget(LabelPhaseCurrentSetup_13, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_13 = new QLineEdit(layoutWidget_34);
        LineEditPhaseCurrentSetup_13->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_13"));

        gridLayout_29->addWidget(LineEditPhaseCurrentSetup_13, 8, 1, 1, 1);

        label_244 = new QLabel(layoutWidget_34);
        label_244->setObjectName(QStringLiteral("label_244"));

        gridLayout_29->addWidget(label_244, 9, 0, 1, 1);

        label_245 = new QLabel(layoutWidget_34);
        label_245->setObjectName(QStringLiteral("label_245"));

        gridLayout_29->addWidget(label_245, 9, 1, 1, 1);

        LabelAnalogOutputSetup_13 = new QLabel(layoutWidget_34);
        LabelAnalogOutputSetup_13->setObjectName(QStringLiteral("LabelAnalogOutputSetup_13"));

        gridLayout_29->addWidget(LabelAnalogOutputSetup_13, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_13 = new QLineEdit(layoutWidget_34);
        LineEditAnalogOutputSetup_13->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_13"));

        gridLayout_29->addWidget(LineEditAnalogOutputSetup_13, 10, 1, 1, 1);

        label_378 = new QLabel(layoutWidget_34);
        label_378->setObjectName(QStringLiteral("label_378"));

        gridLayout_29->addWidget(label_378, 11, 0, 1, 1);

        label_379 = new QLabel(layoutWidget_34);
        label_379->setObjectName(QStringLiteral("label_379"));

        gridLayout_29->addWidget(label_379, 11, 1, 1, 1);

        LabelVelHomeSetup_13 = new QLabel(layoutWidget_34);
        LabelVelHomeSetup_13->setObjectName(QStringLiteral("LabelVelHomeSetup_13"));

        gridLayout_29->addWidget(LabelVelHomeSetup_13, 12, 0, 1, 1);

        LineEditVelHomeSetup_13 = new QLineEdit(layoutWidget_34);
        LineEditVelHomeSetup_13->setObjectName(QStringLiteral("LineEditVelHomeSetup_13"));

        gridLayout_29->addWidget(LineEditVelHomeSetup_13, 12, 1, 1, 1);

        GetParameterDriver_13 = new QPushButton(layoutWidget_34);
        GetParameterDriver_13->setObjectName(QStringLiteral("GetParameterDriver_13"));

        gridLayout_29->addWidget(GetParameterDriver_13, 13, 0, 1, 1);

        SetParameterDriver_13 = new QPushButton(layoutWidget_34);
        SetParameterDriver_13->setObjectName(QStringLiteral("SetParameterDriver_13"));

        gridLayout_29->addWidget(SetParameterDriver_13, 13, 1, 1, 1);


        gridLayout_46->addLayout(gridLayout_29, 1, 2, 1, 1);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        label_250 = new QLabel(layoutWidget_34);
        label_250->setObjectName(QStringLiteral("label_250"));
        label_250->setFont(font6);

        verticalLayout_30->addWidget(label_250);

        LabelStatusDriver13 = new QLabel(layoutWidget_34);
        LabelStatusDriver13->setObjectName(QStringLiteral("LabelStatusDriver13"));
        LabelStatusDriver13->setFont(font6);

        verticalLayout_30->addWidget(LabelStatusDriver13);


        gridLayout_46->addLayout(verticalLayout_30, 2, 0, 1, 3);

        layoutWidget_53 = new QWidget(tab_18);
        layoutWidget_53->setObjectName(QStringLiteral("layoutWidget_53"));
        layoutWidget_53->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_90 = new QVBoxLayout(layoutWidget_53);
        verticalLayout_90->setSpacing(6);
        verticalLayout_90->setContentsMargins(11, 11, 11, 11);
        verticalLayout_90->setObjectName(QStringLiteral("verticalLayout_90"));
        verticalLayout_90->setContentsMargins(0, 0, 0, 0);
        verticalLayout_47 = new QVBoxLayout();
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setObjectName(QStringLiteral("verticalLayout_47"));
        label_322 = new QLabel(layoutWidget_53);
        label_322->setObjectName(QStringLiteral("label_322"));
        label_322->setFont(font6);

        verticalLayout_47->addWidget(label_322);

        LabelPositionStatus_13 = new QTextEdit(layoutWidget_53);
        LabelPositionStatus_13->setObjectName(QStringLiteral("LabelPositionStatus_13"));
        LabelPositionStatus_13->setMaximumSize(QSize(151, 51));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_13->setPalette(palette22);
        LabelPositionStatus_13->setFont(font4);
        LabelPositionStatus_13->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_13->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_47->addWidget(LabelPositionStatus_13);


        verticalLayout_90->addLayout(verticalLayout_47);

        CheckPositionButton_13 = new QPushButton(layoutWidget_53);
        CheckPositionButton_13->setObjectName(QStringLiteral("CheckPositionButton_13"));

        verticalLayout_90->addWidget(CheckPositionButton_13);

        tabWidget_2->addTab(tab_18, QString());
        tab_19 = new QWidget();
        tab_19->setObjectName(QStringLiteral("tab_19"));
        layoutWidget_40 = new QWidget(tab_19);
        layoutWidget_40->setObjectName(QStringLiteral("layoutWidget_40"));
        layoutWidget_40->setGeometry(QRect(480, 430, 148, 121));
        verticalLayout_78 = new QVBoxLayout(layoutWidget_40);
        verticalLayout_78->setSpacing(6);
        verticalLayout_78->setContentsMargins(11, 11, 11, 11);
        verticalLayout_78->setObjectName(QStringLiteral("verticalLayout_78"));
        verticalLayout_78->setContentsMargins(0, 0, 0, 0);
        label_334 = new QLabel(layoutWidget_40);
        label_334->setObjectName(QStringLiteral("label_334"));

        verticalLayout_78->addWidget(label_334);

        LineEditMoveToValue_14 = new QLineEdit(layoutWidget_40);
        LineEditMoveToValue_14->setObjectName(QStringLiteral("LineEditMoveToValue_14"));

        verticalLayout_78->addWidget(LineEditMoveToValue_14);

        MoveTo_14 = new QPushButton(layoutWidget_40);
        MoveTo_14->setObjectName(QStringLiteral("MoveTo_14"));

        verticalLayout_78->addWidget(MoveTo_14);

        Homing_14 = new QPushButton(layoutWidget_40);
        Homing_14->setObjectName(QStringLiteral("Homing_14"));

        verticalLayout_78->addWidget(Homing_14);

        layoutWidget_41 = new QWidget(tab_19);
        layoutWidget_41->setObjectName(QStringLiteral("layoutWidget_41"));
        layoutWidget_41->setGeometry(QRect(480, 60, 151, 201));
        verticalLayout_79 = new QVBoxLayout(layoutWidget_41);
        verticalLayout_79->setSpacing(6);
        verticalLayout_79->setContentsMargins(11, 11, 11, 11);
        verticalLayout_79->setObjectName(QStringLiteral("verticalLayout_79"));
        verticalLayout_79->setContentsMargins(0, 0, 0, 0);
        label_335 = new QLabel(layoutWidget_41);
        label_335->setObjectName(QStringLiteral("label_335"));
        label_335->setFont(font5);

        verticalLayout_79->addWidget(label_335);

        label_336 = new QLabel(layoutWidget_41);
        label_336->setObjectName(QStringLiteral("label_336"));

        verticalLayout_79->addWidget(label_336);

        LabelMovAnalogInput0_14 = new QLabel(layoutWidget_41);
        LabelMovAnalogInput0_14->setObjectName(QStringLiteral("LabelMovAnalogInput0_14"));

        verticalLayout_79->addWidget(LabelMovAnalogInput0_14);

        label_337 = new QLabel(layoutWidget_41);
        label_337->setObjectName(QStringLiteral("label_337"));

        verticalLayout_79->addWidget(label_337);

        LabelMovCurrentPosition_14 = new QLabel(layoutWidget_41);
        LabelMovCurrentPosition_14->setObjectName(QStringLiteral("LabelMovCurrentPosition_14"));

        verticalLayout_79->addWidget(LabelMovCurrentPosition_14);

        GetParameterMov_14 = new QPushButton(layoutWidget_41);
        GetParameterMov_14->setObjectName(QStringLiteral("GetParameterMov_14"));

        verticalLayout_79->addWidget(GetParameterMov_14);

        layoutWidget_39 = new QWidget(tab_19);
        layoutWidget_39->setObjectName(QStringLiteral("layoutWidget_39"));
        layoutWidget_39->setGeometry(QRect(30, 60, 352, 491));
        gridLayout_47 = new QGridLayout(layoutWidget_39);
        gridLayout_47->setSpacing(6);
        gridLayout_47->setContentsMargins(11, 11, 11, 11);
        gridLayout_47->setObjectName(QStringLiteral("gridLayout_47"));
        gridLayout_47->setContentsMargins(0, 0, 0, 0);
        label_251 = new QLabel(layoutWidget_39);
        label_251->setObjectName(QStringLiteral("label_251"));
        label_251->setFont(font5);

        gridLayout_47->addWidget(label_251, 0, 0, 1, 3);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        Images_14 = new QLabel(layoutWidget_39);
        Images_14->setObjectName(QStringLiteral("Images_14"));
        Images_14->setMinimumSize(QSize(0, 100));
        Images_14->setMaximumSize(QSize(200, 150));
        Images_14->setPixmap(QPixmap(QString::fromUtf8(":/Driver.jpg")));
        Images_14->setScaledContents(true);

        verticalLayout_31->addWidget(Images_14);

        label_256 = new QLabel(layoutWidget_39);
        label_256->setObjectName(QStringLiteral("label_256"));

        verticalLayout_31->addWidget(label_256);


        gridLayout_47->addLayout(verticalLayout_31, 1, 0, 1, 1);

        label_380 = new QLabel(layoutWidget_39);
        label_380->setObjectName(QStringLiteral("label_380"));
        label_380->setMinimumSize(QSize(25, 0));

        gridLayout_47->addWidget(label_380, 1, 1, 1, 1);

        gridLayout_30 = new QGridLayout();
        gridLayout_30->setSpacing(6);
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        label_257 = new QLabel(layoutWidget_39);
        label_257->setObjectName(QStringLiteral("label_257"));

        gridLayout_30->addWidget(label_257, 0, 0, 1, 1);

        label_262 = new QLabel(layoutWidget_39);
        label_262->setObjectName(QStringLiteral("label_262"));

        gridLayout_30->addWidget(label_262, 0, 1, 1, 1);

        label_263 = new QLabel(layoutWidget_39);
        label_263->setObjectName(QStringLiteral("label_263"));

        gridLayout_30->addWidget(label_263, 1, 0, 1, 1);

        label_268 = new QLabel(layoutWidget_39);
        label_268->setObjectName(QStringLiteral("label_268"));

        gridLayout_30->addWidget(label_268, 1, 1, 1, 1);

        LabelMaxVelSetup_14 = new QLabel(layoutWidget_39);
        LabelMaxVelSetup_14->setObjectName(QStringLiteral("LabelMaxVelSetup_14"));

        gridLayout_30->addWidget(LabelMaxVelSetup_14, 2, 0, 1, 1);

        LineEditMaxVelSetup_14 = new QLineEdit(layoutWidget_39);
        LineEditMaxVelSetup_14->setObjectName(QStringLiteral("LineEditMaxVelSetup_14"));

        gridLayout_30->addWidget(LineEditMaxVelSetup_14, 2, 1, 1, 1);

        label_269 = new QLabel(layoutWidget_39);
        label_269->setObjectName(QStringLiteral("label_269"));

        gridLayout_30->addWidget(label_269, 3, 0, 1, 1);

        label_279 = new QLabel(layoutWidget_39);
        label_279->setObjectName(QStringLiteral("label_279"));

        gridLayout_30->addWidget(label_279, 3, 1, 1, 1);

        LabelAccelerationSetup_14 = new QLabel(layoutWidget_39);
        LabelAccelerationSetup_14->setObjectName(QStringLiteral("LabelAccelerationSetup_14"));

        gridLayout_30->addWidget(LabelAccelerationSetup_14, 4, 0, 1, 1);

        LineEditAccelerationSetup_14 = new QLineEdit(layoutWidget_39);
        LineEditAccelerationSetup_14->setObjectName(QStringLiteral("LineEditAccelerationSetup_14"));

        gridLayout_30->addWidget(LineEditAccelerationSetup_14, 4, 1, 1, 1);

        label_280 = new QLabel(layoutWidget_39);
        label_280->setObjectName(QStringLiteral("label_280"));

        gridLayout_30->addWidget(label_280, 5, 0, 1, 1);

        label_281 = new QLabel(layoutWidget_39);
        label_281->setObjectName(QStringLiteral("label_281"));

        gridLayout_30->addWidget(label_281, 5, 1, 1, 1);

        LabelDecelerationSetup_14 = new QLabel(layoutWidget_39);
        LabelDecelerationSetup_14->setObjectName(QStringLiteral("LabelDecelerationSetup_14"));

        gridLayout_30->addWidget(LabelDecelerationSetup_14, 6, 0, 1, 1);

        LineEditDecelerationSetup_14 = new QLineEdit(layoutWidget_39);
        LineEditDecelerationSetup_14->setObjectName(QStringLiteral("LineEditDecelerationSetup_14"));

        gridLayout_30->addWidget(LineEditDecelerationSetup_14, 6, 1, 1, 1);

        label_282 = new QLabel(layoutWidget_39);
        label_282->setObjectName(QStringLiteral("label_282"));

        gridLayout_30->addWidget(label_282, 7, 0, 1, 1);

        label_283 = new QLabel(layoutWidget_39);
        label_283->setObjectName(QStringLiteral("label_283"));

        gridLayout_30->addWidget(label_283, 7, 1, 1, 1);

        LabelPhaseCurrentSetup_14 = new QLabel(layoutWidget_39);
        LabelPhaseCurrentSetup_14->setObjectName(QStringLiteral("LabelPhaseCurrentSetup_14"));

        gridLayout_30->addWidget(LabelPhaseCurrentSetup_14, 8, 0, 1, 1);

        LineEditPhaseCurrentSetup_14 = new QLineEdit(layoutWidget_39);
        LineEditPhaseCurrentSetup_14->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_14"));

        gridLayout_30->addWidget(LineEditPhaseCurrentSetup_14, 8, 1, 1, 1);

        label_284 = new QLabel(layoutWidget_39);
        label_284->setObjectName(QStringLiteral("label_284"));

        gridLayout_30->addWidget(label_284, 9, 0, 1, 1);

        label_285 = new QLabel(layoutWidget_39);
        label_285->setObjectName(QStringLiteral("label_285"));

        gridLayout_30->addWidget(label_285, 9, 1, 1, 1);

        LabelAnalogOutputSetup_14 = new QLabel(layoutWidget_39);
        LabelAnalogOutputSetup_14->setObjectName(QStringLiteral("LabelAnalogOutputSetup_14"));

        gridLayout_30->addWidget(LabelAnalogOutputSetup_14, 10, 0, 1, 1);

        LineEditAnalogOutputSetup_14 = new QLineEdit(layoutWidget_39);
        LineEditAnalogOutputSetup_14->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_14"));

        gridLayout_30->addWidget(LineEditAnalogOutputSetup_14, 10, 1, 1, 1);

        label_381 = new QLabel(layoutWidget_39);
        label_381->setObjectName(QStringLiteral("label_381"));

        gridLayout_30->addWidget(label_381, 11, 0, 1, 1);

        label_382 = new QLabel(layoutWidget_39);
        label_382->setObjectName(QStringLiteral("label_382"));

        gridLayout_30->addWidget(label_382, 11, 1, 1, 1);

        LabelVelHomeSetup_14 = new QLabel(layoutWidget_39);
        LabelVelHomeSetup_14->setObjectName(QStringLiteral("LabelVelHomeSetup_14"));

        gridLayout_30->addWidget(LabelVelHomeSetup_14, 12, 0, 1, 1);

        LineEditVelHomeSetup_14 = new QLineEdit(layoutWidget_39);
        LineEditVelHomeSetup_14->setObjectName(QStringLiteral("LineEditVelHomeSetup_14"));

        gridLayout_30->addWidget(LineEditVelHomeSetup_14, 12, 1, 1, 1);

        GetParameterDriver_14 = new QPushButton(layoutWidget_39);
        GetParameterDriver_14->setObjectName(QStringLiteral("GetParameterDriver_14"));

        gridLayout_30->addWidget(GetParameterDriver_14, 13, 0, 1, 1);

        SetParameterDriver_14 = new QPushButton(layoutWidget_39);
        SetParameterDriver_14->setObjectName(QStringLiteral("SetParameterDriver_14"));

        gridLayout_30->addWidget(SetParameterDriver_14, 13, 1, 1, 1);


        gridLayout_47->addLayout(gridLayout_30, 1, 2, 1, 1);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        label_286 = new QLabel(layoutWidget_39);
        label_286->setObjectName(QStringLiteral("label_286"));
        label_286->setFont(font6);

        verticalLayout_32->addWidget(label_286);

        LabelStatusDriver14 = new QLabel(layoutWidget_39);
        LabelStatusDriver14->setObjectName(QStringLiteral("LabelStatusDriver14"));
        LabelStatusDriver14->setFont(font6);

        verticalLayout_32->addWidget(LabelStatusDriver14);


        gridLayout_47->addLayout(verticalLayout_32, 2, 0, 1, 3);

        layoutWidget_54 = new QWidget(tab_19);
        layoutWidget_54->setObjectName(QStringLiteral("layoutWidget_54"));
        layoutWidget_54->setGeometry(QRect(480, 280, 155, 121));
        verticalLayout_91 = new QVBoxLayout(layoutWidget_54);
        verticalLayout_91->setSpacing(6);
        verticalLayout_91->setContentsMargins(11, 11, 11, 11);
        verticalLayout_91->setObjectName(QStringLiteral("verticalLayout_91"));
        verticalLayout_91->setContentsMargins(0, 0, 0, 0);
        verticalLayout_48 = new QVBoxLayout();
        verticalLayout_48->setSpacing(6);
        verticalLayout_48->setObjectName(QStringLiteral("verticalLayout_48"));
        label_323 = new QLabel(layoutWidget_54);
        label_323->setObjectName(QStringLiteral("label_323"));
        label_323->setFont(font6);

        verticalLayout_48->addWidget(label_323);

        LabelPositionStatus_14 = new QTextEdit(layoutWidget_54);
        LabelPositionStatus_14->setObjectName(QStringLiteral("LabelPositionStatus_14"));
        LabelPositionStatus_14->setMaximumSize(QSize(151, 51));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        LabelPositionStatus_14->setPalette(palette23);
        LabelPositionStatus_14->setFont(font4);
        LabelPositionStatus_14->setFrameShape(QFrame::NoFrame);
        LabelPositionStatus_14->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_48->addWidget(LabelPositionStatus_14);


        verticalLayout_91->addLayout(verticalLayout_48);

        CheckPositionButton_14 = new QPushButton(layoutWidget_54);
        CheckPositionButton_14->setObjectName(QStringLiteral("CheckPositionButton_14"));

        verticalLayout_91->addWidget(CheckPositionButton_14);

        tabWidget_2->addTab(tab_19, QString());

        gridLayout_13->addWidget(tabWidget_2, 0, 0, 1, 1);

        AllDriverTab->addTab(tab, icon, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        gridLayout_11 = new QGridLayout(tab_16);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        AllDriver = new QTabWidget(tab_16);
        AllDriver->setObjectName(QStringLiteral("AllDriver"));
        AllMovimentation = new QWidget();
        AllMovimentation->setObjectName(QStringLiteral("AllMovimentation"));
        layoutWidget_35 = new QWidget(AllMovimentation);
        layoutWidget_35->setObjectName(QStringLiteral("layoutWidget_35"));
        layoutWidget_35->setGeometry(QRect(460, 240, 150, 125));
        gridLayout_26 = new QGridLayout(layoutWidget_35);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        Homing_all = new QPushButton(layoutWidget_35);
        Homing_all->setObjectName(QStringLiteral("Homing_all"));

        gridLayout_26->addWidget(Homing_all, 1, 0, 1, 1);

        verticalLayout_77 = new QVBoxLayout();
        verticalLayout_77->setSpacing(6);
        verticalLayout_77->setObjectName(QStringLiteral("verticalLayout_77"));
        label_292 = new QLabel(layoutWidget_35);
        label_292->setObjectName(QStringLiteral("label_292"));

        verticalLayout_77->addWidget(label_292);

        LineEditMoveToValue_all = new QLineEdit(layoutWidget_35);
        LineEditMoveToValue_all->setObjectName(QStringLiteral("LineEditMoveToValue_all"));

        verticalLayout_77->addWidget(LineEditMoveToValue_all);

        MoveTo_all = new QPushButton(layoutWidget_35);
        MoveTo_all->setObjectName(QStringLiteral("MoveTo_all"));

        verticalLayout_77->addWidget(MoveTo_all);


        gridLayout_26->addLayout(verticalLayout_77, 0, 0, 1, 1);

        layoutWidget4 = new QWidget(AllMovimentation);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 240, 300, 197));
        gridLayout_24 = new QGridLayout(layoutWidget4);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        label_274 = new QLabel(layoutWidget4);
        label_274->setObjectName(QStringLiteral("label_274"));

        gridLayout_24->addWidget(label_274, 0, 0, 1, 1);

        label_203 = new QLabel(layoutWidget4);
        label_203->setObjectName(QStringLiteral("label_203"));

        gridLayout_24->addWidget(label_203, 0, 1, 1, 1);

        LineEditMaxVelSetup_all = new QLineEdit(layoutWidget4);
        LineEditMaxVelSetup_all->setObjectName(QStringLiteral("LineEditMaxVelSetup_all"));

        gridLayout_24->addWidget(LineEditMaxVelSetup_all, 1, 0, 1, 1);

        LineEditPhaseCurrentSetup_all = new QLineEdit(layoutWidget4);
        LineEditPhaseCurrentSetup_all->setObjectName(QStringLiteral("LineEditPhaseCurrentSetup_all"));

        gridLayout_24->addWidget(LineEditPhaseCurrentSetup_all, 1, 1, 1, 1);

        label_275 = new QLabel(layoutWidget4);
        label_275->setObjectName(QStringLiteral("label_275"));

        gridLayout_24->addWidget(label_275, 2, 0, 1, 1);

        label_204 = new QLabel(layoutWidget4);
        label_204->setObjectName(QStringLiteral("label_204"));

        gridLayout_24->addWidget(label_204, 2, 1, 1, 1);

        LineEditAccelerationSetup_all = new QLineEdit(layoutWidget4);
        LineEditAccelerationSetup_all->setObjectName(QStringLiteral("LineEditAccelerationSetup_all"));

        gridLayout_24->addWidget(LineEditAccelerationSetup_all, 3, 0, 1, 1);

        LineEditAnalogOutputSetup_all = new QLineEdit(layoutWidget4);
        LineEditAnalogOutputSetup_all->setObjectName(QStringLiteral("LineEditAnalogOutputSetup_all"));

        gridLayout_24->addWidget(LineEditAnalogOutputSetup_all, 3, 1, 1, 1);

        label_273 = new QLabel(layoutWidget4);
        label_273->setObjectName(QStringLiteral("label_273"));

        gridLayout_24->addWidget(label_273, 4, 0, 1, 1);

        LineEditDecelerationSetup_all = new QLineEdit(layoutWidget4);
        LineEditDecelerationSetup_all->setObjectName(QStringLiteral("LineEditDecelerationSetup_all"));

        gridLayout_24->addWidget(LineEditDecelerationSetup_all, 5, 0, 1, 1);

        SetParameterDriver_all = new QPushButton(layoutWidget4);
        SetParameterDriver_all->setObjectName(QStringLiteral("SetParameterDriver_all"));

        gridLayout_24->addWidget(SetParameterDriver_all, 6, 0, 1, 2);

        label_287 = new QLabel(layoutWidget4);
        label_287->setObjectName(QStringLiteral("label_287"));

        gridLayout_24->addWidget(label_287, 4, 1, 1, 1);

        LineEditVelHomeSetup_all = new QLineEdit(layoutWidget4);
        LineEditVelHomeSetup_all->setObjectName(QStringLiteral("LineEditVelHomeSetup_all"));

        gridLayout_24->addWidget(LineEditVelHomeSetup_all, 5, 1, 1, 1);

        label_276 = new QLabel(AllMovimentation);
        label_276->setObjectName(QStringLiteral("label_276"));
        label_276->setGeometry(QRect(20, 10, 151, 17));
        label_276->setFont(font5);
        label_277 = new QLabel(AllMovimentation);
        label_277->setObjectName(QStringLiteral("label_277"));
        label_277->setGeometry(QRect(20, 200, 71, 31));
        label_277->setFont(font5);
        label_278 = new QLabel(AllMovimentation);
        label_278->setObjectName(QStringLiteral("label_278"));
        label_278->setGeometry(QRect(460, 200, 151, 31));
        label_278->setFont(font5);
        layoutWidget5 = new QWidget(AllMovimentation);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(21, 46, 281, 121));
        gridLayout_25 = new QGridLayout(layoutWidget5);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        checkBox_1 = new QCheckBox(layoutWidget5);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));

        gridLayout_25->addWidget(checkBox_1, 0, 0, 1, 1);

        checkBox_5 = new QCheckBox(layoutWidget5);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        gridLayout_25->addWidget(checkBox_5, 0, 1, 1, 1);

        checkBox_9 = new QCheckBox(layoutWidget5);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        gridLayout_25->addWidget(checkBox_9, 0, 2, 1, 1);

        checkBox_13 = new QCheckBox(layoutWidget5);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));

        gridLayout_25->addWidget(checkBox_13, 0, 3, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget5);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_25->addWidget(checkBox_2, 1, 0, 1, 1);

        checkBox_6 = new QCheckBox(layoutWidget5);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        gridLayout_25->addWidget(checkBox_6, 1, 1, 1, 1);

        checkBox_10 = new QCheckBox(layoutWidget5);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));

        gridLayout_25->addWidget(checkBox_10, 1, 2, 1, 1);

        checkBox_14 = new QCheckBox(layoutWidget5);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));

        gridLayout_25->addWidget(checkBox_14, 1, 3, 1, 1);

        checkBox_3 = new QCheckBox(layoutWidget5);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_25->addWidget(checkBox_3, 2, 0, 1, 1);

        checkBox_7 = new QCheckBox(layoutWidget5);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));

        gridLayout_25->addWidget(checkBox_7, 2, 1, 1, 1);

        checkBox_11 = new QCheckBox(layoutWidget5);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));

        gridLayout_25->addWidget(checkBox_11, 2, 2, 1, 1);

        checkBox_4 = new QCheckBox(layoutWidget5);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_25->addWidget(checkBox_4, 3, 0, 1, 1);

        checkBox_8 = new QCheckBox(layoutWidget5);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        gridLayout_25->addWidget(checkBox_8, 3, 1, 1, 1);

        checkBox_12 = new QCheckBox(layoutWidget5);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));

        gridLayout_25->addWidget(checkBox_12, 3, 2, 1, 1);

        checkBox_all = new QCheckBox(layoutWidget5);
        checkBox_all->setObjectName(QStringLiteral("checkBox_all"));

        gridLayout_25->addWidget(checkBox_all, 3, 3, 1, 1);

        AllDriver->addTab(AllMovimentation, QString());
        AllParameter = new QWidget();
        AllParameter->setObjectName(QStringLiteral("AllParameter"));
        gridLayout_31 = new QGridLayout(AllParameter);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QStringLiteral("gridLayout_31"));
        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        gridLayout_27 = new QGridLayout();
        gridLayout_27->setSpacing(6);
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        label_305 = new QLabel(AllParameter);
        label_305->setObjectName(QStringLiteral("label_305"));

        gridLayout_27->addWidget(label_305, 0, 1, 1, 1);

        label_306 = new QLabel(AllParameter);
        label_306->setObjectName(QStringLiteral("label_306"));

        gridLayout_27->addWidget(label_306, 0, 2, 1, 1);

        label_307 = new QLabel(AllParameter);
        label_307->setObjectName(QStringLiteral("label_307"));

        gridLayout_27->addWidget(label_307, 0, 3, 1, 1);

        label_308 = new QLabel(AllParameter);
        label_308->setObjectName(QStringLiteral("label_308"));

        gridLayout_27->addWidget(label_308, 0, 4, 1, 1);

        label_324 = new QLabel(AllParameter);
        label_324->setObjectName(QStringLiteral("label_324"));

        gridLayout_27->addWidget(label_324, 0, 5, 1, 1);

        label_293 = new QLabel(AllParameter);
        label_293->setObjectName(QStringLiteral("label_293"));

        gridLayout_27->addWidget(label_293, 1, 0, 1, 1);

        LabelAllAI0_1 = new QLabel(AllParameter);
        LabelAllAI0_1->setObjectName(QStringLiteral("LabelAllAI0_1"));

        gridLayout_27->addWidget(LabelAllAI0_1, 1, 1, 1, 1);

        LabelAllCurrPos_1 = new QLabel(AllParameter);
        LabelAllCurrPos_1->setObjectName(QStringLiteral("LabelAllCurrPos_1"));

        gridLayout_27->addWidget(LabelAllCurrPos_1, 1, 2, 1, 1);

        LabelAllAO_1 = new QLabel(AllParameter);
        LabelAllAO_1->setObjectName(QStringLiteral("LabelAllAO_1"));

        gridLayout_27->addWidget(LabelAllAO_1, 1, 3, 1, 1);

        LabelAllStatus_1 = new QLabel(AllParameter);
        LabelAllStatus_1->setObjectName(QStringLiteral("LabelAllStatus_1"));

        gridLayout_27->addWidget(LabelAllStatus_1, 1, 4, 1, 1);

        LabelAllPosStatus_1 = new QLabel(AllParameter);
        LabelAllPosStatus_1->setObjectName(QStringLiteral("LabelAllPosStatus_1"));

        gridLayout_27->addWidget(LabelAllPosStatus_1, 1, 5, 1, 1);

        label_294 = new QLabel(AllParameter);
        label_294->setObjectName(QStringLiteral("label_294"));

        gridLayout_27->addWidget(label_294, 2, 0, 1, 1);

        LabelAllAI0_2 = new QLabel(AllParameter);
        LabelAllAI0_2->setObjectName(QStringLiteral("LabelAllAI0_2"));

        gridLayout_27->addWidget(LabelAllAI0_2, 2, 1, 1, 1);

        LabelAllCurrPos_2 = new QLabel(AllParameter);
        LabelAllCurrPos_2->setObjectName(QStringLiteral("LabelAllCurrPos_2"));

        gridLayout_27->addWidget(LabelAllCurrPos_2, 2, 2, 1, 1);

        LabelAllAO_2 = new QLabel(AllParameter);
        LabelAllAO_2->setObjectName(QStringLiteral("LabelAllAO_2"));

        gridLayout_27->addWidget(LabelAllAO_2, 2, 3, 1, 1);

        LabelAllStatus_2 = new QLabel(AllParameter);
        LabelAllStatus_2->setObjectName(QStringLiteral("LabelAllStatus_2"));

        gridLayout_27->addWidget(LabelAllStatus_2, 2, 4, 1, 1);

        LabelAllPosStatus_2 = new QLabel(AllParameter);
        LabelAllPosStatus_2->setObjectName(QStringLiteral("LabelAllPosStatus_2"));

        gridLayout_27->addWidget(LabelAllPosStatus_2, 2, 5, 1, 1);

        label_295 = new QLabel(AllParameter);
        label_295->setObjectName(QStringLiteral("label_295"));

        gridLayout_27->addWidget(label_295, 3, 0, 1, 1);

        LabelAllAI0_3 = new QLabel(AllParameter);
        LabelAllAI0_3->setObjectName(QStringLiteral("LabelAllAI0_3"));

        gridLayout_27->addWidget(LabelAllAI0_3, 3, 1, 1, 1);

        LabelAllCurrPos_3 = new QLabel(AllParameter);
        LabelAllCurrPos_3->setObjectName(QStringLiteral("LabelAllCurrPos_3"));

        gridLayout_27->addWidget(LabelAllCurrPos_3, 3, 2, 1, 1);

        LabelAllAO_3 = new QLabel(AllParameter);
        LabelAllAO_3->setObjectName(QStringLiteral("LabelAllAO_3"));

        gridLayout_27->addWidget(LabelAllAO_3, 3, 3, 1, 1);

        LabelAllStatus_3 = new QLabel(AllParameter);
        LabelAllStatus_3->setObjectName(QStringLiteral("LabelAllStatus_3"));

        gridLayout_27->addWidget(LabelAllStatus_3, 3, 4, 1, 1);

        LabelAllPosStatus_3 = new QLabel(AllParameter);
        LabelAllPosStatus_3->setObjectName(QStringLiteral("LabelAllPosStatus_3"));

        gridLayout_27->addWidget(LabelAllPosStatus_3, 3, 5, 1, 1);

        label_296 = new QLabel(AllParameter);
        label_296->setObjectName(QStringLiteral("label_296"));

        gridLayout_27->addWidget(label_296, 4, 0, 1, 1);

        LabelAllAI0_4 = new QLabel(AllParameter);
        LabelAllAI0_4->setObjectName(QStringLiteral("LabelAllAI0_4"));

        gridLayout_27->addWidget(LabelAllAI0_4, 4, 1, 1, 1);

        LabelAllCurrPos_4 = new QLabel(AllParameter);
        LabelAllCurrPos_4->setObjectName(QStringLiteral("LabelAllCurrPos_4"));

        gridLayout_27->addWidget(LabelAllCurrPos_4, 4, 2, 1, 1);

        LabelAllAO_4 = new QLabel(AllParameter);
        LabelAllAO_4->setObjectName(QStringLiteral("LabelAllAO_4"));

        gridLayout_27->addWidget(LabelAllAO_4, 4, 3, 1, 1);

        LabelAllStatus_4 = new QLabel(AllParameter);
        LabelAllStatus_4->setObjectName(QStringLiteral("LabelAllStatus_4"));

        gridLayout_27->addWidget(LabelAllStatus_4, 4, 4, 1, 1);

        LabelAllPosStatus_4 = new QLabel(AllParameter);
        LabelAllPosStatus_4->setObjectName(QStringLiteral("LabelAllPosStatus_4"));

        gridLayout_27->addWidget(LabelAllPosStatus_4, 4, 5, 1, 1);

        label_297 = new QLabel(AllParameter);
        label_297->setObjectName(QStringLiteral("label_297"));

        gridLayout_27->addWidget(label_297, 5, 0, 1, 1);

        LabelAllAI0_5 = new QLabel(AllParameter);
        LabelAllAI0_5->setObjectName(QStringLiteral("LabelAllAI0_5"));

        gridLayout_27->addWidget(LabelAllAI0_5, 5, 1, 1, 1);

        LabelAllCurrPos_5 = new QLabel(AllParameter);
        LabelAllCurrPos_5->setObjectName(QStringLiteral("LabelAllCurrPos_5"));

        gridLayout_27->addWidget(LabelAllCurrPos_5, 5, 2, 1, 1);

        LabelAllAO_5 = new QLabel(AllParameter);
        LabelAllAO_5->setObjectName(QStringLiteral("LabelAllAO_5"));

        gridLayout_27->addWidget(LabelAllAO_5, 5, 3, 1, 1);

        LabelAllStatus_5 = new QLabel(AllParameter);
        LabelAllStatus_5->setObjectName(QStringLiteral("LabelAllStatus_5"));

        gridLayout_27->addWidget(LabelAllStatus_5, 5, 4, 1, 1);

        LabelAllPosStatus_5 = new QLabel(AllParameter);
        LabelAllPosStatus_5->setObjectName(QStringLiteral("LabelAllPosStatus_5"));

        gridLayout_27->addWidget(LabelAllPosStatus_5, 5, 5, 1, 1);

        label_298 = new QLabel(AllParameter);
        label_298->setObjectName(QStringLiteral("label_298"));

        gridLayout_27->addWidget(label_298, 6, 0, 1, 1);

        LabelAllAI0_6 = new QLabel(AllParameter);
        LabelAllAI0_6->setObjectName(QStringLiteral("LabelAllAI0_6"));

        gridLayout_27->addWidget(LabelAllAI0_6, 6, 1, 1, 1);

        LabelAllCurrPos_6 = new QLabel(AllParameter);
        LabelAllCurrPos_6->setObjectName(QStringLiteral("LabelAllCurrPos_6"));

        gridLayout_27->addWidget(LabelAllCurrPos_6, 6, 2, 1, 1);

        LabelAllAO_6 = new QLabel(AllParameter);
        LabelAllAO_6->setObjectName(QStringLiteral("LabelAllAO_6"));

        gridLayout_27->addWidget(LabelAllAO_6, 6, 3, 1, 1);

        LabelAllStatus_6 = new QLabel(AllParameter);
        LabelAllStatus_6->setObjectName(QStringLiteral("LabelAllStatus_6"));

        gridLayout_27->addWidget(LabelAllStatus_6, 6, 4, 1, 1);

        LabelAllPosStatus_6 = new QLabel(AllParameter);
        LabelAllPosStatus_6->setObjectName(QStringLiteral("LabelAllPosStatus_6"));

        gridLayout_27->addWidget(LabelAllPosStatus_6, 6, 5, 1, 1);

        label_299 = new QLabel(AllParameter);
        label_299->setObjectName(QStringLiteral("label_299"));

        gridLayout_27->addWidget(label_299, 7, 0, 1, 1);

        LabelAllAI0_7 = new QLabel(AllParameter);
        LabelAllAI0_7->setObjectName(QStringLiteral("LabelAllAI0_7"));

        gridLayout_27->addWidget(LabelAllAI0_7, 7, 1, 1, 1);

        LabelAllCurrPos_7 = new QLabel(AllParameter);
        LabelAllCurrPos_7->setObjectName(QStringLiteral("LabelAllCurrPos_7"));

        gridLayout_27->addWidget(LabelAllCurrPos_7, 7, 2, 1, 1);

        LabelAllAO_7 = new QLabel(AllParameter);
        LabelAllAO_7->setObjectName(QStringLiteral("LabelAllAO_7"));

        gridLayout_27->addWidget(LabelAllAO_7, 7, 3, 1, 1);

        LabelAllStatus_7 = new QLabel(AllParameter);
        LabelAllStatus_7->setObjectName(QStringLiteral("LabelAllStatus_7"));

        gridLayout_27->addWidget(LabelAllStatus_7, 7, 4, 1, 1);

        LabelAllPosStatus_7 = new QLabel(AllParameter);
        LabelAllPosStatus_7->setObjectName(QStringLiteral("LabelAllPosStatus_7"));

        gridLayout_27->addWidget(LabelAllPosStatus_7, 7, 5, 1, 1);

        label_300 = new QLabel(AllParameter);
        label_300->setObjectName(QStringLiteral("label_300"));

        gridLayout_27->addWidget(label_300, 8, 0, 1, 1);

        LabelAllAI0_8 = new QLabel(AllParameter);
        LabelAllAI0_8->setObjectName(QStringLiteral("LabelAllAI0_8"));

        gridLayout_27->addWidget(LabelAllAI0_8, 8, 1, 1, 1);

        LabelAllCurrPos_8 = new QLabel(AllParameter);
        LabelAllCurrPos_8->setObjectName(QStringLiteral("LabelAllCurrPos_8"));

        gridLayout_27->addWidget(LabelAllCurrPos_8, 8, 2, 1, 1);

        LabelAllAO_8 = new QLabel(AllParameter);
        LabelAllAO_8->setObjectName(QStringLiteral("LabelAllAO_8"));

        gridLayout_27->addWidget(LabelAllAO_8, 8, 3, 1, 1);

        LabelAllStatus_8 = new QLabel(AllParameter);
        LabelAllStatus_8->setObjectName(QStringLiteral("LabelAllStatus_8"));

        gridLayout_27->addWidget(LabelAllStatus_8, 8, 4, 1, 1);

        LabelAllPosStatus_8 = new QLabel(AllParameter);
        LabelAllPosStatus_8->setObjectName(QStringLiteral("LabelAllPosStatus_8"));

        gridLayout_27->addWidget(LabelAllPosStatus_8, 8, 5, 1, 1);

        label_301 = new QLabel(AllParameter);
        label_301->setObjectName(QStringLiteral("label_301"));

        gridLayout_27->addWidget(label_301, 9, 0, 1, 1);

        LabelAllAI0_9 = new QLabel(AllParameter);
        LabelAllAI0_9->setObjectName(QStringLiteral("LabelAllAI0_9"));

        gridLayout_27->addWidget(LabelAllAI0_9, 9, 1, 1, 1);

        LabelAllCurrPos_9 = new QLabel(AllParameter);
        LabelAllCurrPos_9->setObjectName(QStringLiteral("LabelAllCurrPos_9"));

        gridLayout_27->addWidget(LabelAllCurrPos_9, 9, 2, 1, 1);

        LabelAllAO_9 = new QLabel(AllParameter);
        LabelAllAO_9->setObjectName(QStringLiteral("LabelAllAO_9"));

        gridLayout_27->addWidget(LabelAllAO_9, 9, 3, 1, 1);

        LabelAllStatus_9 = new QLabel(AllParameter);
        LabelAllStatus_9->setObjectName(QStringLiteral("LabelAllStatus_9"));

        gridLayout_27->addWidget(LabelAllStatus_9, 9, 4, 1, 1);

        LabelAllPosStatus_9 = new QLabel(AllParameter);
        LabelAllPosStatus_9->setObjectName(QStringLiteral("LabelAllPosStatus_9"));

        gridLayout_27->addWidget(LabelAllPosStatus_9, 9, 5, 1, 1);

        label_302 = new QLabel(AllParameter);
        label_302->setObjectName(QStringLiteral("label_302"));

        gridLayout_27->addWidget(label_302, 10, 0, 1, 1);

        LabelAllAI0_10 = new QLabel(AllParameter);
        LabelAllAI0_10->setObjectName(QStringLiteral("LabelAllAI0_10"));

        gridLayout_27->addWidget(LabelAllAI0_10, 10, 1, 1, 1);

        LabelAllCurrPos_10 = new QLabel(AllParameter);
        LabelAllCurrPos_10->setObjectName(QStringLiteral("LabelAllCurrPos_10"));

        gridLayout_27->addWidget(LabelAllCurrPos_10, 10, 2, 1, 1);

        LabelAllAO_10 = new QLabel(AllParameter);
        LabelAllAO_10->setObjectName(QStringLiteral("LabelAllAO_10"));

        gridLayout_27->addWidget(LabelAllAO_10, 10, 3, 1, 1);

        LabelAllStatus_10 = new QLabel(AllParameter);
        LabelAllStatus_10->setObjectName(QStringLiteral("LabelAllStatus_10"));

        gridLayout_27->addWidget(LabelAllStatus_10, 10, 4, 1, 1);

        LabelAllPosStatus_10 = new QLabel(AllParameter);
        LabelAllPosStatus_10->setObjectName(QStringLiteral("LabelAllPosStatus_10"));

        gridLayout_27->addWidget(LabelAllPosStatus_10, 10, 5, 1, 1);

        label_303 = new QLabel(AllParameter);
        label_303->setObjectName(QStringLiteral("label_303"));

        gridLayout_27->addWidget(label_303, 11, 0, 1, 1);

        LabelAllAI0_11 = new QLabel(AllParameter);
        LabelAllAI0_11->setObjectName(QStringLiteral("LabelAllAI0_11"));

        gridLayout_27->addWidget(LabelAllAI0_11, 11, 1, 1, 1);

        LabelAllCurrPos_11 = new QLabel(AllParameter);
        LabelAllCurrPos_11->setObjectName(QStringLiteral("LabelAllCurrPos_11"));

        gridLayout_27->addWidget(LabelAllCurrPos_11, 11, 2, 1, 1);

        LabelAllAO_11 = new QLabel(AllParameter);
        LabelAllAO_11->setObjectName(QStringLiteral("LabelAllAO_11"));

        gridLayout_27->addWidget(LabelAllAO_11, 11, 3, 1, 1);

        LabelAllStatus_11 = new QLabel(AllParameter);
        LabelAllStatus_11->setObjectName(QStringLiteral("LabelAllStatus_11"));

        gridLayout_27->addWidget(LabelAllStatus_11, 11, 4, 1, 1);

        LabelAllPosStatus_11 = new QLabel(AllParameter);
        LabelAllPosStatus_11->setObjectName(QStringLiteral("LabelAllPosStatus_11"));

        gridLayout_27->addWidget(LabelAllPosStatus_11, 11, 5, 1, 1);

        label_304 = new QLabel(AllParameter);
        label_304->setObjectName(QStringLiteral("label_304"));

        gridLayout_27->addWidget(label_304, 12, 0, 1, 1);

        LabelAllAI0_12 = new QLabel(AllParameter);
        LabelAllAI0_12->setObjectName(QStringLiteral("LabelAllAI0_12"));

        gridLayout_27->addWidget(LabelAllAI0_12, 12, 1, 1, 1);

        LabelAllCurrPos_12 = new QLabel(AllParameter);
        LabelAllCurrPos_12->setObjectName(QStringLiteral("LabelAllCurrPos_12"));

        gridLayout_27->addWidget(LabelAllCurrPos_12, 12, 2, 1, 1);

        LabelAllAO_12 = new QLabel(AllParameter);
        LabelAllAO_12->setObjectName(QStringLiteral("LabelAllAO_12"));

        gridLayout_27->addWidget(LabelAllAO_12, 12, 3, 1, 1);

        LabelAllStatus_12 = new QLabel(AllParameter);
        LabelAllStatus_12->setObjectName(QStringLiteral("LabelAllStatus_12"));

        gridLayout_27->addWidget(LabelAllStatus_12, 12, 4, 1, 1);

        LabelAllPosStatus_12 = new QLabel(AllParameter);
        LabelAllPosStatus_12->setObjectName(QStringLiteral("LabelAllPosStatus_12"));

        gridLayout_27->addWidget(LabelAllPosStatus_12, 12, 5, 1, 1);

        label_338 = new QLabel(AllParameter);
        label_338->setObjectName(QStringLiteral("label_338"));

        gridLayout_27->addWidget(label_338, 13, 0, 1, 1);

        LabelAllAI0_13 = new QLabel(AllParameter);
        LabelAllAI0_13->setObjectName(QStringLiteral("LabelAllAI0_13"));

        gridLayout_27->addWidget(LabelAllAI0_13, 13, 1, 1, 1);

        LabelAllCurrPos_13 = new QLabel(AllParameter);
        LabelAllCurrPos_13->setObjectName(QStringLiteral("LabelAllCurrPos_13"));

        gridLayout_27->addWidget(LabelAllCurrPos_13, 13, 2, 1, 1);

        LabelAllAO_13 = new QLabel(AllParameter);
        LabelAllAO_13->setObjectName(QStringLiteral("LabelAllAO_13"));

        gridLayout_27->addWidget(LabelAllAO_13, 13, 3, 1, 1);

        LabelAllStatus_13 = new QLabel(AllParameter);
        LabelAllStatus_13->setObjectName(QStringLiteral("LabelAllStatus_13"));

        gridLayout_27->addWidget(LabelAllStatus_13, 13, 4, 1, 1);

        LabelAllPosStatus_13 = new QLabel(AllParameter);
        LabelAllPosStatus_13->setObjectName(QStringLiteral("LabelAllPosStatus_13"));

        gridLayout_27->addWidget(LabelAllPosStatus_13, 13, 5, 1, 1);

        label_339 = new QLabel(AllParameter);
        label_339->setObjectName(QStringLiteral("label_339"));

        gridLayout_27->addWidget(label_339, 14, 0, 1, 1);

        LabelAllAI0_14 = new QLabel(AllParameter);
        LabelAllAI0_14->setObjectName(QStringLiteral("LabelAllAI0_14"));

        gridLayout_27->addWidget(LabelAllAI0_14, 14, 1, 1, 1);

        LabelAllCurrPos_14 = new QLabel(AllParameter);
        LabelAllCurrPos_14->setObjectName(QStringLiteral("LabelAllCurrPos_14"));

        gridLayout_27->addWidget(LabelAllCurrPos_14, 14, 2, 1, 1);

        LabelAllAO_14 = new QLabel(AllParameter);
        LabelAllAO_14->setObjectName(QStringLiteral("LabelAllAO_14"));

        gridLayout_27->addWidget(LabelAllAO_14, 14, 3, 1, 1);

        LabelAllStatus_14 = new QLabel(AllParameter);
        LabelAllStatus_14->setObjectName(QStringLiteral("LabelAllStatus_14"));

        gridLayout_27->addWidget(LabelAllStatus_14, 14, 4, 1, 1);

        LabelAllPosStatus_14 = new QLabel(AllParameter);
        LabelAllPosStatus_14->setObjectName(QStringLiteral("LabelAllPosStatus_14"));

        gridLayout_27->addWidget(LabelAllPosStatus_14, 14, 5, 1, 1);


        verticalLayout_33->addLayout(gridLayout_27);

        GetAllParameter = new QPushButton(AllParameter);
        GetAllParameter->setObjectName(QStringLiteral("GetAllParameter"));

        verticalLayout_33->addWidget(GetAllParameter);


        gridLayout_31->addLayout(verticalLayout_33, 0, 0, 1, 1);

        AllDriver->addTab(AllParameter, QString());

        gridLayout_11->addWidget(AllDriver, 0, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MultiDriver.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AllDriverTab->addTab(tab_16, icon3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        CommandString = new QLineEdit(tab_2);
        CommandString->setObjectName(QStringLiteral("CommandString"));

        gridLayout->addWidget(CommandString, 1, 0, 1, 1);

        CommandStringButton = new QPushButton(tab_2);
        CommandStringButton->setObjectName(QStringLiteral("CommandStringButton"));

        gridLayout->addWidget(CommandStringButton, 2, 0, 1, 1);

        ExpertModeMessage = new QTextEdit(tab_2);
        ExpertModeMessage->setObjectName(QStringLiteral("ExpertModeMessage"));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        ExpertModeMessage->setPalette(palette24);
        ExpertModeMessage->setFrameShape(QFrame::NoFrame);
        ExpertModeMessage->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(ExpertModeMessage, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ExpertIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AllDriverTab->addTab(tab_2, icon4, QString());

        gridLayout_34->addWidget(AllDriverTab, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 786, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAbout);
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        AllDriverTab->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(0);
        AllDriver->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CollSoft Client GUI", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("MainWindow", "About...", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AllDriverTab->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ConnectProgrammerPath->setToolTip(QApplication::translate("MainWindow", "Insert here the absolute path of the programmer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ConnectProgrammer->setToolTip(QApplication::translate("MainWindow", "Connect CollSoft to the Programmer", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ConnectProgrammer->setText(QApplication::translate("MainWindow", "Connect Programmer", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Programmer path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DeviceListButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Print the content of the directory /dev located in the CollSoft server. Here, a user could find the path of the programmer.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DeviceListButton->setText(QApplication::translate("MainWindow", "Device list", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ProgrammerConnectionLog->setToolTip(QApplication::translate("MainWindow", "Response of the CollSoft server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_17->setText(QApplication::translate("MainWindow", "General Connection Status:", Q_NULLPTR));
        label_statusAll->setText(QApplication::translate("MainWindow", "FAILED", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CollSoftConnectionLog->setToolTip(QApplication::translate("MainWindow", "CollSoft server response", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainWindow", "Choose the Ip Address and the Port to connect to CollSoft software.", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Server Ip", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ServerIp->setToolTip(QApplication::translate("MainWindow", "Insert here the IP address of the CollSoft server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "Server Port", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ServerPort->setToolTip(QApplication::translate("MainWindow", "Insert here the port of the CollSoft server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ConnectToServerButton->setToolTip(QApplication::translate("MainWindow", "Connect GUI to the CollSoft Server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ConnectToServerButton->setText(QApplication::translate("MainWindow", "Connect To Server", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DisconnectToServerButton->setToolTip(QApplication::translate("MainWindow", "Disconnect GUI from the CollSoft Server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DisconnectToServerButton->setText(QApplication::translate("MainWindow", "Disconnect From Server", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Step 1", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Existence Server Connection Status:", Q_NULLPTR));
        label_status1->setText(QApplication::translate("MainWindow", "FAILED", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "CollSoft Server Connection Status:", Q_NULLPTR));
        label_status2->setText(QApplication::translate("MainWindow", "FAILED", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Step 3", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Step 2", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Server Existence Port", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Choose the Ip Address and the Port to check if CollSoft software is running", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckExistence->setToolTip(QApplication::translate("MainWindow", "Check if a CollSoft instance is running on the server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckExistence->setText(QApplication::translate("MainWindow", "CheckExistence", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConnectExistence->setToolTip(QApplication::translate("MainWindow", "Connect GUI to Check Existence Server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ConnectExistence->setText(QApplication::translate("MainWindow", "ConnectExistence", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        KillProcess_CollSoft->setToolTip(QApplication::translate("MainWindow", "Kill a CollSoft instance in the server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        KillProcess_CollSoft->setText(QApplication::translate("MainWindow", "KillProcess", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        NewProcess_CollSoft->setToolTip(QApplication::translate("MainWindow", "Create a CollSoft instance in the server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        NewProcess_CollSoft->setText(QApplication::translate("MainWindow", "New Process", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Server Ip Check Existence", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DisconnectExistence->setToolTip(QApplication::translate("MainWindow", "Disonnect GUI from Check Existence Server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DisconnectExistence->setText(QApplication::translate("MainWindow", "DisconnectExistence", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckExistenceLineIpEdit->setToolTip(QApplication::translate("MainWindow", "Insert here the IP address of the Check Existence server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CheckExistenceLinePortEdit->setToolTip(QApplication::translate("MainWindow", "Insert here the port of the Check Existence server", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CheckExistenceLog->setToolTip(QApplication::translate("MainWindow", "Check Existence server response", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("MainWindow", "Programmer Connection Status:", Q_NULLPTR));
        label_status3->setText(QApplication::translate("MainWindow", "FAILED", Q_NULLPTR));
        AllDriverTab->setTabText(AllDriverTab->indexOf(tab_15), QApplication::translate("MainWindow", "Connection", Q_NULLPTR));
        AllDriverTab->setTabToolTip(AllDriverTab->indexOf(tab_15), QApplication::translate("MainWindow", "Connection management", Q_NULLPTR));
        label_46->setText(QString());
        label_Accepted->setText(QApplication::translate("MainWindow", "Serial Numbers Not Accepted", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckDrvAssoc->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check the association beetwen log file serial number and the real situation. The log file name is SerialDrvLog.txt</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckDrvAssoc->setText(QApplication::translate("MainWindow", "Check Driver/Serial number association", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ReadSerialDrvLog->setToolTip(QApplication::translate("MainWindow", "Read the log file SerialDrvLog.txt", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ReadSerialDrvLog->setText(QApplication::translate("MainWindow", "Read SerialDrvLog.txt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GeneralConnectionLog->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Informations sent by the server to this GUI.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Accepted_Par->setText(QApplication::translate("MainWindow", "Parameters Not Accepted", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckParAssoc->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check the association beetwen log file drivers parameter and the real situation. The log file name is FileParLog.txt</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckParAssoc->setText(QApplication::translate("MainWindow", "Check Driver/Parameters association", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ReadFileParLog->setToolTip(QApplication::translate("MainWindow", "Read the log file FileParLog.txt", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ReadFileParLog->setText(QApplication::translate("MainWindow", "Read FileParLog.txt", Q_NULLPTR));
        label_Accepted_Encode->setText(QApplication::translate("MainWindow", "Encoder Values Not Accepted", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckEncoderAssoc->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check the association beetwen log file drivers parameter and the real situation. The log file name is FileParLog.txt</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckEncoderAssoc->setText(QApplication::translate("MainWindow", "Check Driver/Encoder values association", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ReadEncoderLog->setToolTip(QApplication::translate("MainWindow", "Read the log file FileParLog.txt", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ReadEncoderLog->setText(QApplication::translate("MainWindow", "Read EncoderLog.txt", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ReadGeneralLog->setToolTip(QApplication::translate("MainWindow", "Read the log file GeneralLog.txt", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ReadGeneralLog->setText(QApplication::translate("MainWindow", "Read GeneralLog.txt", Q_NULLPTR));
        label_325->setText(QString());
#ifndef QT_NO_TOOLTIP
        ReadActualEncoderValue->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Read the values used to estimate the correcteness of the driver position.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ReadActualEncoderValue->setText(QApplication::translate("MainWindow", "Read actual encoder values", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LoadEncoderFromFileButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Load the values used to estimated the driver position from the EncoderLog.txt file.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LoadEncoderFromFileButton->setText(QApplication::translate("MainWindow", "Load Encoder From File", Q_NULLPTR));
        label_311->setText(QString());
        InternalSerialNumberStatus->setText(QApplication::translate("MainWindow", "Serial number: failed", Q_NULLPTR));
        InternalParameterStatus->setText(QApplication::translate("MainWindow", "Parameter: failed", Q_NULLPTR));
        InternalEncoderValuesStatus->setText(QApplication::translate("MainWindow", "Encoder: failed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckInternalStatus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check the internal status of the CollSoft program: some operations are allowed only if each control was done at least once time after the beginning of the CollSoft program.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckInternalStatus->setText(QApplication::translate("MainWindow", "Check Internal Status", Q_NULLPTR));
        label_45->setText(QString());
        AllDriverTab->setTabText(AllDriverTab->indexOf(tab_17), QApplication::translate("MainWindow", "General", Q_NULLPTR));
        AllDriverTab->setTabToolTip(AllDriverTab->indexOf(tab_17), QApplication::translate("MainWindow", "General information management", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_47->setText(QString());
        label_52->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_1->setToolTip(QApplication::translate("MainWindow", "Position to move driver 1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_1->setToolTip(QApplication::translate("MainWindow", "Move driver 1 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_1->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_1->setToolTip(QApplication::translate("MainWindow", "Execute the driver 1 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_1->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_53->setText(QString());
        label_49->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_50->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_51->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_1->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 1", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_1->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_211->setText(QString());
        label_210->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Driver 1 Setup", Q_NULLPTR));
        Images->setText(QString());
        label_29->setText(QString());
        label_343->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 1 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_19->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 1 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 1 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_24->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 1 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_41->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 1 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_342->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_341->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_1->setToolTip(QApplication::translate("MainWindow", "Current value of driver 1 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 1 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 1</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_1->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 1. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_1->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver1->setToolTip(QApplication::translate("MainWindow", "Driver 1 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver1->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_288->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 1.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 1.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_1->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        label_326->setText(QApplication::translate("MainWindow", "Driver status state:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDrvStatus_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 1.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDrvStatus_1->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckDrvStatusButton_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 1.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckDrvStatusButton_1->setText(QApplication::translate("MainWindow", "Check Drv Status", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "1", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Driver 1 Setup and Movimentation", Q_NULLPTR));
        label_205->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_2->setToolTip(QApplication::translate("MainWindow", "Position to move driver 2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_2->setToolTip(QApplication::translate("MainWindow", "Move driver 2 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_2->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_2->setToolTip(QApplication::translate("MainWindow", "Execute the driver 2 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_2->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_206->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_207->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_208->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_2->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 2", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_2->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Driver 2 Setup", Q_NULLPTR));
        Images_2->setText(QString());
        label_30->setText(QString());
        label_344->setText(QString());
        label_28->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 2 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_34->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 2 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_36->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 2 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_38->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 2 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_43->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 2 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_345->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_346->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_2->setToolTip(QApplication::translate("MainWindow", "Current value of driver 2 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 2 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 2</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_2->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 2. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_2->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_40->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver2->setToolTip(QApplication::translate("MainWindow", "Driver 2 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver2->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_289->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 2.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 2.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_2->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        label_327->setText(QApplication::translate("MainWindow", "Driver status state:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDrvStatus_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 1.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDrvStatus_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckDrvStatusButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 1.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckDrvStatusButton_2->setText(QApplication::translate("MainWindow", "Check Drv Status", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "2", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Driver 2 Setup and Movimentation", Q_NULLPTR));
        label_209->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_3->setToolTip(QApplication::translate("MainWindow", "Position to move driver 3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_3->setToolTip(QApplication::translate("MainWindow", "Move driver 3 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_3->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_3->setToolTip(QApplication::translate("MainWindow", "Execute the driver 3 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_3->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_216->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_217->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_218->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_3->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_3->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_48->setText(QApplication::translate("MainWindow", "Driver 3 Setup", Q_NULLPTR));
        Images_3->setText(QString());
        label_54->setText(QString());
        label_347->setText(QString());
        label_55->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_56->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_57->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 3 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_59->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 3 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_61->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_62->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 3 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_63->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_64->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 3 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_65->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_66->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 3 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_348->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_349->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_3->setToolTip(QApplication::translate("MainWindow", "Current value of driver 3 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 3 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 3</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_3->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 3. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_3->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_67->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver3->setToolTip(QApplication::translate("MainWindow", "Driver 3 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver3->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_290->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 3.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 3.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_3->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        label_328->setText(QApplication::translate("MainWindow", "Driver status state:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDrvStatus_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 1.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDrvStatus_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckDrvStatusButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 1.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckDrvStatusButton_3->setText(QApplication::translate("MainWindow", "Check Drv Status", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "3", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "Driver 3 Setup and Movimentation", Q_NULLPTR));
        label_219->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_4->setToolTip(QApplication::translate("MainWindow", "Position to move driver 4", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_4->setToolTip(QApplication::translate("MainWindow", "Move driver 4 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_4->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_4->setToolTip(QApplication::translate("MainWindow", "Execute the driver 4 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_4->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_222->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_223->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_224->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_4->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 4", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_4->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_68->setText(QApplication::translate("MainWindow", "Driver 4 Setup", Q_NULLPTR));
        Images_4->setText(QString());
        label_69->setText(QString());
        label_350->setText(QString());
        label_70->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_71->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_72->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_73->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 4 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_74->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_75->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 4 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_76->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_77->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 4 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_78->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_79->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 4 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_80->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_81->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 4 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_351->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_352->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_4->setToolTip(QApplication::translate("MainWindow", "Current value of driver 4 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 4 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 4</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_4->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 4. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_4->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_82->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver4->setToolTip(QApplication::translate("MainWindow", "Driver 4 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver4->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_291->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 4.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 4.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_4->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        label_329->setText(QApplication::translate("MainWindow", "Driver status state:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDrvStatus_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 1.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDrvStatus_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckDrvStatusButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 1.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckDrvStatusButton_4->setText(QApplication::translate("MainWindow", "Check Drv Status", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "4", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "Driver 4 Setup and Movimentation", Q_NULLPTR));
        label_225->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_5->setToolTip(QApplication::translate("MainWindow", "Position to move driver 5", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_5->setToolTip(QApplication::translate("MainWindow", "Move driver 5 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_5->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_5->setToolTip(QApplication::translate("MainWindow", "Execute the driver 5 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_5->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_228->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_229->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_230->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_5->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 5", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_5->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_83->setText(QApplication::translate("MainWindow", "Driver 5 Setup", Q_NULLPTR));
        Images_5->setText(QString());
        label_84->setText(QString());
        label_353->setText(QString());
        label_85->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_86->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_87->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_88->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 5 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_89->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_90->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 5 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_91->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_92->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 5 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_93->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_94->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 5 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_95->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_96->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 5 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_354->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_355->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_5->setToolTip(QApplication::translate("MainWindow", "Current value of driver 5 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 5 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 5</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_5->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 5. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_5->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_97->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver5->setToolTip(QApplication::translate("MainWindow", "Driver 5 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver5->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_309->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 5.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 5.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_5->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "5", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Driver 5 Setup and Movimentation", Q_NULLPTR));
        label_231->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_6->setToolTip(QApplication::translate("MainWindow", "Position to move driver 6", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_6->setToolTip(QApplication::translate("MainWindow", "Move driver 6 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_6->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_6->setToolTip(QApplication::translate("MainWindow", "Execute the driver 6 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_6->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_234->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_235->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_236->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_6->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 6", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_6->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_98->setText(QApplication::translate("MainWindow", "Driver 6 Setup", Q_NULLPTR));
        Images_6->setText(QString());
        label_99->setText(QString());
        label_356->setText(QString());
        label_100->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_101->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_102->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_103->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 6 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_104->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_105->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 6 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_106->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_107->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 6 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_108->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_109->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 6 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_110->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_111->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 6 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_357->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_358->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_6->setToolTip(QApplication::translate("MainWindow", "Current value of driver 6 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 6 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 6</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_6->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 6. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_6->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_112->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver6->setToolTip(QApplication::translate("MainWindow", "Driver 6 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver6->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_310->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 6.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 6.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_6->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "6", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "Driver 6 Setup and Movimentation", Q_NULLPTR));
        label_237->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_7->setToolTip(QApplication::translate("MainWindow", "Position to move driver 7", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_7->setToolTip(QApplication::translate("MainWindow", "Move driver 7 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_7->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_7->setToolTip(QApplication::translate("MainWindow", "Execute the driver 7 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_7->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_240->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_241->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_242->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_7->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 7", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_7->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_113->setText(QApplication::translate("MainWindow", "Driver 7 Setup", Q_NULLPTR));
        Images_7->setText(QString());
        label_114->setText(QString());
        label_359->setText(QString());
        label_115->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_116->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_117->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_118->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 7 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_119->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_120->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 7 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_121->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_122->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 7 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_123->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_124->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 7 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_125->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_126->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 7 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_360->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_361->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_7->setToolTip(QApplication::translate("MainWindow", "Current value of driver 7 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 7 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 7</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_7->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 7. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_7->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_127->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver7->setToolTip(QApplication::translate("MainWindow", "Driver 7 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver7->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_312->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 7.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_7->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 7.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_7->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "7", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_9), QApplication::translate("MainWindow", "Driver 7 Setup and Movimentation", Q_NULLPTR));
        label_243->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_8->setToolTip(QApplication::translate("MainWindow", "Position to move driver 8", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_8->setToolTip(QApplication::translate("MainWindow", "Move driver 8 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_8->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_8->setToolTip(QApplication::translate("MainWindow", "Execute the driver 8 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_8->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_246->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_247->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_248->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_8->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 8", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_8->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_128->setText(QApplication::translate("MainWindow", "Driver 8 Setup", Q_NULLPTR));
        Images_8->setText(QString());
        label_129->setText(QString());
        label_362->setText(QString());
        label_130->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_131->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_132->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_133->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 8 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_134->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_135->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 8 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_136->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_137->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 8 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_138->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_139->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 8 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_140->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_141->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 8 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_363->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_364->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_8->setToolTip(QApplication::translate("MainWindow", "Current value of driver 8 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 8 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 8</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_8->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 8. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_8->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_142->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver8->setToolTip(QApplication::translate("MainWindow", "Driver 8 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver8->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_317->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 8.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 8.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_8->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "8", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Driver 8 Setup and Movimentation", Q_NULLPTR));
        label_249->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_9->setToolTip(QApplication::translate("MainWindow", "Position to move driver 9", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_9->setToolTip(QApplication::translate("MainWindow", "Move driver 9 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_9->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_9->setToolTip(QApplication::translate("MainWindow", "Execute the driver 9 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_9->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_252->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_253->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_254->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_9->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 9", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_9->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_143->setText(QApplication::translate("MainWindow", "Driver 9 Setup", Q_NULLPTR));
        Images_9->setText(QString());
        label_144->setText(QString());
        label_365->setText(QString());
        label_145->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_146->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_147->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_148->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 9 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_149->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_150->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 9 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_151->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_152->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 9 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_153->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_154->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 9 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_155->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_156->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 9 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_366->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_367->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_9->setToolTip(QApplication::translate("MainWindow", "Current value of driver 9 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 9 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 9</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_9->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 9. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_9->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_157->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver9->setToolTip(QApplication::translate("MainWindow", "Driver 9 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver9->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_318->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 9.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 9.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_9->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "9", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "Driver 9 Setup and Movimentation", Q_NULLPTR));
        label_255->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_10->setToolTip(QApplication::translate("MainWindow", "Position to move driver 10", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_10->setToolTip(QApplication::translate("MainWindow", "Move driver 10 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_10->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_10->setToolTip(QApplication::translate("MainWindow", "Execute the driver 10 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_10->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_258->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_259->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_260->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_10->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 10", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_10->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_158->setText(QApplication::translate("MainWindow", "Driver 10 Setup", Q_NULLPTR));
        Images_10->setText(QString());
        label_159->setText(QString());
        label_368->setText(QString());
        label_160->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_161->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_162->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_163->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 10 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_164->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_165->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 10 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_166->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_167->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 10 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_168->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_169->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 10 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_170->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_171->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 10 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_369->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_370->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_10->setToolTip(QApplication::translate("MainWindow", "Current value of driver 10 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>VelHome of driver 10 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 10</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_10->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 10. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_10->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_172->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver10->setToolTip(QApplication::translate("MainWindow", "Driver 10 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver10->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_319->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 10.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_10->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 10.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_10->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("MainWindow", "10", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_12), QApplication::translate("MainWindow", "Driver 10 Setup and Movimentation", Q_NULLPTR));
        label_261->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_11->setToolTip(QApplication::translate("MainWindow", "Position to move driver 11", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_11->setToolTip(QApplication::translate("MainWindow", "Move driver 11 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_11->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_11->setToolTip(QApplication::translate("MainWindow", "Execute the driver 11 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_11->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_264->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_265->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_266->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_11->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 11", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_11->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_173->setText(QApplication::translate("MainWindow", "Driver 11 Setup", Q_NULLPTR));
        Images_11->setText(QString());
        label_174->setText(QString());
        label_371->setText(QString());
        label_175->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_176->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_177->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_178->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 11 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_179->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_180->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 11 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_181->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_182->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 11 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_183->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_184->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 11 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_185->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_186->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 11 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_372->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_373->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_11->setToolTip(QApplication::translate("MainWindow", "Current value of driver 11 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 11 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 11</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_11->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 11. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_11->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_187->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver11->setToolTip(QApplication::translate("MainWindow", "Driver 11 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver11->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_320->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 11.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_11->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_11->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 11.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_11->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_13), QApplication::translate("MainWindow", "11", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_13), QApplication::translate("MainWindow", "Driver 11 Setup and Movimentation", Q_NULLPTR));
        label_267->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_12->setToolTip(QApplication::translate("MainWindow", "Position to move driver 12", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_12->setToolTip(QApplication::translate("MainWindow", "Move driver 12 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_12->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_12->setToolTip(QApplication::translate("MainWindow", "Execute the driver 12 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_12->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_270->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_271->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_272->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_12->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 12", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_12->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_188->setText(QApplication::translate("MainWindow", "Driver 12 Setup", Q_NULLPTR));
        Images_12->setText(QString());
        label_189->setText(QString());
        label_374->setText(QString());
        label_190->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_191->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_192->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_193->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 12 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_194->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_195->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 12 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_196->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_197->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 12 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_198->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_199->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 12 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_200->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_201->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 12 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_375->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_376->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_12->setToolTip(QApplication::translate("MainWindow", "Current value of driver 12 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 12 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 12</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_12->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 12. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_12->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_202->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver12->setToolTip(QApplication::translate("MainWindow", "Driver 12 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver12->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_321->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 12.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_12->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_12->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 12.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_12->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_14), QApplication::translate("MainWindow", "12", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_14), QApplication::translate("MainWindow", "Driver 12 Setup and Movimentation", Q_NULLPTR));
        label_313->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_13->setToolTip(QApplication::translate("MainWindow", "Position to move driver 13", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_13->setToolTip(QApplication::translate("MainWindow", "Move driver 13 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_13->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_13->setToolTip(QApplication::translate("MainWindow", "Execute the driver 13 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_13->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_314->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_315->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_316->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_13->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 13", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_13->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_212->setText(QApplication::translate("MainWindow", "Driver 13 Setup", Q_NULLPTR));
        Images_13->setText(QString());
        label_213->setText(QString());
        label_377->setText(QString());
        label_214->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_215->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_220->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_221->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 13 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_226->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_227->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 13 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_232->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_233->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 13 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_238->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_239->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 13 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_244->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_245->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 13 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_378->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_379->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_13->setToolTip(QApplication::translate("MainWindow", "Current value of driver 13 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 13 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 13</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_13->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 13. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_13->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_250->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver13->setToolTip(QApplication::translate("MainWindow", "Driver 13 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver13->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_322->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 13.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_13->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_13->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 13.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_13->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_18), QApplication::translate("MainWindow", "13", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_18), QApplication::translate("MainWindow", "Driver 13 Setup and Movimentation", Q_NULLPTR));
        label_334->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_14->setToolTip(QApplication::translate("MainWindow", "Position to move driver 14", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_14->setToolTip(QApplication::translate("MainWindow", "Move driver 14 to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_14->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_14->setToolTip(QApplication::translate("MainWindow", "Execute the driver 14 homing procedure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_14->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_335->setText(QApplication::translate("MainWindow", "Movement", Q_NULLPTR));
        label_336->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovAnalogInput0_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 AnalogInput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovAnalogInput0_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        label_337->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMovCurrentPosition_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 CurrentPosition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMovCurrentPosition_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetParameterMov_14->setToolTip(QApplication::translate("MainWindow", "Get position parameters of driver 14", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterMov_14->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        label_251->setText(QApplication::translate("MainWindow", "Driver 14 Setup", Q_NULLPTR));
        Images_14->setText(QString());
        label_256->setText(QString());
        label_380->setText(QString());
        label_257->setText(QApplication::translate("MainWindow", "Current Values", Q_NULLPTR));
        label_262->setText(QApplication::translate("MainWindow", "Set Values", Q_NULLPTR));
        label_263->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_268->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelMaxVelSetup_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 MaxVel", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMaxVelSetup_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>MaxVel of driver 14 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_269->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_279->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAccelerationSetup_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 Acceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAccelerationSetup_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Acceleration of driver 14 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_280->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
        label_281->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelDecelerationSetup_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 Deceleration", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDecelerationSetup_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Deceleration of driver 14 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_282->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
        label_283->setText(QApplication::translate("MainWindow", "PhaseCurrent", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 PhaseCurrent", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPhaseCurrentSetup_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> PhaseCurrent of driver 14 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_284->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
        label_285->setText(QApplication::translate("MainWindow", "AnalogOutput0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelAnalogOutputSetup_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 AnalogOutput(0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAnalogOutputSetup_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> AnalogOutput(0) of driver 14 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_381->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
        label_382->setText(QApplication::translate("MainWindow", "VelHome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelVelHomeSetup_14->setToolTip(QApplication::translate("MainWindow", "Current value of driver 14 VelHome", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelVelHomeSetup_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p> VelHome of driver 14 to set</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GetParameterDriver_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Get the current parameter of the driver 14</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetParameterDriver_14->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of driver 14. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_14->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_286->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelStatusDriver14->setToolTip(QApplication::translate("MainWindow", "Driver 14 Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStatusDriver14->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_323->setText(QApplication::translate("MainWindow", "Position status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPositionStatus_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:400;\">Here is printed the correspondence between the estimated position and the CurrentPosition of the driver 14.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelPositionStatus_14->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">Disconnected</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckPositionButton_14->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Verify the correspondence between the estimated position and the current position of the driver 14.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckPositionButton_14->setText(QApplication::translate("MainWindow", "Check Position", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_19), QApplication::translate("MainWindow", "14", Q_NULLPTR));
        tabWidget_2->setTabToolTip(tabWidget_2->indexOf(tab_19), QApplication::translate("MainWindow", "Driver 14 Setup and Movimentation", Q_NULLPTR));
        AllDriverTab->setTabText(AllDriverTab->indexOf(tab), QApplication::translate("MainWindow", "Single Driver", Q_NULLPTR));
        AllDriverTab->setTabToolTip(AllDriverTab->indexOf(tab), QApplication::translate("MainWindow", "Single drive setup and movimentation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Homing_all->setToolTip(QApplication::translate("MainWindow", "Execute the homing procedure for all driver", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Homing_all->setText(QApplication::translate("MainWindow", "Homing", Q_NULLPTR));
        label_292->setText(QApplication::translate("MainWindow", "Move To:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMoveToValue_all->setToolTip(QApplication::translate("MainWindow", "Position to move all drivers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MoveTo_all->setToolTip(QApplication::translate("MainWindow", "Move all drivers to the position specified above", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MoveTo_all->setText(QApplication::translate("MainWindow", "MoveTo", Q_NULLPTR));
        label_274->setText(QApplication::translate("MainWindow", "MaxVel:", Q_NULLPTR));
        label_203->setText(QApplication::translate("MainWindow", "PhaseCurrent:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditMaxVelSetup_all->setToolTip(QApplication::translate("MainWindow", "Set all drivers MaxVel to this value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LineEditPhaseCurrentSetup_all->setToolTip(QApplication::translate("MainWindow", "Set all drivers PhaseCurrent to this value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_275->setText(QApplication::translate("MainWindow", "Acceleration:", Q_NULLPTR));
        label_204->setText(QApplication::translate("MainWindow", "AnalogOutput0:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditAccelerationSetup_all->setToolTip(QApplication::translate("MainWindow", "Set all drivers Acceleration to this value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LineEditAnalogOutputSetup_all->setToolTip(QApplication::translate("MainWindow", "Set all drivers AnalogOutput(0) to this value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_273->setText(QApplication::translate("MainWindow", "Deceleration:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditDecelerationSetup_all->setToolTip(QApplication::translate("MainWindow", "Set all drivers Deceleration to this value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SetParameterDriver_all->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Set parameter of all drivers. Nota bene: in order to accomplished the command you have to set all the fields above.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SetParameterDriver_all->setText(QApplication::translate("MainWindow", "Set Parameter", Q_NULLPTR));
        label_287->setText(QApplication::translate("MainWindow", "VelHome:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LineEditVelHomeSetup_all->setToolTip(QApplication::translate("MainWindow", "Set all drivers VelHome to this value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_276->setText(QApplication::translate("MainWindow", "Choose Driver:", Q_NULLPTR));
        label_277->setText(QApplication::translate("MainWindow", "Setup:", Q_NULLPTR));
        label_278->setText(QApplication::translate("MainWindow", "Movimentation:", Q_NULLPTR));
        checkBox_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        checkBox_13->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        checkBox_10->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        checkBox_14->setText(QApplication::translate("MainWindow", "14", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        checkBox_11->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        checkBox_12->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        checkBox_all->setText(QApplication::translate("MainWindow", "All", Q_NULLPTR));
        AllDriver->setTabText(AllDriver->indexOf(AllMovimentation), QApplication::translate("MainWindow", "All Movimentation", Q_NULLPTR));
        AllDriver->setTabToolTip(AllDriver->indexOf(AllMovimentation), QApplication::translate("MainWindow", "All drivers movimentation and settings", Q_NULLPTR));
        label_305->setText(QApplication::translate("MainWindow", "AnalogInput0:", Q_NULLPTR));
        label_306->setText(QApplication::translate("MainWindow", "CurrentPosition:", Q_NULLPTR));
        label_307->setText(QApplication::translate("MainWindow", "AnalogOutput0:", Q_NULLPTR));
        label_308->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
        label_324->setText(QApplication::translate("MainWindow", "Pos. status:", Q_NULLPTR));
        label_293->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        LabelAllAI0_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_1->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_1->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_1->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_294->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        LabelAllAI0_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_2->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_2->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_2->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_295->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        LabelAllAI0_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_3->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_3->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_3->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_296->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        LabelAllAI0_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_4->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_4->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_4->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_297->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        LabelAllAI0_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_5->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_5->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_5->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_298->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        LabelAllAI0_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_6->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_6->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_6->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_299->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        LabelAllAI0_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_7->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_7->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_7->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_300->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        LabelAllAI0_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_8->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_8->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_8->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_301->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        LabelAllAI0_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_9->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_9->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_9->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_302->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        LabelAllAI0_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_10->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_10->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_10->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_303->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        LabelAllAI0_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_11->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_11->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_11->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_304->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        LabelAllAI0_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_12->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_12->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_12->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_338->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));
        LabelAllAI0_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_13->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_13->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_13->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        label_339->setText(QApplication::translate("MainWindow", "14", Q_NULLPTR));
        LabelAllAI0_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllCurrPos_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllAO_14->setText(QApplication::translate("MainWindow", "Undef", Q_NULLPTR));
        LabelAllStatus_14->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
        LabelAllPosStatus_14->setText(QApplication::translate("MainWindow", "Disconnected", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GetAllParameter->setToolTip(QApplication::translate("MainWindow", "Get the parameters of all drivers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GetAllParameter->setText(QApplication::translate("MainWindow", "Get Parameter", Q_NULLPTR));
        AllDriver->setTabText(AllDriver->indexOf(AllParameter), QApplication::translate("MainWindow", "All Parameter", Q_NULLPTR));
        AllDriver->setTabToolTip(AllDriver->indexOf(AllParameter), QApplication::translate("MainWindow", "All driver parameters briefing", Q_NULLPTR));
        AllDriverTab->setTabText(AllDriverTab->indexOf(tab_16), QApplication::translate("MainWindow", "All Drivers", Q_NULLPTR));
        AllDriverTab->setTabWhatsThis(AllDriverTab->indexOf(tab_16), QApplication::translate("MainWindow", "All driver setup, movimentation and briefing", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CommandString->setToolTip(QApplication::translate("MainWindow", "Command to send to the CollSoft program.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CommandStringButton->setToolTip(QApplication::translate("MainWindow", "Send the command above to the CollSoft program.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CommandStringButton->setText(QApplication::translate("MainWindow", "SendCommand", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ExpertModeMessage->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>All the output sent from the CollSoft program to this GUI is printed here.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AllDriverTab->setTabText(AllDriverTab->indexOf(tab_2), QApplication::translate("MainWindow", "Expert Mode", Q_NULLPTR));
        AllDriverTab->setTabToolTip(AllDriverTab->indexOf(tab_2), QApplication::translate("MainWindow", "Expert mode", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
