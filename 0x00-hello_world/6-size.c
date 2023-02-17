#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longint;
	long long int longint2;
	char charType;

	/* sizeof evaluates the size of a variable */
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	printf("Size of long_int: %lu byte(s)\n", (unsigned long)sizeof(longint));
	printf("Size of long_longint: %lu byte(s)\n", (unsigned long)sizeof(longint2));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(charType));

	return (0);
}
