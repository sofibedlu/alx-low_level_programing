#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: array size
 * @argv: pointer to string
 * Return: 0 - success 1 - error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
