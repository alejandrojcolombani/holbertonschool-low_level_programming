#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array
 *
 * Return: index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key,
	unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	if (key == NULL || *key == '\0' || size == 0)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
