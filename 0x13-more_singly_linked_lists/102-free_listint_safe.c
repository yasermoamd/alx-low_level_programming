#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;
		free(current);
		current = next;
		count++;
	}

	*head = NULL;
	return count;
}
