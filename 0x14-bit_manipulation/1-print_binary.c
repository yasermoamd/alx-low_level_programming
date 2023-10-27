#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @num: The input integer to convert into binary.
 * Return: void.
 */

void print_binary(unsigned long int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num > 1)
		print_binary(num >> 1);

	_putchar((num & 1) + '0');
}

