#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of string
 * @s: string
 * Return: string pointer
 */

char *cap_string(char *s)
{
	int i, j;
	char A[] = {' ', '\n', '\t', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		for (j = 0; A[j] != '\0'; j++)
		{
			if (s[i + 1] == A[j])
			{
				if (s[i + 2] >= 'a' && s[i + 2] <= 'z')
					s[i + 2] = s[i + 2] - 32;
			}
		}
	}
	return (s);
}
