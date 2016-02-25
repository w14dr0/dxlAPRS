/* XDS v2.60: Copyright (c) 1999-2011 Excelsior, LLC. All Rights Reserved. */
/* Generated by XDS Modula-2 to ANSI C v4.20 translator */

#ifndef ShtHeap_H_
#define ShtHeap_H_
#ifndef X2C_H_
#include "X2C.h"
#endif

typedef X2C_CARD32 ShtHeap_Size;

extern X2C_BOOLEAN ShtHeap_Clear;

extern X2C_BOOLEAN ShtHeap_Check;

extern X2C_BOOLEAN ShtHeap_Debug;

#define ShtHeap_Align 4

extern void ShtHeap_Initialize(X2C_ADDRESS, X2C_CARD32);

extern void ShtHeap_Allocate(X2C_ADDRESS, X2C_ADDRESS *, X2C_CARD32);

extern void ShtHeap_Free(X2C_ADDRESS, X2C_ADDRESS *, X2C_CARD32);

extern X2C_CARD32 ShtHeap_Largest(X2C_ADDRESS);

extern X2C_CARD32 ShtHeap_Total(X2C_ADDRESS);

extern void ShtHeap_Test(X2C_ADDRESS);

extern X2C_BOOLEAN ShtHeap_IsShtHeapException(void);


extern void ShtHeap_BEGIN(void);


#endif /* ShtHeap_H_ */