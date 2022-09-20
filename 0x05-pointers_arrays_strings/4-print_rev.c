#include "main.h"

/**
 * print_rev - print string in revers
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int n = 0;

	while (*s)
	{
		n++;
		s++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		_putchar(*(s - 1));
		s--;
	}
	_putchar('\n');
}
