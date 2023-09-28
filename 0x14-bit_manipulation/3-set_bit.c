#include "main.h"
/**
 * set_bit - set the bit at the index position to 1
 * @n: the value
 * @index: the index
 * Return: 1 success
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is greater than the bits */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* Set the bit at index to 1 if its 0 by using the OR assignment operator */
	*n |= (1 << index);

	return (1);
}
