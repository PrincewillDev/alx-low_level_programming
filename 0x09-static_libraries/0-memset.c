#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - memset function
 *@s: agrument
 *@b: argument
 *@n: argument
 *
 * Return: result
 */

char *_memset(char *s, char b, unsigned int n)
{

	return (memset(s, b, n));
}
