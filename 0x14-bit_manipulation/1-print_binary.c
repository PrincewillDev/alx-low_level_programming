#include "main.h"

/**
 * print_binary - Converts number to binary
 * @n: Number to be printed in binary
 * Return: void
 */


void print_binary(unsigned long int n)
{
	char c;

	/*base case */
	if (n == 0)
	{
		putchar('0');
		return;
	}

	/* recursive case */
	if ((n >> 1) != 0)
	{
		print_binary(n >> 1);
	}

	c = (n & 1) ? '1' : '0';
	putchar(c);
}
