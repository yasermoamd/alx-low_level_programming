#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: type int string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if ([i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}
