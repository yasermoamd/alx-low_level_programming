#include <stdio.h>
#include "lists.h"

/**
 * listint_len - length of element in linkedlist.
 * @h: head of linkedlist.
 * Return: the count of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	h = h->next;
		counter++;
	}

	return (counter);
}
