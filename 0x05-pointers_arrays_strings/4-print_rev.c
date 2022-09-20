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

	while (*s != '\0')
	{
		n++;
		s++;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
