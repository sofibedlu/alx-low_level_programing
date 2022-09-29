#include "main.h"

/**
 * print_last_digit - gives last digit of a number
 * @n: any number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = n * (-1);
	j = n % 10;
	_putchar('0' + j);
	return (j);
}
