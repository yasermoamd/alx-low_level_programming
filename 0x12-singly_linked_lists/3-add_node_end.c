#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end.
 * @head: head is the element or NULL.
 * @str: duplicated.
 * Return: return a list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	return (new);
}
