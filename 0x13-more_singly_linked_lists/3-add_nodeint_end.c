#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @n: n add to list.
 * @head: a list of int.
 * Return: he address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = nw;
	return (nw);
}
