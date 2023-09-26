#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory to area
 * @dest: type char pointer
 * @src: type char memory area
 * @n: type char bytes from src to dest
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

