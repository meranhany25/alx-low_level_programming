#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	prinft("Size of a char: %d byte(s)", sizeof(char));
	prinft("Size of an int: %d byte(s)", sizeof(int));
	prinft("Size of a long int: %d byte(s)", sizeof(long int));
	prinft("Size of a long long int: %d byte(s)", sizeof(long long int));
	prinft("Size of a float: %d byte(s)", sizeof(float));
	return (0);
}
