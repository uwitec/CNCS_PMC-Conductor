;/////////////////////////////////////////////////////////////////////////
;//
;// Copyright (c) 1998 Telic Software International B.V.
;//
;// Module Name:
;//
;//    NTServiceEventLogMsg.h
;//
;// Abstract:
;//
;//    Messages for Event Logging for the service
;//
;//
;//Notes:
;//	   DO NOT EDIT THIS FILE BY HAND!
;//
;//    This file is GENERATED by the MC tool from the NTServiceEventLogMsg.mc file.
;//
;//////////////////////////////////////////////////////////////////////////
;
;
;#ifndef __NTSERVICEEVENTLOGMSG_H__
;#define __NTSERVICEEVENTLOGMSG_H__
;


MessageIdTypeDef=DWORD


SeverityNames=(Success=0x0:STATUS_SEVERITY_SUCCESS
				Informational=0x1:STATUS_SEVERITY_INFORMATIONAL
				Warning=0x2:STATUS_SEVERITY_WARNING
				Error=0x3:STATUS_SEVERITY_ERROR
				)

LanguageNames=(EnglishUS=0x401:MSG00401
				Dutch=0x113:MSG00113
				Neutral=0x0000:MSG00000
				)

MessageId=0x0	SymbolicName=MSG_INFO_1
Severity=Informational
Facility=Application
Language=English
PCMS - Net time adjustment service %1
.

MessageId=0x1	SymbolicName=MSG_WARNING_1
Severity=Warning
Facility=Application
Language=English
PCMS - Net time adjustment service %1
.

MessageId=0x2	SymbolicName=MSG_ERROR_1
Severity=Error
Facility=Application
Language=English
PCMS - Net time adjustment service %1
.

MessageId=0x3	SymbolicName=MSG_SUCCESS_1
Severity=Success
Facility=Application
Language=English
PCMS - Net time adjustment service %1
.


;#endif // __NTSERVICEEVENTLOGMSG_H__