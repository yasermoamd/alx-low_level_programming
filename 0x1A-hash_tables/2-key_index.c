#include "hash_tables.h"

/**
 * key_index - function gives you the index of a key.
 * @key:  key is the key.
 * @size: size of the array
 * Return:  unsigned long int which is the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
