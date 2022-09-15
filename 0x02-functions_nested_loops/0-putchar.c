#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 *
 * Return: always 0
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch != '\0')
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
