#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - copy n amount of string
 * @dest: destination argument
 * @src: source argument
 * @n: n argument
 * Return: value
 */

char *_strncpy(char *dest, char *src, int n)
{

	return (strncpy(dest, src, n));
}
