#include "main.h"
#include <stdio.h>
/**
 * puts2 - print one char out of 2 of a string.
 * @s: Type char pointer.
 * Return: Always 0.
 */
void puts2(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(s[c]);
		}
	}
	_putchar('\n');
}
