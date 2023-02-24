#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print integers from 0 - 9
 *
 * void: it is void data type
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
