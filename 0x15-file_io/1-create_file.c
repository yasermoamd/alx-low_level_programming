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

	if (filename == NULL)
	{
		return (-1);
	}

	open_file = open(filename, O_RDWR | O_TRUNC, 0600);
	write_file = write(open_file, text_content, _strlen(text_content));

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);
	return (1);
}

/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
		return (c);

}
