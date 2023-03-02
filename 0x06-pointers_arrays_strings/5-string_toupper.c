#include "main.h"

/**
 * string_toupper - Converts a string to uppercase
 * @str: Pointer to the string to be converted
 *
 * Return: Pointer to the converted string
 */

char *string_toupper(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{

			str[i] = str[i] - 32;
		}

		i++;
	}
	return (str);
}
