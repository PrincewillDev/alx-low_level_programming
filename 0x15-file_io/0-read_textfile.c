#include "main.h"
/**
 * read_textfile - Read text files and print to posix stdout
 * @filename: file name
 * @letters: number of texts
 * Return: number of letters it could read or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fp, byteread, filewrite;

	/* Allocate memory dynamically for the buffer */
	buffer = malloc(sizeof(char) * letters);

	/*Check if malloc failed */
	if (buffer == NULL)
		return (0);

	/* Open the file and set the mode */
	fp = open(filename, O_RDONLY);

	/* Check if the file is successfully opened */
	if (fp == -1)
	{
		free(buffer);
		return (0);
	}
	/* Check if the file name is NULL if so return O */
	if (filename == NULL)
		return (0);

	/* Perform file processing */
	byteread = read(fp, buffer, letters);
	if (byteread == -1)
	{
		free(buffer);
		return (0);
	}

	filewrite = write(STDOUT_FILENO, buffer, byteread);
	if (filewrite == -1)
	{
		free(buffer);
		return (0);
	}
	close(fp);
	free(buffer);
	return (filewrite);
}
