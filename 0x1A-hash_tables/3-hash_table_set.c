#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash that going to be add or update the key/value to
 * @key: the key, it can't be an empty string
 * @value: the value associated with the key,
 * it must be duplicated, it can be empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	new->key = (char *)key;
	new->value = strdup(value);
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
