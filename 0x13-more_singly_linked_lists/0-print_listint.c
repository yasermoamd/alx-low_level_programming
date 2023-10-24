#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: type of listint.
 * Return:  the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		int n = h->n;
		
		while (n > 0)
		{
			_putchar((n % 10) + '0');
			n /= 10;
		}
		_putchar('\n');
		
		count++;
		h = h->next;
	}
	
	return count;
}
