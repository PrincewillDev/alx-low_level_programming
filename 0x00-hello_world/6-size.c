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
	long int li;
	long long int li2;
	float floatType;

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long longint: %lu byte(s)\n", (unsigned long)sizeof(li2));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));

	return (0);
}
