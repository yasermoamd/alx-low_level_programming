#include "main.h"

/**
 * append_text_to_file - function that convert
 * @filename: file in porject.
 * @text_content: NULL terminated string.
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file;
	ssize_t write_file;

	if (!filename)
		return (-1);

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);
	if (text_content)
	{
		write_file = write(open_file, text_content, strlen(text_content));
		if (write_file == -1)
			return (-1);
	}
	close(open_file);
	return (1);
}
