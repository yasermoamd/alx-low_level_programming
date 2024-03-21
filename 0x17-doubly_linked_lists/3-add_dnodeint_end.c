#include "lists.h"

/**
 * add_dnodeint_end - add node at te end of dlistsint_t
 * @head: pointer  to pointer
 * @n: value added at the end
 * Return: list if success or NULL if fialed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	current = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;
	return (*head);

}

