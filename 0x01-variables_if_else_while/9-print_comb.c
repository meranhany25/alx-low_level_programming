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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
		}	putchar(' ');
	}
	putchar('\n');
	return (0);
}
