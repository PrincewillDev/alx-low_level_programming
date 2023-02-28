#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates for the lenght of a string
 *
 * @s: The function parameter
 *
 * Return: Always 0 (Success)
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{

		len++;

		s++;
	}

	return (len);
}
