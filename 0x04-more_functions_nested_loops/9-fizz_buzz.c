#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i, i3, i5;

	i = 1;

	while (i <= 100)
	{
		i3 = i / 3;
		i5 = i / 5;

		if (i == (i3 * 3) && i == (i5 * 5))
		{
			printf("FizzBuzz ");
		}
		else if (i == (i3 * 3))
		{
			printf("Fizz ");
		}
		else if (i == (i5 * 5))
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	return (0);
}
