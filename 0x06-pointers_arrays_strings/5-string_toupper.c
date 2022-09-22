#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase letters to uppercase
 * @s: string
 * Return: string pointer
 */

char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	for (j = 0; j < i; j++)
	{
		if ('a' <= s[j] && s[j] <= 'z')
			s[j] = s[j] - 32;
		else
			s[j] = s[j];
	}
	s[j] = '\0';
	return (s);
}
