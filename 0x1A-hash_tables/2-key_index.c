#include "hash_tables.h"

/**
 * key_index - function thatgenerate a key index
 * @key: it is the key of the object
 * @size: the size of the array
 * Return: return the indexnat which the key to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
