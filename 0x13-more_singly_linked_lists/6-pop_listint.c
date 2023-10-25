#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head of list of int.
 *Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *begin;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	begin = *head;
	*head = begin->next;
	n = begin->n;
	free(begin);
	return (n);
}
