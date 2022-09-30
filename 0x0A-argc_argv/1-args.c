#include <stdio.h>

/**
 * main - print number of argument passed into it
 * @argc: array size
 * @argv: pointer to string
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
		printf("%d\n", argc - 1);
	return (0);
}
