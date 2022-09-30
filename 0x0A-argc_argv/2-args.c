#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: array size
 * @argv: pointer to string
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
