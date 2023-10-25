#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the beginning of a list.
 * @n: 
 * Return: 
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	if (head == NULL)
	{
		return (NULL);
	}
	x = malloc(sizeof(listint_t));
	if (x == NULL)
	{
		return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
