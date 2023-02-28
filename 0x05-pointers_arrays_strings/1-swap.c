#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: the first function parameter
 * @b: the second function parameter
 *
 * void - the void datatype
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;


}
