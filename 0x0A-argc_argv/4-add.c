#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The main program
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || atoi(argv[i]) <  0)
		{
			printf("Error\n");

			return (1);
		}

		else
		{
			sum = sum + atoi(argv[i]);
		}
	}

	printf("%i\n", sum);

	return (0);
}
