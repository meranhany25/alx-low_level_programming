#include "main.h"

/**
 * *_strpbrk - searches a string of any of set of byte
 * @s: string
 * @accept: string to match
 * Return: pointer to byte in s the matches one of bytes in accept
 * on NULL no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int l, j;
	char *p;

	l = 0;
	while (s[l] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[l])
			{
				p = &s[l];
				return (p);
			}
			j++;
		}
		l++;
	}
	return (0);
}
