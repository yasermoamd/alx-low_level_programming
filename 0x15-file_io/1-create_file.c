#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: the content of the file.
 * Return: return -1 if filename is null.
 */

int create_file(const char *filename, char *text_content)
{
	int open_file;
	int len;

	if (!filename)
	{
		return (-1);
	}

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (open_file == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		write(open_file, text_content, len);
	}
	close(open_file);
	return (1);
}
