#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: string pointer
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
