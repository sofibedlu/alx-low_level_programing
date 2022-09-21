#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two string 
 * @dest: string
 * @src: string
 * @n: integers
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, h, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		j++;
	for (h = 0; h < n; h++)
	{
		dest[j + h] = src[h];
	}
	dest[j + h] = '\0';
	return (dest);
}

