#include "main.h"

/**
 * read_textfile - function that reads a text file and print.
 * @filename: constant char.
 * @letters: varidic size_t.
 * Return: 0 if can not read or open.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;

	char *p;

	if (filename == NULL)
		return (0);

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, p, letters);
	write_file = write(1, p, read_file);

	if (open_file == -1 || read_file == -1)
	{
		free(p);
		return (0);
	}
	close(open_file);
	free(p);
	return (write_file);
}
