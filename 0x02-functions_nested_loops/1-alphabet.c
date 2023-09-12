#include "main.h"
/**
 * print_alphabet - single char
 *
 * Return: single chars
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
