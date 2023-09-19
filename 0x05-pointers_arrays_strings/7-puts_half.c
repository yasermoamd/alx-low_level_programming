#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half of string.
 * @s: Type s char pointer.
 *
 * Return: return zero always.
 */
void puts_half(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}
	for (len /= 2; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
