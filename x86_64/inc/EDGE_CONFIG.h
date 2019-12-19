#ifndef __CONFIG_H__
#define __CONFIG_H__

typedef enum {
	SCADA, Gateway, VirtualGroup
} SCADAConfigType;

typedef struct ANALOG_TAG_CONFIG {
    char * Name;
    char * Description;
    bool ReadOnly;
    int ArraySize;
    bool AlarmStatus;
    bool NeedLog;

	double SpanHigh;
    double SpanLow;
    char * EngineerUnit;
    int IntegerDisplayFormat;
    int FractionDisplayFormat;
    int HHPriority;
    double HHAlarmLimit;
    int HighPriority;
    double HighAlarmLimit; 
    int LowPriority;
    double LowAlarmLimit;
    int LLPriority;
    double LLAlarmLimit;
} TANALOG_TAG_CONFIG, * PTANALOG_TAG_CONFIG;

typedef struct DISCRETE_TAG_CONFIG {
    char * Name;
    char * Description;
    bool ReadOnly;
    int ArraySize;
    bool AlarmStatus;
    bool NeedLog;

    char * State0;
    char * State1;
    char * State2;
    char * State3;
    char * State4;
    char * State5;
    char * State6;
    char * State7;
    int State0AlarmPriority;
    int State1AlarmPriority;
    int State2AlarmPriority;
    int State3AlarmPriority;
    int State4AlarmPriority;
    int State5AlarmPriority;
    int State6AlarmPriority;
    int State7AlarmPriority;
} TDISCRETE_TAG_CONFIG, * PTDISCRETE_TAG_CONFIG;

typedef struct TEXT_TAG_CONFIG {
    char * Name;
    char * Description;
    bool ReadOnly;
    int ArraySize;
    bool AlarmStatus;
    bool NeedLog;
} TTEXT_TAG_CONFIG, * PTTEXT_TAG_CONFIG;

typedef struct DEVICE_CONFIG_STRUCT {

    int AnalogNumber;
    int DiscreteNumber;
    int TextNumber;

    char * Id;
    char * Name;
    int ComPortNumber;
    char * Type;
    char * Description;
    char * IP;
    int Port;

    PTANALOG_TAG_CONFIG AnalogTagList;
    PTDISCRETE_TAG_CONFIG DiscreteTagList;
    PTTEXT_TAG_CONFIG TextTagList;

} TDEVICE_CONFIG_STRUCT, * PTDEVICE_CONFIG_STRUCT;

typedef struct SCADA_CONFIG_STRUCT {

    int DeviceNumber;

	char * Id;
	char * Name;
    char * Description;
    char * PrimaryIP;
    char * BackupIP;
    int PrimaryPort;
    int BackupPort;
    SCADAConfigType Type;
    PTDEVICE_CONFIG_STRUCT DeviceList;

} TSCADA_CONFIG_STRUCT, * PTSCADA_CONFIG_STRUCT;
#endif


