#include "main.h"

/**
 * set_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: 1 (success) or -1(faillure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 0;
	int num = *n;
	int index1 = index;

	while (num > 0)
	{
		num = num >> 1;
		i++;
	}
	i--;
	if (index1 > i && *n > 0)
		return (-1);
	*n |= (1 << index);
	return (1);
}
