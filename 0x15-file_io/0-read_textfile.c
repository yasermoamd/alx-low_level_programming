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

	if (filename == NULL || letters == 0)
	{
		return 0;
	}

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
	{
		return 0;
	}

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		free(p);
		return 0;
	}

	read_file = read(open_file, p, letters);
	if (read_file == -1)
	{
		close(open_file);
		free(p);
		return 0;
	}

	close(open_file);

	write_file = write(STDOUT_FILENO, p, read_file);
	if (write_file != read_file)
	{
		free(p);
		return 0;
	}

	free(p);
	return read_file;
}
