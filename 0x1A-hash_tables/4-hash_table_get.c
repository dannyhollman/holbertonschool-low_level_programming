#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key to look for
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *temp;

	if (!ht)
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[indx])
	{
		temp = ht->array[indx];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
