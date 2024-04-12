#include "hash_tables.h"

/**
 * *hash_table_create - function that create an array for a hashtable.
 * @size: unsigned int size of array.
 * Return: table as hashtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (struct hash_table_s *)malloc(sizeof(struct hash_table_s));

	if (table == NULL)
	{
		return (NULL);
	}

	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

