#include "main.h"

/**
 * factorial - Returns the factorial of  given number
 * @n - variable argument
 */

int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 0 || n == 1)

		return 1;

	else
		return (n * factorial(n - 1));
}

