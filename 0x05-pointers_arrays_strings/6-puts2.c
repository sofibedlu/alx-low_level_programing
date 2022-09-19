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
		if (*(str + 1) != '\0')
			str = str + 2;
		else
			break;
	}
	_putchar('\n');
}
