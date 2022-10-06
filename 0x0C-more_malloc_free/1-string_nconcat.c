#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenet two strings
 * @s1: destnation
 * @s2: source
 * @n: integer
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1;
	unsigned int len2;
	unsigned int x = n;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		x = len2;
	p = malloc(len1 + x + 1);
	if (p != NULL)
	{
		for (j = 0; j < len1; j++)
			p[j] = s1[j];
		for (i = 0; i < x; i++)
			p[len1 + i] = s2[i];
		return (p);
	}
	else
		return (NULL);
}
