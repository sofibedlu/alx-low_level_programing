#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int A = 1;
	char *X = (char *)&A;

	if (*X == '1')
		return (0);
	else
		return (1);
}
