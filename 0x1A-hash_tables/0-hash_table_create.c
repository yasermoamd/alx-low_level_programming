#include "hash_tables.h"

/**
 * *hash_table_create - function that create an array for a hashtable.
 * @size: unsigned int size of array.
 * Return: table as hashtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

