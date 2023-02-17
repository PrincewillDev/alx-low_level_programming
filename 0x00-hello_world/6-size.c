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
	double doubleType;
	char charType;

	/* sizeof evealuates the size of a variable */
	puts("Size of int: %zu bytes", sizeof(intType));
	puts("Size of int: %zu bytes", sizeof(floatType));
	puts("Size of int: %zu bytes", sizeof(doubleType));
	puts("Size of int: %zu bytes", sizeof(charType));

	return (0);
}
