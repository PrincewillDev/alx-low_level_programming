#include "main.h"

/**
 * array_range - creates an array of int
 * @min: min value argument
 * @max: max value argument
 * Return: pointer to mem for array range
 */

int *array_range(int min, int max)
{

	int *ptr, i;

	if (min > max)
	{

		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

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
