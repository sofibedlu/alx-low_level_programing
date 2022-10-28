#include "main.h"

/**
 * flip_bits - returns hamming distance of two bit words
 * which is the number of bits you would need to flip to get
 * from one number to another
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0, c;

	for (c = n ^ m; c != 0; c = c >> 1)
	{
		sum = sum + (c & 1);
	}
	return (sum);
}
