#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - return pointer to newly allocated space
 * @str: string pointer
 * Return: pointer or NULL
 */
char *_strdup(const char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s = malloc(strlen(str) + 1);
	if (s != NULL)
	{
		while (str[i] != '\0')
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	else
		return (NULL);
}
