#include <stdio.h>

/**
 * main - The main program
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		putchar('\n');	
	}

	return (0);
}
