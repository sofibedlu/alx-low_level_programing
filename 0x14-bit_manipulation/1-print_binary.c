#include "main.h"

/**
 * print_binary - prints decimal to binary
 * Description: first, finds the biggest exponent for 2, then go down
 * to find the smaller values
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	int bin;
	unsigned long int binNum = 0, mul = 1;

	if (n == 0)
		_putchar('0' + 0);
	if (n == 1)
		_putchar('0' + 1);
	if (n > 1)
	{
		while (n > 0)
		{
			bin = n & 1;
			binNum = binNum + (bin * mul);
			mul = mul * 10;
			n = n >> 1;
		}
		printf("%lu", binNum);
	}
}
