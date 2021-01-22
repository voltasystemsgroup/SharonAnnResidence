#ifndef __S2_CONTROL_SYSTEM_INFORMATION_V2_H__
#define __S2_CONTROL_SYSTEM_INFORMATION_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Control_System_Information_v2_GO_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_Control_System_Information_v2_PROMPTIN$_STRING_INPUT 0
#define __S2_Control_System_Information_v2_PROMPTIN$_STRING_MAX_LEN 12
CREATE_STRING_STRUCT( S2_Control_System_Information_v2, __PROMPTIN$, __S2_Control_System_Information_v2_PROMPTIN$_STRING_MAX_LEN );

#define __S2_Control_System_Information_v2_FROMCONSOLE$_BUFFER_INPUT 1
#define __S2_Control_System_Information_v2_FROMCONSOLE$_BUFFER_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Control_System_Information_v2, __FROMCONSOLE$, __S2_Control_System_Information_v2_FROMCONSOLE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Control_System_Information_v2_BUSY_DIG_OUTPUT 0
#define __S2_Control_System_Information_v2_ERROR_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/

#define __S2_Control_System_Information_v2_OPS$_STRING_OUTPUT 0
#define __S2_Control_System_Information_v2_MAC$_STRING_OUTPUT 1
#define __S2_Control_System_Information_v2_PROGRAMMER$_STRING_OUTPUT 2
#define __S2_Control_System_Information_v2_COMPILERREV$_STRING_OUTPUT 3
#define __S2_Control_System_Information_v2_SYMLIB$_STRING_OUTPUT 4
#define __S2_Control_System_Information_v2_IOLIB$_STRING_OUTPUT 5
#define __S2_Control_System_Information_v2_IOPCFG$_STRING_OUTPUT 6
#define __S2_Control_System_Information_v2_CRESTRONDB$_STRING_OUTPUT 7
#define __S2_Control_System_Information_v2_SOURCEENV$_STRING_OUTPUT 8
#define __S2_Control_System_Information_v2_TOCONSOLE$_STRING_OUTPUT 9


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Control_System_Information_v2_TEMPSTRING$_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Control_System_Information_v2, __TEMPSTRING$, __S2_Control_System_Information_v2_TEMPSTRING$_STRING_MAX_LEN );
#define __S2_Control_System_Information_v2_PROMPT$_STRING_MAX_LEN 14
CREATE_STRING_STRUCT( S2_Control_System_Information_v2, __PROMPT$, __S2_Control_System_Information_v2_PROMPT$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Control_System_Information_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __MARKER1;
   unsigned short __MARKER2;
   unsigned short __SEMAPHORE;
   unsigned short __BUSYINT;
   unsigned short __COUNTER;
   DECLARE_STRING_STRUCT( S2_Control_System_Information_v2, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_Control_System_Information_v2, __PROMPT$ );
   DECLARE_STRING_STRUCT( S2_Control_System_Information_v2, __PROMPTIN$ );
   DECLARE_STRING_STRUCT( S2_Control_System_Information_v2, __FROMCONSOLE$ );
};

START_NVRAM_VAR_STRUCT( S2_Control_System_Information_v2 )
{
};

DEFINE_WAITEVENT( S2_Control_System_Information_v2, RESPONSEWAIT );


#endif //__S2_CONTROL_SYSTEM_INFORMATION_V2_H__

