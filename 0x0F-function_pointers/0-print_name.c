#include "function_pointers.h"

/**
 * print_name -  prints a name
 * @name: name pointer
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	unsigned int i;

	i = 0;

	if (name == NULL || name == NULL)
	{
		return;
	}

	while (name[i] != '\0')
	{
		i++;
	}

	_putchar('\0');

	f(name);
}
