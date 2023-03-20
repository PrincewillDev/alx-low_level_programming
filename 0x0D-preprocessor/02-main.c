#include "main.h"
/**
 * main - print the name of the source file in the command line
 * @argc: n args
 * @argv: arr args
 * Return: 0 success
 */

int main(void)
{
	char *filename = __FILE__;

	printf("%s\n", filename);

	return(0);
}
