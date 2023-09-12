#include "main.h"
/**
 *  print_last_digit = Print last digit of a number
 *
 *  @a Type int a and @x type int x
 *
 *  Return: the vaule of the last digit
 */
int print_last_digit(int a)
{
	int x;

	if (a < 0)
	{
		x = -1 * (a % 10);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = a % 10;
		_putchar(x + '0');
		return (x);
	}
}
