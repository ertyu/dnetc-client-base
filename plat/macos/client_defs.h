/*
 * Copyright distributed.net 1997-2002 - All Rights Reserved
 * For use in distributed.net projects only.
 * Any other distribution or use of this source violates copyright.
 *
 * This header file prototypes the macos client CUSTOM functions 
 * referenced by code in the ./common/ subdirectory.
 *
 * @(#)$Id: client_defs.h,v 1.2 2002/09/02 00:35:50 andreasb Exp $
*/ 

#ifndef __MACCLIENT_DEFS_H__
#define __MACCLIENT_DEFS_H__

#include <console.h> // clrsrc,...

int macosTickSleep(unsigned long tickcount);
void macosSmartYield(unsigned int priority);
int macosConGetCh(void);
int macosConOut(const char *msg);
void macosInitialize(void);
int macosInitializeConsole(int runhidden, int runmodes);
long macosFindProc (const char* name);
int macosCPUTemp(void);
void macosAlert( const char *cname, int deadly );
char * strdup(char * str);

#endif /* __MACCLIENT_DEFS_H__ */