#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string, in reverse followed by a new line.
 * @s: Type char pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int c;
	int let;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
	{
		let = s[c];
		_putchar(let);
	}
	_putchar('\n');
}
