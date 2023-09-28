#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: parameter
 * @m: parameter
 * Return: count success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int i, count = 0, value;
	unsigned int maxIndex = sizeof(unsigned long int) * 8;

	for (i = 0; i < maxIndex; i++)
	{
		/* Compare each bit of both numbers at the same index */
		value = ((n >> i) ^ (m >> i)) & 1;

		/* Increment flips if bits are different */
		if (value != 0)
		{
			count++;
		}
	}

	return (count);
}
