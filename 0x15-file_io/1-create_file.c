#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create.
 * @text_content: the content of the file.
 * Return: return -1 if filename is null.
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file;
	struct stat st;

	if (filename == NULL)
	{
		return (-1);
	}
	if (stat(filename, &st) == 0)
	{
		open_file = open(filename, O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	}
	else
		open_file = open(filename, O_RDWR | O_CREAT | S_IRUSR | S_IWUSR);
	if (open_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_file = write(open_file, text_content, strlen(text_content));

		while (write_file == -1)
		{
			close(open_file);
			return (-1);
		}
	}
	close(open_file);
	return (1);
}
