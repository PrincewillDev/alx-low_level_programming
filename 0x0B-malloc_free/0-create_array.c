#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the character array
 * @c: the characters in the array
 * Return: pointer (Success), NULL (Fail or Size = 0)
 */

char *create_array(unsigned int size, char c)
{

	char *p;

	char *p2;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	p2 = p;

	while (size > 0)
	{
	
		*p = c;

		p = p + 1;

		size --;
	}

	return (p2);

}
