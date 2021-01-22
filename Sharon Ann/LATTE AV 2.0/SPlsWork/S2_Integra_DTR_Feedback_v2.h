#ifndef __S2_INTEGRA_DTR_FEEDBACK_V2_H__
#define __S2_INTEGRA_DTR_FEEDBACK_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_Integra_DTR_Feedback_v2_PASSWORD_KEY_DIG_INPUT 0
#define __S2_Integra_DTR_Feedback_v2_PASSWORD_KEY_ARRAY_LENGTH 13

/*
* ANALOG_INPUT
*/


#define __S2_Integra_DTR_Feedback_v2_FROM_DEVICE$_BUFFER_INPUT 0
#define __S2_Integra_DTR_Feedback_v2_FROM_DEVICE$_BUFFER_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __FROM_DEVICE$, __S2_Integra_DTR_Feedback_v2_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Integra_DTR_Feedback_v2_INPUT_SIRIUS_PASSWORD_DIG_OUTPUT 0
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_PASSWORD_WRONG_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/
#define __S2_Integra_DTR_Feedback_v2_SLEEP_TIME_ANALOG_OUTPUT 0
#define __S2_Integra_DTR_Feedback_v2_MAIN_VOLUME_IN_ANALOG_OUTPUT 1
#define __S2_Integra_DTR_Feedback_v2_ZONE_2_VOLUME_IN_ANALOG_OUTPUT 2
#define __S2_Integra_DTR_Feedback_v2_ZONE_3_VOLUME_IN_ANALOG_OUTPUT 3

#define __S2_Integra_DTR_Feedback_v2_XM_CHANNEL_NAME$_STRING_OUTPUT 4
#define __S2_Integra_DTR_Feedback_v2_XM_CHANNEL_NUMBER$_STRING_OUTPUT 5
#define __S2_Integra_DTR_Feedback_v2_XM_TITLE$_STRING_OUTPUT 6
#define __S2_Integra_DTR_Feedback_v2_XM_ARTIST$_STRING_OUTPUT 7
#define __S2_Integra_DTR_Feedback_v2_XM_CATEGORY$_STRING_OUTPUT 8
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_CHANNEL_NAME$_STRING_OUTPUT 9
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_CHANNEL_NUMBER$_STRING_OUTPUT 10
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_TITLE$_STRING_OUTPUT 11
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_ARTIST$_STRING_OUTPUT 12
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_CATEGORY$_STRING_OUTPUT 13
#define __S2_Integra_DTR_Feedback_v2_TUNER_FREQUENCY$_STRING_OUTPUT 14
#define __S2_Integra_DTR_Feedback_v2_TUNER_ZONE_FREQUENCY$_STRING_OUTPUT 15
#define __S2_Integra_DTR_Feedback_v2_TUNER_ZONE_3_FREQUENCY$_STRING_OUTPUT 16
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_PASSWORD$_STRING_OUTPUT 17
#define __S2_Integra_DTR_Feedback_v2_SIRIUS_PASSWORD_STARS$_STRING_OUTPUT 18
#define __S2_Integra_DTR_Feedback_v2_HD_ARTIST$_STRING_OUTPUT 19
#define __S2_Integra_DTR_Feedback_v2_HD_CHANNEL_NAME$_STRING_OUTPUT 20
#define __S2_Integra_DTR_Feedback_v2_HD_TITLE$_STRING_OUTPUT 21
#define __S2_Integra_DTR_Feedback_v2_HD_RADIO_DETAIL$_STRING_OUTPUT 22
#define __S2_Integra_DTR_Feedback_v2_HD_TUNER_STATUS$_STRING_OUTPUT 23
#define __S2_Integra_DTR_Feedback_v2_TO_DEVICE$_STRING_OUTPUT 24


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
#define __S2_Integra_DTR_Feedback_v2_STEMP_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STEMP, __S2_Integra_DTR_Feedback_v2_STEMP_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SXMCHNAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMCHNAME, __S2_Integra_DTR_Feedback_v2_SXMCHNAME_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SXMCHNUM_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMCHNUM, __S2_Integra_DTR_Feedback_v2_SXMCHNUM_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SXMTITLE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMTITLE, __S2_Integra_DTR_Feedback_v2_SXMTITLE_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SXMARTIST_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMARTIST, __S2_Integra_DTR_Feedback_v2_SXMARTIST_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SXMCAT_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMCAT, __S2_Integra_DTR_Feedback_v2_SXMCAT_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SSIRIUSCHNAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSCHNAME, __S2_Integra_DTR_Feedback_v2_SSIRIUSCHNAME_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SSIRIUSCHNUM_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSCHNUM, __S2_Integra_DTR_Feedback_v2_SSIRIUSCHNUM_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SSIRIUSTITLE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSTITLE, __S2_Integra_DTR_Feedback_v2_SSIRIUSTITLE_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SSIRIUSARTIST_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSARTIST, __S2_Integra_DTR_Feedback_v2_SSIRIUSARTIST_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SSIRIUSCAT_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSCAT, __S2_Integra_DTR_Feedback_v2_SSIRIUSCAT_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_STEMP1_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STEMP1, __S2_Integra_DTR_Feedback_v2_STEMP1_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_STUNER_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STUNER, __S2_Integra_DTR_Feedback_v2_STUNER_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_STUNERZONE_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STUNERZONE, __S2_Integra_DTR_Feedback_v2_STUNERZONE_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_STUNER3_STRING_MAX_LEN 24
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STUNER3, __S2_Integra_DTR_Feedback_v2_STUNER3_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SPASSWORD_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SPASSWORD, __S2_Integra_DTR_Feedback_v2_SPASSWORD_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SPASSSTARS_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SPASSSTARS, __S2_Integra_DTR_Feedback_v2_SPASSSTARS_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SHDTITLE_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDTITLE, __S2_Integra_DTR_Feedback_v2_SHDTITLE_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SHDARTIST_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDARTIST, __S2_Integra_DTR_Feedback_v2_SHDARTIST_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SHDCHNAME_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDCHNAME, __S2_Integra_DTR_Feedback_v2_SHDCHNAME_STRING_MAX_LEN );
#define __S2_Integra_DTR_Feedback_v2_SHDDETAIL_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDDETAIL, __S2_Integra_DTR_Feedback_v2_SHDDETAIL_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Integra_DTR_Feedback_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __PASSWORD_KEY );
   unsigned short __ITEMP;
   unsigned short __IPASSNEEDED;
   unsigned short __ISLEEP;
   unsigned short __IFLAG1;
   unsigned short __A;
   unsigned short __IVOL;
   unsigned short __IVOL2;
   unsigned short __IVOL3;
   unsigned short __ITEMP1;
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STEMP );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMCHNAME );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMCHNUM );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMTITLE );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMARTIST );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SXMCAT );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSCHNAME );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSCHNUM );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSTITLE );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSARTIST );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SSIRIUSCAT );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STEMP1 );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STUNER );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STUNERZONE );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __STUNER3 );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SPASSWORD );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SPASSSTARS );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDTITLE );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDARTIST );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDCHNAME );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __SHDDETAIL );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Feedback_v2, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Integra_DTR_Feedback_v2 )
{
};



#endif //__S2_INTEGRA_DTR_FEEDBACK_V2_H__

