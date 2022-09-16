#include "main.h"

/**
 * print_last_digit - gives last digit of a number
 * @n: any number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
		x = -x;
	return (x);
}
