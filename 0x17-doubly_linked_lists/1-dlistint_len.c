#include "lists.h"

/**
 * dlistint_len - function that returns the number of element.
 * @h: dlistint header.
 * Return: return size_t value
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

