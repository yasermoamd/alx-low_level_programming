#include "main.h"
#include <stdio.h>
/**
 * rev_string - Print a string in reverse.
 * @str: Type char pointer.
 * Return: Always zero.
 */
void rev_string(char *str)
{
	int a, b;
	int let;

	for (a = 0; str[a] != 0; a++)
	{
	}
	b = 0;
	a = a - 1;
	while (b < a)
	{
		let = str[a];
		str[a] = str[b];
		str[b] = let;
		b++;
		a--;
	}
}
