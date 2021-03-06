#ifndef __S2_CRESTRON_NAME_RESOLUTION_ENGINE_V1_0_3_H__
#define __S2_CRESTRON_NAME_RESOLUTION_ENGINE_V1_0_3_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_DEBUG_LOGIC_DIG_INPUT 0
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_DEBUG_FORCE_REGISTER_DIG_INPUT 1
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_CLEAR_STORED_DATA_DIG_INPUT 2
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_CHECK_REGISTER_IP_DIG_INPUT 3


/*
* ANALOG_INPUT
*/

#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_PASSWORD$_STRING_INPUT 0
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_PASSWORD$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __PASSWORD$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_PASSWORD$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_DOMAIN$_STRING_INPUT 1
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_DOMAIN$_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __DOMAIN$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_DOMAIN$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_MAC_ADDRESS$_STRING_INPUT 2
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_MAC_ADDRESS$_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __MAC_ADDRESS$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_MAC_ADDRESS$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_OS_VERSION$_STRING_INPUT 3
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_OS_VERSION$_STRING_MAX_LEN 75
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __OS_VERSION$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_OS_VERSION$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_PROGRAMMER$_STRING_INPUT 4
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_PROGRAMMER$_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __PROGRAMMER$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_PROGRAMMER$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_COMPILER_REV$_STRING_INPUT 5
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_COMPILER_REV$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __COMPILER_REV$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_COMPILER_REV$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_SYMLIB_REV$_STRING_INPUT 6
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_SYMLIB_REV$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __SYMLIB_REV$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_SYMLIB_REV$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_IOLIB_REV$_STRING_INPUT 7
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_IOLIB_REV$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __IOLIB_REV$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_IOLIB_REV$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_IOPCFG_REV$_STRING_INPUT 8
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_IOPCFG_REV$_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __IOPCFG_REV$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_IOPCFG_REV$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_CRESTRONDB$_STRING_INPUT 9
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_CRESTRONDB$_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __CRESTRONDB$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_CRESTRONDB$_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_SOURCE_ENV$_STRING_INPUT 10
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_SOURCE_ENV$_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __SOURCE_ENV$, __S2_Crestron_Name_Resolution_Engine_v1_0_3_SOURCE_ENV$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_USE_SLOW_CLOCK_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_MODULE_STATUS$_STRING_OUTPUT 0
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_ERROR_MESSAGE$_STRING_OUTPUT 1
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_IP_ADDRESS$_STRING_OUTPUT 2
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_LAST_IP_ADDRESS_CHECK$_STRING_OUTPUT 3
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_LAST_IP_ADDRESS_CHANGE$_STRING_OUTPUT 4
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_LAST_IP_ADDRESS_REGISTER$_STRING_OUTPUT 5


/*
* Direct Socket Variables
*/

#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_TCPCLIENT_SOCKET 11
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_TCPCLIENT_STRING_MAX_LEN 65534
START_SOCKET_DEFINITION( S2_Crestron_Name_Resolution_Engine_v1_0_3, __TCPCLIENT )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_Crestron_Name_Resolution_Engine_v1_0_3, SocketRxBuf, __S2_Crestron_Name_Resolution_Engine_v1_0_3_TCPCLIENT_STRING_MAX_LEN );
};



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
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SNEWMACADDRESS_STRING_MAX_LEN 18
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SNEWMACADDRESS, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SNEWMACADDRESS_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SNEWIPADDRESS_STRING_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SNEWIPADDRESS, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SNEWIPADDRESS_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_STCPDATA_STRING_MAX_LEN 65534
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_STCPDATA, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_STCPDATA_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SINITIALIZED_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SINITIALIZED, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SINITIALIZED_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTIPADDRESS_STRING_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTIPADDRESS, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTIPADDRESS_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHECKEDIPDATE_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHECKEDIPDATE, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHECKEDIPDATE_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHECKEDIPTIME_STRING_MAX_LEN 8
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHECKEDIPTIME, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHECKEDIPTIME_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHANGEDIPDATE_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHANGEDIPDATE, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHANGEDIPDATE_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHANGEDIPTIME_STRING_MAX_LEN 8
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHANGEDIPTIME, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTCHANGEDIPTIME_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTUPDATEDDATE_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTUPDATEDDATE, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTUPDATEDDATE_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTUPDATEDTIME_STRING_MAX_LEN 8
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTUPDATEDTIME, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTUPDATEDTIME_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_STRASH_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_STRASH, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_STRASH_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTPASSWORD_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTPASSWORD, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTPASSWORD_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTDOMAIN_STRING_MAX_LEN 500
CREATE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTDOMAIN, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SLASTDOMAIN_STRING_MAX_LEN );
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SBASE64_SUBST_ARRAY_NUM_ELEMS 64
#define __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SBASE64_SUBST_ARRAY_NUM_CHARS 1
CREATE_STRING_ARRAY( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SBASE64_SUBST, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SBASE64_SUBST_ARRAY_NUM_ELEMS, __S2_Crestron_Name_Resolution_Engine_v1_0_3_G_SBASE64_SUBST_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __G_BRXOK1;
   unsigned short __G_BRESTART;
   unsigned short __G_IMODULESTATUS;
   unsigned short __G_ICRLFCOUNT;
   short __G_NSTATUS;
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SNEWMACADDRESS );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SNEWIPADDRESS );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_STCPDATA );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_STRASH );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTPASSWORD );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTDOMAIN );
   DECLARE_STRING_ARRAY( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SBASE64_SUBST );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __PASSWORD$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __DOMAIN$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __MAC_ADDRESS$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __OS_VERSION$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __PROGRAMMER$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __COMPILER_REV$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __SYMLIB_REV$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __IOLIB_REV$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __IOPCFG_REV$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __CRESTRONDB$ );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __SOURCE_ENV$ );
   DECLARE_SOCKET( S2_Crestron_Name_Resolution_Engine_v1_0_3, __TCPCLIENT );
};

START_NVRAM_VAR_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3 )
{
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SINITIALIZED );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTIPADDRESS );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHECKEDIPDATE );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHECKEDIPTIME );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHANGEDIPDATE );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTCHANGEDIPTIME );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTUPDATEDDATE );
   DECLARE_STRING_STRUCT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __G_SLASTUPDATEDTIME );
   unsigned short __G_BNEEDREGISTERIPADDRESS;
};

DEFINE_WAITEVENT( S2_Crestron_Name_Resolution_Engine_v1_0_3, HTTPTIMEOUT );
DEFINE_WAITEVENT( S2_Crestron_Name_Resolution_Engine_v1_0_3, __SPLS_TMPVAR__WAITLABEL_0__ );


#endif //__S2_CRESTRON_NAME_RESOLUTION_ENGINE_V1_0_3_H__

