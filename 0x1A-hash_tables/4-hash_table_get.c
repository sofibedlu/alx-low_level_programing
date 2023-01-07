#include "hash_tables.h"

/**
 * hash_table_get - it retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key we are lokking for
 * Return: the value associated with the key, or NULL if key couldn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
