#ifndef _LIBICONV_H
#define _LIBICONV_H
#include <stddef.h>
#ifndef WINICONV_CONST
# ifdef ICONV_CONST
#  define WINICONV_CONST ICONV_CONST
# else
#  define WINICONV_CONST const
# endif
#endif
#ifdef __cplusplus
extern "C" {
#endif

	typedef void* iconv_t;

	/**
	@brief Allocate descriptor for character set conversion
	@details The iconv_open function allocates a conversion descriptor suitable for converting byte sequences from character encoding fromcode to character encoding tocode.
	@param[in] tocode Target encoding
	@param[in] fromcode Source encoding
	@return The iconv_open() function returns a freshly allocated conversion descriptor. In case of error, it sets errno and returns (iconv_t)-1.
	*/
	iconv_t iconv_open(const char *tocode, const char *fromcode);

	/**
	@brief Deallocate descriptor for character set conversion
	@details The iconv_close function deallocates a conversion descriptor cd previously allocated using iconv_open.
	@return When successful, the iconv_close function returns 0. In case of error, it sets errno and returns -1. 
	*/
	int iconv_close(iconv_t cd);

	/**
	@brief Perform character set conversion
	@details The iconv function converts a sequence of characters in one character encoding to a sequence of characters in another character encoding.
	@param[in] cd A conversion descriptor, previously created by a call to iconv_open
	@param[in] inbuf The inbuf argument is the address of a variable that points to the first character of the input sequence
	@param[in] inbytesleft Number of bytes in inbuf buffer
	@param[in] outbuf The outbuf argument is the address of a variable that points to the first byte available in the output buffer
	@param[in] outbytesleft Number of bytes in outbuf buffer
	@returns The iconv function returns the number of characters converted in a nonreversible way during this call; reversible conversions are not counted. In case of error, it sets errno and returns (size_t)-1.
	*/
	size_t iconv(iconv_t cd, WINICONV_CONST char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);
	
#define libiconv_open iconv_open
#define libiconv_close iconv_close
#define libiconv iconv

#ifdef __cplusplus
}
#endif
#endif /* _LIBICONV_H */
