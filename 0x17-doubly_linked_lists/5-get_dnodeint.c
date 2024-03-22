#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head: list
 * @index: index of element
 * Return: element by index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		j++;
		current = current->next;
	}
	return (NULL);
}


