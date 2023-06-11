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
	int i, j, sum;

	sum = 0;

	if (argc == 0)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum +=  atoi(argv[i]);

	}

	printf("%i\n", sum);

	return (0);
}
