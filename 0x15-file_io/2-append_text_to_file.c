#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: file name
 * @text_content: file content
 * Return: returns 1 on success, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, i, w;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_EXCL | O_APPEND | O_WRONLY);
	if (file_des < 0)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
		w = write(file_des, text_content, i);
		if (w < 0)
			return (-1);
	}
	close(file_des);
	return (1);
}
