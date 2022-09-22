#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: string pointer
 */

char *leet(char *s)
{
	int i, j;
	char A[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; n[j] != '\0'; j++)
		{
			if (s[i] == A[j] || s[i] == A[j + 5])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
