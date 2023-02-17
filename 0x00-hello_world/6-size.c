#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longint;
	long long int longint2;
	float floatType;

	/* sizeof evaluates the size of a variable */
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of longint: %lu byte(s)\n", (unsigned long)sizeof(longint));
	printf("Size of longlongint: %lu byte(s)\n", (unsigned long)sizeof(longint2));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(floatType));

	return (0);
}
