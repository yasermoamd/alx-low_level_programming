#include <stdio.h>
/**
 * _islower - check if char is a lower case alphabet
 *
 * Return: nothing if it's successfull
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else {
		return (0);
	}
}
