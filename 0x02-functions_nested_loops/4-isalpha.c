#include <stdio.h>
#include "main.h"

/**
 * _isalpha - print alphabets
 * @c: variable carrier
 * return: 0 always (success)
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
