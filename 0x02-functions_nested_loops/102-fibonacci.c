#include <stdio.h>
/**
 * main - print 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	long x, y, sum, i;

	x = 0;
	y = 1;
	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		x = y;
		y = sum;
		if (counter != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
