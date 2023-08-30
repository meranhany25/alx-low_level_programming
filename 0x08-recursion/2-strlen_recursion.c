#include "main.h"

/**
 * _strlen_recursion - return the lenghth of string
 * @s: pointer string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int l = 0;

if (*s > '\0')
{
	l += _strlen_recursion(s + 1);
}

return (l);
}
