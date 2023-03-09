#include "main.h"

/**
 * factorial - Returns the factorial of  given number
 * @n:  variable argument
 * Return: return the factorial values
 */

int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 0 || n == 1)

		return (1);

	else
		return (n * factorial(n - 1));
}

