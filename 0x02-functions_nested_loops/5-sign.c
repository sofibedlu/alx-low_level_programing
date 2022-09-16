#include "main.h"
/**
 * print_sign - test the sign of the number
 * @n: intigers
 *
 * Return: 1 - if positive -1 if negetive and 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
	
}
