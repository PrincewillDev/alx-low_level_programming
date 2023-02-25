#include "main.h"
#include "stdio.h"

/**
* print_line -  a function that draws a straight line in the terminal
*
* @n : argument variable
*
* void: it is void data type
*/

void print_line(int n)
{

	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	putchar('\n');
}
