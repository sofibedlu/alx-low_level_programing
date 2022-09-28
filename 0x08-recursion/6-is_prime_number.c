#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: integer
 * Return: 1 if its prime 0 if not
 */

/**
 * @i: integer
 */
int prime(int n, int i);

int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - check the number
 * @n: integer
 * @i: integer
 * Return: integer
 */
int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0 && i < n)
		return (0);
	else if (i < n)
		return (prime(n, i + 1));
	else
		return (1);
}
