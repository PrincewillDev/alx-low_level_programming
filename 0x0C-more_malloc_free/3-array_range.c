#include "main.h"

/**
 * array_range - creates an array of int
 * @min: min value argument
 * @max: max value argument
 * Return: pointer to mem for array range
 */

int *array_range(int min, int max)
{

	int *ptr, i, size;

	if (min > max)
	{

		return (NULL);
	}
	
	size = (max - min) + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}

	return (ptr);
}
