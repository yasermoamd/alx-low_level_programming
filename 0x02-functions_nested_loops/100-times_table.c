#include "main.h"
/**
 * print_times_table - Print n times table starting with 0
 * Description: If n is greater than 15 or less than 0 print nothing
 * @n: type number
 */
void print_times_table(int n)
{
	int x = 0, r, c;

	if (n > 15 || n < 0)
		return;
	while (x <= n)
	{
		for (r = 0; r <= n; r++)
		{
			c = x * r;
			if (c > 99)
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10 % 10) + '0');
				_putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (r != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
				_putchar(c + '0');

			if (r != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
