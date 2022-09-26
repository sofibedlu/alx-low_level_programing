#include "main.h"
#include <stdbool.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool match_found = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				match_found = true;
				break;
			}
		}
		if (!match_found)
			break;
		else
			num++;
	}
	return (num);
}
