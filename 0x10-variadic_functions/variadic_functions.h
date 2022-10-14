#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
struct selector
{
	char *data_type;
	void (*fun_type)(va_list args);
};
typedef struct selector Selector;
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);

#endif
