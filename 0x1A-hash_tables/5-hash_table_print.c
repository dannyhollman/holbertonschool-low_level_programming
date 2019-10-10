#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int i, count = 0;
	hash_node_t *temp;

	printf("{");
	for (i = 0; i < (long) ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (count != 0)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				count++;
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
