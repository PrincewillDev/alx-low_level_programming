#include "main.h"

/**
 * _pow - returns the value of x raised to power y
 * @x: base
 * @y: power
 * Return: value of x to power y
 */

int _pow(int x, int y)
{
	/* Base case */
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow(x, y - 1));
	}
}

/**
  * binary_to_uint - converts binary to unsigned int
  * @b: pointer to input string
  * Return: converted number or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len = 0, bits, sum = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	j = len - 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bits = b[i] - '0';
		sum += bits * _pow(2, j);
		j--;
	}

	return (sum);

}
