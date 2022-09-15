#include <stdio.h>
#include "main.h"

/**
 * printstring - print a string
 *
 * @ch: string to be printed
 *
 * Return: \"_putchar\"
 */
void printstring(char *ch)
{
	while (*ch != '\0')
	{
		_putchar(*ch);
		ch++;
	}
}

