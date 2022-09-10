#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char ch = 'a';

	while (num < 16)
	{
		if (num < 10)
			putchar(num + '0');
		else
		{
			putchar(ch);
			ch++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
