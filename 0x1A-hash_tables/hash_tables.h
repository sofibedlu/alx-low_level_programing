#include <stdio.h>
#include <stdlib.h>


/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: the key, string
 * the key is unique in the HashTable
 * @value: the value corresponding to key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * stuct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: an array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
