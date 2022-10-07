#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: poiter to the privious allocated
 * @old_size: space for ptr
 * @new_size: new memory block
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		np = malloc(new_size);
		if (np != NULL)
		{
		memcpy(np, ptr, old_size);
		free(ptr);
		return (np);
		}
		else
			return (NULL);
	}
	return (0);
}
