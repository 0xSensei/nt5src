/*++

Copyright (C) 1999-2000 Microsoft Corporation

Module Name:

    logman.h

Abstract:

    This file contains constants and definitions for logman.exe


--*/

#ifndef _LOGMAN_H_
#define _LOGMAN_H_

#include "logmmsg.h"

#define IDS_DEFAULT_CTRLOG_QUERY_NAME   300
#define IDS_DEFAULT_CTRLOG_CPU_PATH     301
#define IDS_DEFAULT_CTRLOG_MEMORY_PATH  302
#define IDS_DEFAULT_CTRLOG_DISK_PATH    303
#define IDS_DEFAULT_CTRLOG_COMMENT      304

#define FIRST_STATUS_VALUE                  6000

#define IDS_LOGMAN_INVALID_COMPUTER         FIRST_STATUS_VALUE
#define IDS_LOGMAN_STARTNAME_INVALID        FIRST_STATUS_VALUE+1
#define IDS_LOGMAN_STOPNAME_INVALID         FIRST_STATUS_VALUE+2
#define IDS_LOGMAN_INVALID_SETTINGS         FIRST_STATUS_VALUE+3
#define IDS_LOGMAN_INVALID_COMMAND          FIRST_STATUS_VALUE+4
#define IDS_LOGMAN_SETTINGS_FILE_NOT_OPEN   FIRST_STATUS_VALUE+5
#define IDS_LOGMAN_NO_SYSMON_OBJECT         FIRST_STATUS_VALUE+6 
#define IDS_LOGMAN_DUP_QUERY_NAME           FIRST_STATUS_VALUE+7  
#define IDS_LOGMAN_OVERWRITE_DUP_QUERY      FIRST_STATUS_VALUE+8
#define IDS_LOGMAN_PROCESSING_COMPLETE      FIRST_STATUS_VALUE+9
#define IDS_LOGMAN_NO_COMPUTER_CONNECT      FIRST_STATUS_VALUE+10
#define IDS_LOGMAN_SETTINGS_FILE_NOT_LOADED FIRST_STATUS_VALUE+11
#define IDS_LOGMAN_NO_OBJECT_LOGTYPE        FIRST_STATUS_VALUE+12
#define IDS_LOGMAN_NO_OBJECT_NAME           FIRST_STATUS_VALUE+13
#define IDS_LOGMAN_QUERY_CONFIG_SUCCESS     FIRST_STATUS_VALUE+14
#define IDS_LOGMAN_START_TIMED_OUT          FIRST_STATUS_VALUE+15
#define IDS_LOGMAN_STOP_TIMED_OUT           FIRST_STATUS_VALUE+16

#define IDS_LOGMAN_NO_QUERY_CONNECT         FIRST_STATUS_VALUE+17
#define IDS_LOGMAN_INVALID_TOKEN            FIRST_STATUS_VALUE+18
#define IDS_LOGMAN_START_FAILED             FIRST_STATUS_VALUE+19
#define IDS_LOGMAN_STOP_FAILED              FIRST_STATUS_VALUE+20

#define IDS_LOGMAN_REQUIRED_PROP_MISSING    FIRST_STATUS_VALUE+21
#define IDS_LOGMAN_REQUIRED_PROP_INVALID    FIRST_STATUS_VALUE+22
#define IDS_LOGMAN_NONREQ_PROP_MISSING      FIRST_STATUS_VALUE+23
#define IDS_LOGMAN_NONREQ_PROP_INVALID      FIRST_STATUS_VALUE+24
#define IDS_LOGMAN_OUT_OF_RANGE             FIRST_STATUS_VALUE+25
#define IDS_LOGMAN_REG_ACCESS_DENIED        FIRST_STATUS_VALUE+26
#define IDS_LOGMAN_INSTALL_ACCESS_DENIED    FIRST_STATUS_VALUE+27
#define IDS_LOGMAN_INSTALL_FAILURE          FIRST_STATUS_VALUE+28
#define IDS_LOGMAN_QUERY_START_SUCCESS      FIRST_STATUS_VALUE+29
#define IDS_LOGMAN_QUERY_STOP_SUCCESS       FIRST_STATUS_VALUE+30
#define IDS_LOGMAN_INVALID_PARAM            FIRST_STATUS_VALUE+31
#define IDS_LOGMAN_INVALID_QUERY_NAME       FIRST_STATUS_VALUE+32
#define IDS_LOGMAN_TOO_MANY_COMMANDS        FIRST_STATUS_VALUE+33
#define IDS_LOGMAN_DISPLAY_HELP             FIRST_STATUS_VALUE+34   // No message

// Current max = 40 in utils.h ::IsLogManMessage()
#endif // _LOGMAN_H_

