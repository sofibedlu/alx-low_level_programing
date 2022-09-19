#include "main.h"

/**
 * _strlen - calculate the length of string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
