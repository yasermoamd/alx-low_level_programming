#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: head of list of int
 * Return: if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		result = head->next;
	}
	return (result);
}
