#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element
 * @size: size of the element
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s != NULL)
	{
		memset(s, 0, nmemb * size);
		return (s);
	}
	else
		return (NULL);
}
