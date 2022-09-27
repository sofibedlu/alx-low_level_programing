#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates substring
 * @haystack: string
 * @needle: string
 * Return: string pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			p = &haystack[i];
			return (p);
		}
	}
	return (NULL);
}
