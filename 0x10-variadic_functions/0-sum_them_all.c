#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: required argument to count the unknown argument
 * Return:(sum) after suming up and 0 if null
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;

	unsigned int i, sum;

	sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		unsigned int value = va_arg(args, unsigned int);

		sum += value;
	}

	return (sum);

	va_end(args);
}
