#include "main.h"

/**
 * _memset - fills memmory with constantbyte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m;

	for (m = 0; n > 0; m++, n--)
	{
		s[m] = b;
	}

	return (s);
}
