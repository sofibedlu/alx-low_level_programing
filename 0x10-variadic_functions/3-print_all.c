#include <stdio.h>

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * printInt - print integer
 * @args: argument
 */
void printInt(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * printChar - print char
 * @args: argument
 */
void printChar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * printFloat - print floats
 * @args: arguments
 */
void printFloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * printString - print string
 * @args: arguments
 */
void printString(va_list args)
{
	char *s = va_arg(args, char *);

	s == NULL ? printf("%s", "(nil)") : printf("%s", s);
}

/**
 * print_all - print anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	size_t i = 0;
	int j = 0;
	char *sep = "";

	Selector array[] = {
		{"i", printInt},
		{"c", printChar},
		{"f", printFloat},
		{"s", printString},
		{NULL,NULL}
	};
	va_start(args, format);

	while (i < strlen(format) && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == array[j].data_type[0])
			{
				printf("%s", sep);
				array[j].fun_type(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
