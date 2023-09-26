#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search for a string of any set of bytes.
 * @s: type char pointer
 * @accept: type char pointer
 * Return: s or null if no such byte type is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr = s;
	char *accept_ptr;

	while (*s_ptr)
	{
		accept_ptr = accept;
		while (*accept_ptr)
		{
			if (*s_ptr == *accept_ptr)
			{
				return (s_ptr);
			}
			accept_ptr++;
		}
		s_ptr++;
	}
	return (NULL);
}
