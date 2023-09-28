#include "main.h"

/**
 * reverse_string_recursively - Outputs a string in reversed order.
 * @str: input string
 * Return: None.
 */
void reverse_string_recursively(char *str)
{
	if (*str != '\0')
	{
		reverse_string_recursively(str + 1);
		_putchar(*str);
	}
}

