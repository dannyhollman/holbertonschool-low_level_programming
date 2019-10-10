#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: key to set
 * @value: value to set
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *new, *temp;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[indx])
	{
		temp = ht->array[indx];
		for (; temp; temp = temp->next)
			if (strcmp(temp->key, key) == 0)
				break;
		if (!temp)
		{
			new->next = ht->array[indx];
			ht->array[indx] = new;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(value);
			free(new->key);
			free(new->value);
			free(new);
		}
	}
	else
	{
		new->next = NULL;
		ht->array[indx] = new;
	}
	return (1);
}
