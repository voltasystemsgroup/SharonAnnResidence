#ifndef __S2_AMAZON_COVER_ART_SEARCH_INTERFACE_V3_0_H__
#define __S2_AMAZON_COVER_ART_SEARCH_INTERFACE_V3_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SEARCH_TIMEOUT_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SUBSCRIPT_ID_STRING_INPUT 0
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SUBSCRIPT_ID_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SUBSCRIPT_ID, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SUBSCRIPT_ID_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_ENCODED_SIGNATURE_STRING_INPUT 1
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_ENCODED_SIGNATURE_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __ENCODED_SIGNATURE, __S2_Amazon_Cover_Art_Search_Interface_v3_0_ENCODED_SIGNATURE_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_HOST_NAME_STRING_INPUT 2
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_HOST_NAME_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __HOST_NAME, __S2_Amazon_Cover_Art_Search_Interface_v3_0_HOST_NAME_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_ARTIST_NAME_STRING_INPUT 3
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_ARTIST_NAME_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __ARTIST_NAME, __S2_Amazon_Cover_Art_Search_Interface_v3_0_ARTIST_NAME_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_ALBUM_TITLE_STRING_INPUT 4
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_ALBUM_TITLE_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __ALBUM_TITLE, __S2_Amazon_Cover_Art_Search_Interface_v3_0_ALBUM_TITLE_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SEARCH_BUSY_DIG_OUTPUT 0
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_IMAGE_FOUND_DIG_OUTPUT 1
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_NO_IMAGE_FOUND_DIG_OUTPUT 2
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_DATA_MISSING_DIG_OUTPUT 3
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_DATA_SAME_AS_PREVIOUS_DIG_OUTPUT 4
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SEARCH_ERROR_DIG_OUTPUT 5


/*
* ANALOG_OUTPUT
*/
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_ARRAYSIZE_ANALOG_OUTPUT 0

#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SIGNATUREREQUEST_STRING_OUTPUT 1
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_BEST_HREF_STRING_OUTPUT 2
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SMALL_HREF_STRING_OUTPUT 3
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_MEDIUM_HREF_STRING_OUTPUT 4
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_LARGE_HREF_STRING_OUTPUT 5


/*
* Direct Socket Variables
*/

#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_TIMESERVER_SOCKET 6
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_TIMESERVER_STRING_MAX_LEN 1000
START_SOCKET_DEFINITION( S2_Amazon_Cover_Art_Search_Interface_v3_0, __TIMESERVER )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_Amazon_Cover_Art_Search_Interface_v3_0, SocketRxBuf, __S2_Amazon_Cover_Art_Search_Interface_v3_0_TIMESERVER_STRING_MAX_LEN );
};
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_AMAZON_SOCKET 7
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_AMAZON_STRING_MAX_LEN 2000
START_SOCKET_DEFINITION( S2_Amazon_Cover_Art_Search_Interface_v3_0, __AMAZON )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_Amazon_Cover_Art_Search_Interface_v3_0, SocketRxBuf, __S2_Amazon_Cover_Art_Search_Interface_v3_0_AMAZON_STRING_MAX_LEN );
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
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SARTISTNAME_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SARTISTNAME, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SARTISTNAME_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SALBUMTITLE_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SALBUMTITLE, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SALBUMTITLE_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_STEMP_STRING_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __STEMP, __S2_Amazon_Cover_Art_Search_Interface_v3_0_STEMP_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SLASTARTISTNAME_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SLASTARTISTNAME, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SLASTARTISTNAME_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SLASTALBUMTITLE_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SLASTALBUMTITLE, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SLASTALBUMTITLE_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SLARGEHREF_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SLARGEHREF, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SLARGEHREF_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SMEDIUMHREF_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SMEDIUMHREF, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SMEDIUMHREF_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_SSMALLHREF_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SSMALLHREF, __S2_Amazon_Cover_Art_Search_Interface_v3_0_SSMALLHREF_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_DATETIMEREF_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __DATETIMEREF, __S2_Amazon_Cover_Art_Search_Interface_v3_0_DATETIMEREF_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_OFFSETDATETIMEREF_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __OFFSETDATETIMEREF, __S2_Amazon_Cover_Art_Search_Interface_v3_0_OFFSETDATETIMEREF_STRING_MAX_LEN );
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_HEX_ARRAY_NUM_ELEMS 255
#define __S2_Amazon_Cover_Art_Search_Interface_v3_0_HEX_ARRAY_NUM_CHARS 3
CREATE_STRING_ARRAY( S2_Amazon_Cover_Art_Search_Interface_v3_0, __HEX, __S2_Amazon_Cover_Art_Search_Interface_v3_0_HEX_ARRAY_NUM_ELEMS, __S2_Amazon_Cover_Art_Search_Interface_v3_0_HEX_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __BRXOK;
   unsigned short __BSEARCHBUSY;
   unsigned short __BFOUNDIMAGE;
   unsigned short __BFOUNDSMALL;
   unsigned short __BFOUNDMEDIUM;
   unsigned short __BFOUNDLARGE;
   unsigned short __BURLSMALL;
   unsigned short __BURLMEDIUM;
   unsigned short __BURLLARGE;
   unsigned short __BMATCHLASTARTIST;
   unsigned short __BMATCHLASTALBUM;
   unsigned short __BNOARTIST;
   unsigned short __BNOALBUM;
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SARTISTNAME );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SALBUMTITLE );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __STEMP );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SLASTARTISTNAME );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SLASTALBUMTITLE );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SLARGEHREF );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SMEDIUMHREF );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SSMALLHREF );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __DATETIMEREF );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __OFFSETDATETIMEREF );
   DECLARE_STRING_ARRAY( S2_Amazon_Cover_Art_Search_Interface_v3_0, __HEX );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __SUBSCRIPT_ID );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __ENCODED_SIGNATURE );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __HOST_NAME );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __ARTIST_NAME );
   DECLARE_STRING_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0, __ALBUM_TITLE );
   DECLARE_SOCKET( S2_Amazon_Cover_Art_Search_Interface_v3_0, __TIMESERVER );
   DECLARE_SOCKET( S2_Amazon_Cover_Art_Search_Interface_v3_0, __AMAZON );
};

START_NVRAM_VAR_STRUCT( S2_Amazon_Cover_Art_Search_Interface_v3_0 )
{
};



#endif //__S2_AMAZON_COVER_ART_SEARCH_INTERFACE_V3_0_H__

