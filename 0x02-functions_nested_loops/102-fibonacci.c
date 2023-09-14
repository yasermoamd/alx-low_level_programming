#include <stdio.h>
/**
 * main - print 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	long x, y, sum, counter;

	x = 0;
	y = 1;
	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		x = y;
		y = sum;
		if (i != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
