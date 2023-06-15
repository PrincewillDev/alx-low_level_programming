#include "main.h"

/**
 * malloc_checked - allocates mem using malloc.
 * @b: the size for malloc.
 * Return: pointer to malloc
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{

		exit(98);
	}

	return (ptr);
}
