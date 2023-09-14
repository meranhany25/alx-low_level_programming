#include "function_ponters.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for the school students
 * @argc: the number of argc
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("Erorr\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Erorr\n"), exit(2);
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
