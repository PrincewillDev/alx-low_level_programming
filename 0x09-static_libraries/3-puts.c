#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: pointer to string in memory
 */

void _puts(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts(s + 1);
}
