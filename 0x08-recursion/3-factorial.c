#include "main.h"

/**
 * factorial - function gives factorial of a given number
 * @n: parameter for the given number
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	else
	{

		return (n * factorial(n - 1));
	}
}
