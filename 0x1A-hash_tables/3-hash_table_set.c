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
	hash_node_t *new, *temp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	if (strcmp(key, "") == 0)
	{
		free(new);
		return (0);
	}
	if (strcmp(value, "") == 0)
		value = "(null)";
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
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
