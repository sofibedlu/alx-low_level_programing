#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *s;
	int i;
	int x = min;

	if (min > max)
		return (NULL);
	s = malloc((max - min + 1) * sizeof(int));
	if (s != NULL)
	{
		for (i = 0; i <= (max - min); i++)
		{
			s[i] = x;
			x = x + 1;
		}
		return (s);
	}
	else
		return (NULL);
}
