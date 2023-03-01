#include "main.h"

/**
 * _strncat - This function takes the @dest and @src then a third parameter n
 *
 * @dest: the string to be appended upon
 * @src: the string to be appended to the dest
 * @n: the amount of byte from the src to appended to dest
 *
 * Return: a destination  pointer to get the destination string and run it
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);

	return (dest);
}
