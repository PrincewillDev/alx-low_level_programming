#include "main.h"

/** create_file - This function creates a file 
 * @filename: pointer to the file name
 * @text_content: pointer to the text content
 * Return: 1 for success
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_file;
	text_content = '\0';

	/*check if filename is exists*/
	if (filename == NULL)
		return (0);

	/* Check if text content exists */
	if (text_content == NULL)
	{
		file = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
		if (file == -1)
			return (-1);
	}

	if (text_content)
	{
		write_file = write(file, text_content, sizeof(text_content));
		if (write_file == -1)
			return (-1);
	}

	/*Close the file*/
	close(file);
	return (1);
}
