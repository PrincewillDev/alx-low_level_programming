#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - memcpy function
 * @dest: string destination  agrument
 * @src:  string source argument
 * @n:    number argument
 * Return: results
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	return (memcpy(dest, src, n));
}
