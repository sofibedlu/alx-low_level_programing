#include "main.h"

/**
 * print_last_digit - gives last digit of a number
 * @n: any number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n % 10);
}
