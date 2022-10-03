#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * str_concat - concatenates two string
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: string pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int x, y;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	x = strlen(s1);
	y = strlen(s2);
	s = malloc(x + y + 1);
	if (s != NULL)
	{
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i] != '\0')
		{
			s[i + x] = s2[i];
			i++;
		}
		s[i + x] = '\0';
		return (s);
	}
	else
		return (NULL);
}
