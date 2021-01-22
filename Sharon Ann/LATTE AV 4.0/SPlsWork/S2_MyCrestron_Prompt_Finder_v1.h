#ifndef __S2_MYCRESTRON_PROMPT_FINDER_V1_H__
#define __S2_MYCRESTRON_PROMPT_FINDER_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_MyCrestron_Prompt_Finder_v1_GO_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_MyCrestron_Prompt_Finder_v1_CONSOLERX$_STRING_INPUT 0
#define __S2_MyCrestron_Prompt_Finder_v1_CONSOLERX$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_MyCrestron_Prompt_Finder_v1, __CONSOLERX$, __S2_MyCrestron_Prompt_Finder_v1_CONSOLERX$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_MyCrestron_Prompt_Finder_v1_BUSY_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_MyCrestron_Prompt_Finder_v1_CONSOLETX$_STRING_OUTPUT 0
#define __S2_MyCrestron_Prompt_Finder_v1_PROMPT$_STRING_OUTPUT 1


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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_MyCrestron_Prompt_Finder_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __DONE;
   unsigned short __COUNTER;
   DECLARE_STRING_STRUCT( S2_MyCrestron_Prompt_Finder_v1, __CONSOLERX$ );
};

START_NVRAM_VAR_STRUCT( S2_MyCrestron_Prompt_Finder_v1 )
{
};



#endif //__S2_MYCRESTRON_PROMPT_FINDER_V1_H__

