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
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*(dest + 1) = '\0';
	return (dest);
}
