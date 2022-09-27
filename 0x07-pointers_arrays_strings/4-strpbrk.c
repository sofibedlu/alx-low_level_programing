#include "main.h"
#include <stddef.h>
#include <stdbool.h>

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: string
 * @accept: string set of bytes
 * Return: pointer to the byte in s that matches
 * one of the bytes in accept or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool match_found = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match_found = true;
				break;
			}
		}
		s++;
		if (match_found)
			return (s);

	}
	return (NULL);
}
