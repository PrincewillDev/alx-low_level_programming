#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower- checks for lowercase character
 * @c : variable carrier
 * Return: 0 always(success)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
