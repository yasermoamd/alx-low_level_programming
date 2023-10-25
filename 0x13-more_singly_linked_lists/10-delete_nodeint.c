#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: head of list of node.
 * @index: index of node list.
 * Return: 1 if it succeeded, -1 if it faile.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);

}
