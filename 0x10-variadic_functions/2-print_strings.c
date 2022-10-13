#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string pointer
 * @n: number of argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ptr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (ptr == NULL)
			printf("%s", "(nil)");
		else
		{
			printf("%s", ptr);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
