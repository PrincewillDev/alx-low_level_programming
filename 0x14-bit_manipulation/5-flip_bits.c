#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: parameter
 * @m: parameter
 * Return: count success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int value, count;

	value = n ^ m;
	count = 0;

	while (value > 0)
	{
		if (value & 1)
		{
			count++;
		}
		value >>= 1;
	}

	return (count);
}
