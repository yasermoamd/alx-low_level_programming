#include "lists.h"

/**
 * free_list - frees a list.
 * @head: an element.
 * Return: return a free space.
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
