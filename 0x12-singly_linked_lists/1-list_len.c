#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in linkedlist.
 * @h: list_t.
 * Return: length of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
