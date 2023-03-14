#include "main.h"

/**
 * main - print all the command line input line by line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}
	return (0);
}
