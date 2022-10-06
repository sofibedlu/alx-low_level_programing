#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: (void *)
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (malloc(b) == NULL)
		exit(98);
	return (s);
}
