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
	int len = 0;
	int start;

	while (s[len])
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	while (s[start])
	{
		_putchar(s[start]);
		start++;
	}
	_putchar('\n');
}
