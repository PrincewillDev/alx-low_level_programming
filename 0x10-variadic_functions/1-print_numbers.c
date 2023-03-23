#include "variadic_functions.h"

/**
 * print_numbers - Prints out numbers
 * @separator: string pointer
 * @n: unsigned int count argument
 * return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list args;

	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{

		int num = va_arg(args, int);

		printf("%d", num);

		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

}
