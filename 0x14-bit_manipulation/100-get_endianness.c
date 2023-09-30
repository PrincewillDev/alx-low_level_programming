#include "main.h"

/**
 * get_endianness - to check the endianess
 * Return: 0 for big endian, 1 for little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	unsigned int *ptr = &i;

	if (ptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
