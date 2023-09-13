#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @x: The starting number
 */
void print_to_98(int x)
{
	while (x != 98)
	{
		printf("%d, ", x);
		if (x < 98)
			x++;
		else
			x--;
	}
	printf("%d\n", x);
}
