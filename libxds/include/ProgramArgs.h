/* XDS v2.60: Copyright (c) 1999-2011 Excelsior, LLC. All Rights Reserved. */
/* Generated by XDS Modula-2 to ANSI C v4.20 translator */

#ifndef ProgramArgs_H_
#define ProgramArgs_H_
#ifndef X2C_H_
#include "X2C.h"
#endif
#ifndef IOChan_H_
#include "IOChan.h"
#endif

typedef IOChan_ChanId ProgramArgs_ChanId;

extern IOChan_ChanId ProgramArgs_ArgChan(void);

extern X2C_BOOLEAN ProgramArgs_IsArgPresent(void);

extern void ProgramArgs_NextArg(void);


extern void ProgramArgs_BEGIN(void);


#endif /* ProgramArgs_H_ */