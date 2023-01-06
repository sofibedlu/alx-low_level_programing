#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int j = 0;
	hash_node_t *temp;

	printf("{");
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
			if (j != 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			j++;
		}
		i++;
	}
	printf("}\n");
}
