#include "main.h"

/**
 * times_table - generate multiplication table
 *
 * Return: always 0
 */
void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
				_putchar(0 + '0');
			if (product < 10 && y != 0)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
