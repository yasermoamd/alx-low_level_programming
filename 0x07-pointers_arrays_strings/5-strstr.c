#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: type char str
 * @needle: type char sub str
 * Return: haystack or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		start = haystack;
		char *tempNeedle = needle;

		while (*haystack == *tempNeedle && *tempNeedle)
		{
			haystack++;
			tempNeedle++;
		}

		if (*tempNeedle == '\0')
			return (start);

		haystack = start + 1;
	}
	return (NULL);
}
