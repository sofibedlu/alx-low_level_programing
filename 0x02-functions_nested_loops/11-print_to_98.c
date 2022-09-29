#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - print natural numbers
 * @n: any starting integers
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}

}
