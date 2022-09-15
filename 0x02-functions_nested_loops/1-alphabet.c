#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - display small letters
 *
 * Return: 1
 */
void print_alphabet(void)
{
	char sh = 'a';

	while (sh <= 'z')
	{
		_putchar(sh);
		sh++;
	}
	_putchar('\n');
}
