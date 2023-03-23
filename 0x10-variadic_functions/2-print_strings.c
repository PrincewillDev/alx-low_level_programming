#include "variadic_functions.h"

/**
 * print_strings - Prints out strings
 * @separator: string pointer
 * @n: count argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
