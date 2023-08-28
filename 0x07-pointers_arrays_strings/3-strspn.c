#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, j;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (j = 0; accept[j] != s[l]; j++)
		{
			if (accept[j] == '\0')
				return (l);
		}
	}
	return (l);
}
