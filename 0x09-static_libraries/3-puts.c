#include "main.h"

/**
 * _puts - prints a string, followe by new line, to stdout
 * @str: string to print
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
