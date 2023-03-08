#include "main.h"

/**
 * _strlen_recursion - print the lenght of a string
 * @s: pointer argument
 * Return: return the lenght of the string
 */

int _strlen_recursion(char *s)
{

	int len = 0;

	if (*s == '\0')
		return (0);

	else
	{

		_strlen_recursion(s + 1);

		while (*s != '\0')
		{

			len++;

			s++;
		}
	}

	return (len);
}
