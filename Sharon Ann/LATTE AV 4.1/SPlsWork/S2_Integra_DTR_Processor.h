#ifndef __S2_INTEGRA_DTR_PROCESSOR_H__
#define __S2_INTEGRA_DTR_PROCESSOR_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Integra_DTR_Processor_VOLUME_UP_DIG_INPUT 0
#define __S2_Integra_DTR_Processor_VOLUME_DOWN_DIG_INPUT 1
#define __S2_Integra_DTR_Processor_VOLUME_DONE_DIG_INPUT 2

#define __S2_Integra_DTR_Processor_TUNER_KEY_DIG_INPUT 3
#define __S2_Integra_DTR_Processor_TUNER_KEY_ARRAY_LENGTH 13

/*
* ANALOG_INPUT
*/
#define __S2_Integra_DTR_Processor_VOLUME_IN_ANALOG_INPUT 0
#define __S2_Integra_DTR_Processor_SELECTED_TUNER_ANALOG_INPUT 1


#define __S2_Integra_DTR_Processor_TUNER_COMMAND$_BUFFER_INPUT 2
#define __S2_Integra_DTR_Processor_TUNER_COMMAND$_BUFFER_MAX_LEN 6
CREATE_STRING_STRUCT( S2_Integra_DTR_Processor, __TUNER_COMMAND$, __S2_Integra_DTR_Processor_TUNER_COMMAND$_BUFFER_MAX_LEN );
#define __S2_Integra_DTR_Processor_VOLUME_COMMAND$_BUFFER_INPUT 3
#define __S2_Integra_DTR_Processor_VOLUME_COMMAND$_BUFFER_MAX_LEN 6
CREATE_STRING_STRUCT( S2_Integra_DTR_Processor, __VOLUME_COMMAND$, __S2_Integra_DTR_Processor_VOLUME_COMMAND$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Integra_DTR_Processor_VOLUME_FB_ANALOG_OUTPUT 0

#define __S2_Integra_DTR_Processor_TUNER_FREQUENCY$_STRING_OUTPUT 1
#define __S2_Integra_DTR_Processor_TO_DEVICE$_STRING_OUTPUT 2


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
#define __S2_Integra_DTR_Processor_SFREQ_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_Integra_DTR_Processor, __SFREQ, __S2_Integra_DTR_Processor_SFREQ_STRING_MAX_LEN );
#define __S2_Integra_DTR_Processor_STUNER_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_Integra_DTR_Processor, __STUNER, __S2_Integra_DTR_Processor_STUNER_STRING_MAX_LEN );
#define __S2_Integra_DTR_Processor_SVOLUME_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_Integra_DTR_Processor, __SVOLUME, __S2_Integra_DTR_Processor_SVOLUME_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Integra_DTR_Processor )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __TUNER_KEY );
   unsigned short __IVOL;
   unsigned short __IVOLCHANGING;
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Processor, __SFREQ );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Processor, __STUNER );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Processor, __SVOLUME );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Processor, __TUNER_COMMAND$ );
   DECLARE_STRING_STRUCT( S2_Integra_DTR_Processor, __VOLUME_COMMAND$ );
};

START_NVRAM_VAR_STRUCT( S2_Integra_DTR_Processor )
{
};



#endif //__S2_INTEGRA_DTR_PROCESSOR_H__

