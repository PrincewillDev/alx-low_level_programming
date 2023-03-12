#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - concatenate two string
 * @dest: destination agrument
 * @src : source argument
 * @n :   int argument
 *
 * Return: concatenated value
 */

char *_strncat(char *dest, char *src, int n)
{

	return (strncat(dest, src, n));
}
