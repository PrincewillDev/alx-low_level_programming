#include <stdio.h>
#include <ctype.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);

		letter++;

	}

	letter = 'A';

	while (letter <= 'Z')
	{

		putchar(letter);

		letter++;

	}

	putchar('\n');

	return (0);
}
