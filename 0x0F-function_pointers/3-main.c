#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: numbers of argument
 * @argv: argument array
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *p;
	int n;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	p = argv[2];
	if (get_op_func(p) == NULL)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	if ((*p == '/' && num2 == 0) || (*p == '%' && num2 == 0))
	{
		printf("%s\n", "Error");
		exit(100);
	}
	n = get_op_func(p)(num1, num2);
	printf("%d\n", n);
	return (0);
}
