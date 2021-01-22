#ifndef __S2_CONSOLE_PROCESSOR_V5__H__
#define __S2_CONSOLE_PROCESSOR_V5__H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Console_Processor_v5__DEBUG_DIG_INPUT 0
#define __S2_Console_Processor_v5__EN_CREATE_64K_ON_CHECK_NVRAMDISK_DIG_INPUT 1
#define __S2_Console_Processor_v5__EN_CREATE_128K_ON_CHECK_NVRAMDISK_DIG_INPUT 2
#define __S2_Console_Processor_v5__GET_PROCESSOR_TYPE_DIG_INPUT 3
#define __S2_Console_Processor_v5__GET_OS_INFO_DIG_INPUT 4
#define __S2_Console_Processor_v5__GET_PROGRAM_INFO_DIG_INPUT 5
#define __S2_Console_Processor_v5__GET_ETHER_INFO_DIG_INPUT 6
#define __S2_Console_Processor_v5__CHECK_NVRAMDISK_DIG_INPUT 7
#define __S2_Console_Processor_v5__CREATE_NVRAMDISK_64K_DIG_INPUT 8
#define __S2_Console_Processor_v5__CREATE_NVRAMDISK_128K_DIG_INPUT 9


/*
* ANALOG_INPUT
*/


#define __S2_Console_Processor_v5__CONSOLE_RX$_BUFFER_INPUT 0
#define __S2_Console_Processor_v5__CONSOLE_RX$_BUFFER_MAX_LEN 25000
CREATE_STRING_STRUCT( S2_Console_Processor_v5_, __CONSOLE_RX$, __S2_Console_Processor_v5__CONSOLE_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Console_Processor_v5__LINK_STATUS_DIG_OUTPUT 0
#define __S2_Console_Processor_v5__SYSTEM_SUPPORTS_COMPACT_FLASH_DIG_OUTPUT 1
#define __S2_Console_Processor_v5__NVRAMDISK_PRESENT_DIG_OUTPUT 2


/*
* ANALOG_OUTPUT
*/
#define __S2_Console_Processor_v5__MODULE_STATUS_ANALOG_OUTPUT 0

#define __S2_Console_Processor_v5__CONSOLE_TX$_STRING_OUTPUT 1
#define __S2_Console_Processor_v5__PROCESSOR_TYPE$_STRING_OUTPUT 2
#define __S2_Console_Processor_v5__OS_VERSION$_STRING_OUTPUT 3
#define __S2_Console_Processor_v5__PROGRAM_FILE$_STRING_OUTPUT 4
#define __S2_Console_Processor_v5__COMPILER_REV$_STRING_OUTPUT 5
#define __S2_Console_Processor_v5__SYMLIB_REV$_STRING_OUTPUT 6
#define __S2_Console_Processor_v5__IOLIB_REV$_STRING_OUTPUT 7
#define __S2_Console_Processor_v5__IOPCFG_REV$_STRING_OUTPUT 8
#define __S2_Console_Processor_v5__CRESTRONDB$_STRING_OUTPUT 9
#define __S2_Console_Processor_v5__SOURCE_ENV$_STRING_OUTPUT 10
#define __S2_Console_Processor_v5__LINK_SPEED$_STRING_OUTPUT 11
#define __S2_Console_Processor_v5__FULL_DUPLEX$_STRING_OUTPUT 12
#define __S2_Console_Processor_v5__MAC_ADDRESS$_STRING_OUTPUT 13
#define __S2_Console_Processor_v5__IP_ADDRESS$_STRING_OUTPUT 14
#define __S2_Console_Processor_v5__SUBNET_MASK$_STRING_OUTPUT 15
#define __S2_Console_Processor_v5__DEFAULT_GATEWAY$_STRING_OUTPUT 16
#define __S2_Console_Processor_v5__HOST_NAME$_STRING_OUTPUT 17
#define __S2_Console_Processor_v5__NVRAMDISK_STATUS$_STRING_OUTPUT 18


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
#define __S2_Console_Processor_v5__G_STEMPDATA_STRING_MAX_LEN 1000
CREATE_STRING_STRUCT( S2_Console_Processor_v5_, __G_STEMPDATA, __S2_Console_Processor_v5__G_STEMPDATA_STRING_MAX_LEN );
#define __S2_Console_Processor_v5__G_SCFSUPPORTEDTYPES_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Console_Processor_v5_, __G_SCFSUPPORTEDTYPES, __S2_Console_Processor_v5__G_SCFSUPPORTEDTYPES_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Console_Processor_v5_ )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __G_BRXOK;
   unsigned short __G_B3SERIES;
   unsigned short __G_BNEEDMACADDRESS;
   unsigned short __G_BNEEDTOCREATENVRAMDISK;
   DECLARE_STRING_STRUCT( S2_Console_Processor_v5_, __G_STEMPDATA );
   DECLARE_STRING_STRUCT( S2_Console_Processor_v5_, __G_SCFSUPPORTEDTYPES );
   DECLARE_STRING_STRUCT( S2_Console_Processor_v5_, __CONSOLE_RX$ );
};

START_NVRAM_VAR_STRUCT( S2_Console_Processor_v5_ )
{
};



#endif //__S2_CONSOLE_PROCESSOR_V5__H__

