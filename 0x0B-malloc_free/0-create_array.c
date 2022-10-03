#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create array of char
 * @size: size of array
 * @c: specific character
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size);
	i = 0;
	if (s != NULL)
	{
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	}
	return (s);
}
