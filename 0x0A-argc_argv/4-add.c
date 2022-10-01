#include <stdio.h>
#include <stdlib.h>

/**
 * checkint - check for integer
 * @s: string
 * Return: 1 -success or 0-error
 */
int checkint(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= '0' || s[i] >= '9')
			return (0);
	}
	return (1);
}
/**
 * main - add positive integers
 * @argc: array size
 * @argv: pointer to string
 * Return: 0 -success 1 -Error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (!(checkint(argv[i])))
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
