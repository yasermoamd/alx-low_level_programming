#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the doubly linked list
 * @idx: index of the node to be inserted, starting from 0
 * @n: data to be inserted into the new node
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	size_t size = 0;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	current = *h;
	if (idx != 0)
	{
		while (size != (idx - 1) && current != NULL)
		{
			current = current->next;
			size++;
		}
	}

	if (current == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		new_node->next = current->next;
		new_node->prev = current;

		if (current->next)
			current->next->prev = new_node;

		current->next = new_node;
	}
	return (new_node);

}

