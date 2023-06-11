#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main program
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{

	int i, mul;

	mul = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul *  atoi(argv[i]);
		}

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
