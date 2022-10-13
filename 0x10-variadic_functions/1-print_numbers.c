#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers
 * @separator: string pointer
 * @n: numbers of argumets
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
