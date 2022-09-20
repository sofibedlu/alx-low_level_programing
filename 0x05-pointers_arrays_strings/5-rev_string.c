#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int n = 0;
	char tem;

	while (*(s + n) != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		tem = *(s + i);
		*(s + i) = *(s + n - i - 1);
		*(s + n - i - 1) = tem;
	}
}
