#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A c programming languages
 *
 * Return: Always 0 (Sussecc)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit <= 9)
		{
			putchar(',');
		}	putchar(' ');
	}
	putchar('\n');

	return (0);
}
