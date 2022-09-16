#include "main.h"

/**
 * print_alphabet_x10 - print small leters
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char sh = 'a';
	int n = 1;

	while (n <= 10)
	{
		while (sh <= 'z')
		{
			_putchar(sh);
			sh++;
		}
		_putchar('\n');
		n++;
		sh = 'a';
	}
}
