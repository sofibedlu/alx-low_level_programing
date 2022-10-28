#include "main.h"

/**
 * get_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit found
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;
	int bit, i = 0;
	int index1 = index;

	num = n;
	while (n > 0)
	{
		n = n >> 1;
		i++;
	}
	i--;
	if (index1 > i)
		return (-1);
	for (; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		if (i == index1)
			return (bit);
	}
	return (0);
}
