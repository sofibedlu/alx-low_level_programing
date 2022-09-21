#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return: integeres
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, diff, n, h;

	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0; s2[j] != '\0'; j++)
	if (i >= j)
		n = i;
	else
		n = j;
	for (h = 0; h < n; h++)
	{
		diff = s1[h] - s2[h];
		if (s1[h] != s2[h])
		{
			break;
		}
	}
	return (diff);
}
