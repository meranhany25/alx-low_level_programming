#include "main.h"

/**
 *_memcpy - copies memory area
 *
 *@dest:destination
 *@src:source
 *@n:no. of bytes
 *Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l;

	for (l = 0; n > 0; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}
