#include "main.h"
void print_bin(unsigned int num, int i);
/**
 * print_binary - prints decimal to binary
 * Description: first, finds the biggest exponent for 2, then go down
 * to find the smaller values
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int num;

	num = n;
	if (n == 0)
		_putchar('0' + 0);
	if (n == 1)
		_putchar('0' + 1);
	if (n > 1)
	{
		while (n > 0)
		{
			n = n >> 1;
			i++;
		}
		print_bin(num, (i - 1));
	}
}
/**
 * print_bin - print binaey
 * @num: decimal number
 * @i: number used to shift
 */
void print_bin(unsigned int num, int i)
{
	for (; i >= 0; i--)
	{
		_putchar('0' + ((num >> i) & 1));
	}
}
