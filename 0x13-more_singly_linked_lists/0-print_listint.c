#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: type of listint.
 * Return:  the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *x;

	x = h;

	while (n != NULL)
	{
		printf("%d\n", n->n);
		x = x->next;
		count++;
	}

	return (count);
}
