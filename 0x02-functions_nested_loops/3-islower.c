#include <stdio.h>
#include "main.h"

/**
 * _islower  - checks for lowercase character
 * @c : variable carrier
 * return : 0 always (success)
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
