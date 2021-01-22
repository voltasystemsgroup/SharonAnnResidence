#ifndef __S2_BASE_64_BIT_ENCODER_V1_0_H__
#define __S2_BASE_64_BIT_ENCODER_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_Base_64_Bit_Encoder_v1_0_STRTOENCODE_STRING_INPUT 0
#define __S2_Base_64_Bit_Encoder_v1_0_STRTOENCODE_STRING_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_Base_64_Bit_Encoder_v1_0, __STRTOENCODE, __S2_Base_64_Bit_Encoder_v1_0_STRTOENCODE_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Base_64_Bit_Encoder_v1_0_ENCODEDSTRING_STRING_OUTPUT 0
#define __S2_Base_64_Bit_Encoder_v1_0_SIGNATURESTRING_STRING_OUTPUT 1


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
#define __S2_Base_64_Bit_Encoder_v1_0_HEX_ARRAY_NUM_ELEMS 255
#define __S2_Base_64_Bit_Encoder_v1_0_HEX_ARRAY_NUM_CHARS 3
CREATE_STRING_ARRAY( S2_Base_64_Bit_Encoder_v1_0, __HEX, __S2_Base_64_Bit_Encoder_v1_0_HEX_ARRAY_NUM_ELEMS, __S2_Base_64_Bit_Encoder_v1_0_HEX_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Base_64_Bit_Encoder_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_ARRAY( S2_Base_64_Bit_Encoder_v1_0, __HEX );
   DECLARE_STRING_STRUCT( S2_Base_64_Bit_Encoder_v1_0, __STRTOENCODE );
};

START_NVRAM_VAR_STRUCT( S2_Base_64_Bit_Encoder_v1_0 )
{
};



#endif //__S2_BASE_64_BIT_ENCODER_V1_0_H__

