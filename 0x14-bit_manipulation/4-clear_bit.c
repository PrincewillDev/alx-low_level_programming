#include "main.h"

/**
 * clear_bit - set the bit at the index position to 1
 * @n: the value
 * @index: the index
 * Return: 1 success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if the index is greater than the bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Create a bit mask with 1 at the desired index and 0 at everywhere else */
	mask = ~(1UL << index);

	/* Clear the bit at index by performing a bitwise */
	*n &= mask;

	return (1);
}
