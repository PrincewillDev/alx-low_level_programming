#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha- print alphabets
 * @c: variable carrier
 * Return: 0 Always(success)
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
