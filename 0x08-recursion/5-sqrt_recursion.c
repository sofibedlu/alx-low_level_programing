#include "main.h"

/**
 * _sqrt_recursion - natural square root
 * @n: natural number
 * Return: square root of number
 */
/**
 * @i: square root of n
 */

int arg_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (arg_sqrt(n, 1));
}
/**
 * arg_sqrt - find square root
 * @n: number to be checked
 * @i: square root of n
 * Return: square root
 */
int arg_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (arg_sqrt(n, i + 1));
	else
		return (-1);
}
