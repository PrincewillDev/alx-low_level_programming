#include "main.h"

/**
 * read_textfile - Read text files and print to posix stdout
 * @filename: file name
 * @letters: number of texts
 * Return: number of letters it could read or print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Variable declarations */
	FILE *file;
	char *buffer;
	ssize_t readbytes;

	/*Dynamically allocate memory for the buffer*/
	buffer = malloc((letters + 1) * sizeof(char));

	/* Check if the filename is NULL */
	if (filename == NULL)
	{
		return (0);
	}

	/* Initialize the file pointer */
	file = fopen(filename, "r");
	if (file == NULL)
	{
		/* Failed to open the file */
		return (0);
	}

	/* Read and print the content of the file */
	readbytes = fread(buffer, sizeof(char), letters, file);
	if (readbytes < 0)
	{
		/* Failed to read the file */
		fclose(file);
		return (0);
	}
	buffer[readbytes] = '\0';  /* Null-terminate the buffer */

	/* Print the content to the standard output (stdout) */
	fwrite(buffer, sizeof(char), readbytes, stdout);

	/* Close the file */
	fclose(file);

	/* Return the actual number of letters read and printed */
	return (readbytes);
}

