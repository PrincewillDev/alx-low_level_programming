#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: pointer to the file name
 * @text_content: pointer to the text content
 * Return: 1 for success
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_file, len;

	len = 0;

	/*check if filename is exists*/
	if (filename == NULL)
		return (0);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	write_file = write(file, text_content, len);
	if (write_file == -1)
		return (-1);
	/*Close the file*/
	close(file);
	return (1);
}
