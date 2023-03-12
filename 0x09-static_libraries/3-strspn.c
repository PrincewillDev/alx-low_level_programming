#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - strspn funtion
 * @s: char argument
 * @accept: char argument
 *
 * Return: strspn value
 */

unsigned int _strspn(char *s, char *accept)
{

	return (strspn(s, accept));
}
