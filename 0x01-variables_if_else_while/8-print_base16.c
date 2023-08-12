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
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
