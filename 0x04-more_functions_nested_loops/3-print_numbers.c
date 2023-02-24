#include <stdio.h>
#include "main"

/**
 * print_numbers - print integers from 0 - 9
 *
 * void: it is void data type
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
}
