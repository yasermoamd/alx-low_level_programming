#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: type char returns the number of bytes
 * @accept: bytes from accept
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)
{
	char *s_start = s;
	char *accept_ptr;

	while (*s)
	{
		accept_ptr = accept;
		while (*accept_ptr)
		{
			if (*s == *accept_ptr)
			{
				break;
			}
			accept_ptr++;
		}
		if (*accept_ptr == '\0')
		{
			break;
		}
		s++;
	}
	return ((unsigned int)(s - s_start));
}
