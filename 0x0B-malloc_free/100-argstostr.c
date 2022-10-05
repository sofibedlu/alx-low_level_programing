#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the programm
 * @ac: number of arguments
 * @av: argument array
 * Return: pointer or null
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int n = 0;
	char *p;
	int x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		n = n + strlen(av[i]);
	}
	p = malloc(n + ac - 1);
	if (p != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				p[j + x] = av[i][j];
			}
			p[j + x] = '\n';
			x = x + strlen(av[i]) + 1;
		}
		p[x] = '\0';
		return (p);
	}
	else
		return (NULL);
}
