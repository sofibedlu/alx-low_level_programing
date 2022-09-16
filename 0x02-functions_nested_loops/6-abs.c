#include "main.h"

/**
 * _abs - return absolut value
 *@n: any integer
 *
 * Return: always positive
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
