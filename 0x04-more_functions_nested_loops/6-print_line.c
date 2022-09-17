#include "main.h"

/**
 * print_line - draws straight line
 * @n: integer
 * Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
