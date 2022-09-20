#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of array
 * @a: array
 * @n: the number of elements of the array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{

		printf("%d", *a);
		if ((a + i) == (a + (n - 1)))
		{
			printf("\n");
			break;
		}
		else
			printf(", ");
		a++;
		i++;

	}
}
