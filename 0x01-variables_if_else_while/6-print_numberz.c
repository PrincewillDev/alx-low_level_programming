#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int base_num;

	base_num = 0;

	for (base_num = 0; base_num < 10; base_num++)

		putchar(base_num + '0');

	putchar('\n');

	return (0);

}
