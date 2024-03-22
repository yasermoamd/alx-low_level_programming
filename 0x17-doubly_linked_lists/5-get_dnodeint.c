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

	for (j = 0; j < index && head->next; j++)
	{
		head = head->next;
	}
	if (j < index)
		return (NULL);
	return (head);

}

