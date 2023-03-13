#include "main.h"

/**
 * main - prints the program name
 *
 * @argc: Argument count (to count the command line argument)
 * @argv: Argument vector (to hold the actual commandline argument strings)
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{

	if (argc == 0)

	{

		return (0);

	}

	int i;


	for (i = 0; i < argc; i++)

	{

		printf("%s\n", argv[i]);

	}
}
