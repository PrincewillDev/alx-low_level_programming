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
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of int: %zu bytes\n", sizeof(floatType));
	printf("Size of int: %zu bytes\n", sizeof(doubleType));
	printf("Size of int: %zu bytes\n", sizeof(charType));

	return (0);
}
