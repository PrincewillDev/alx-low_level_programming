#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: The value of x raised to the power of y.
 *         -1 if y is negative.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /* If y is negative, return -1 */
	{
		return (-1);
	}
	else if (y == 0) /* If y is 0, return 1 */
	{
		return (1);
	}
	else /* For any other value of y, return x * _pow_recursion(x, y - 1) */
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

