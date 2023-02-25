#include "main.h"
#include "stdio.h"

/**
* print_diagonal -  draws a diagonal line on the terminal
*
* @n: variable
*
* void: it is a void datatype function
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int  x, p;

		for (x = 0; x < n; x++)
		{
			for (p = 0; p < n; p++)
			{
				if (p == x)
					_putchar('\\');
				else if (p < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
