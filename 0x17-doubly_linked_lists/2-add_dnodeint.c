#include "lists.h"

/**
 * add_dnodeint - function adds new node at the deginning if dlistsint_t
 * @head: pointer to pointer
 * @n: value will be added
 * Return: return dlistsint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	new_node->next = current;
	current->prev = new_node;
	current = new_node;
	return (current);

}

