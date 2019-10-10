#include "hash_tables.h"
/**
 * key_index - get the index of a key
 * @key: key to get index of
 * @size: size of the hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
