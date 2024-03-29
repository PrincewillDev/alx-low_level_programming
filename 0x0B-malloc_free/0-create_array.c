#include "main.h"

/**
 * create_array - Array of chars and initializes it with a specific char.
 * @size: size argument is the size of the array.
 * @c: c argument is the character to be input to the array.
 * Return: return pointer to malloc
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{

		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ptr[i] = c;

		i++;
	}

	return (ptr);

}
