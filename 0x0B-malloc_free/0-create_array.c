#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	s = malloc(size);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
