#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_djb2 - returns a hash number based on the string given
 * @str: the string to hash
 *
 * Return: the hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
