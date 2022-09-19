#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int n = 0, j;

	while (*str != '\0')
	{
		str++;
		n++;
	}
	str = str - n;

	if (n % 2 == 0)
	{
		j = (n / 2) - 1;
		str = str + j;
	}
	else
	{
		j = ((n - 1) / 2) + 1;
		str = str + j;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
