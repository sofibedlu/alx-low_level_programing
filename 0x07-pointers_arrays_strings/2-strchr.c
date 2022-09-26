#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: first occurance  of the character or null
 */

char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	for (j = 0; j <= i; j++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
