#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: file name
 * @text_content: file content
 * Return: returns 1 on success, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int len, i;
	void *buf;

	while (text_content != NULL)
	{
		len++;
	}
	if (filename == NULL)
	{
		return (-1);
	}
	buf = malloc(len);
	/* Opened the file in append mode */
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_des);
		return (1);
	}
	/* Process the opened file, by appending content to it */
	for (i = 0; i < len; i++)
	{
		if ((write(file_des, buf, len)) != -1)
		{
			return (1);
		}
	}
	free(buf);
	close(file_des);
	return (0);
}
