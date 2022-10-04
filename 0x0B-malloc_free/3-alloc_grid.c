#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - return pointer to 2 dimensional array of integer
 * @width: width of the array(columun)
 * @height: row
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int) * width);
		}
		i = 0;
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
		return (p);
	}
	else
	{
		i = 0;
		for (i = 0; i < height; i++)
			free(p[i]);
		free(p);
		return (NULL);
	}
	return (0);
}
