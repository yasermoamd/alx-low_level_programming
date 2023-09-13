#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - display if the number is positive |  negative | zero
 * Return: return 0 and exit the program
 */
int positive_or_negative(int n)
{
	srand(time(0));
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
