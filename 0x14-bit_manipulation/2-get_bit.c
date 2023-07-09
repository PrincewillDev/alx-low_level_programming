#include "main.h"

/**
 * get_bit - This returns the value of a bit at a given index.
 * @n: the value
 * @index: the index
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int extracted_bit;

	/* Check if the index is greater than or equal to the number of bits of n */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Extract the desired bit and return it */

	extracted_bit = (n >> index) & 1;

	return (extracted_bit);
}
