#include "hash_tables.h"

/**
 * key_index - a function that gives the index of the key
 * @key: key
 * @size: the size of the array of hash table
 * Return: the index at which the key/value pair should be stored in the array
 * of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
