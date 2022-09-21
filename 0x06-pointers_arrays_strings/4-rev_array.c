#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer to the array
 * @n: integer
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int sav = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = sav;
	}
}
