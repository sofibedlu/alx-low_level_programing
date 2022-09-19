#include "main.h"

/**
 * puts2 - print every other character of string
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
