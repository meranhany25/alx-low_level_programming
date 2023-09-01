#include "main.h"

/**
 * *_strchr - fills memory with constant byte
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] >= '\0' ; l++)
	{
		if (s[l] == c)
		{
			return (s + l);
		}
	}

	return ('\0');
}
