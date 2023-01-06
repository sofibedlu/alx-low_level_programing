#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	hash_node_t *tp;

	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		temp = ht->array[i];
		while (temp != NULL)
		{
			tp = temp->next;
			free(temp->key);
			free(temp->value);
			temp = tp;
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
