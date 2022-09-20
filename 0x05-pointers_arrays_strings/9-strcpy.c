#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy a string
 * @dest: pointer
 * @src: second pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *saveddest = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (saveddest);
}
