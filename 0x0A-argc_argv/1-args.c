#include <stdio.h>

/**
 * main - The main program
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
