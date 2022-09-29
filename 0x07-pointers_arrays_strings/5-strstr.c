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
	int i = 0, j, n = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i] == needle[j])
					n++;
				i++;
			
			}
			if (n == j)
				return(needle);
			n = 0;
		}
		else
			i++;
		
	}
	return (NULL);
}
