#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		n++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
