#include <stdio.h>
/**
 * main - Enter point
 *
 * Description: Ac programming languages
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'z')
	{
		putchar (d);
		d++;
	}
	putchar('\n');
	return (0);
}
