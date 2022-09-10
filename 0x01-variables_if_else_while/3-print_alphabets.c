#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char chC = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chC <= 'Z')
	{
		putchar(chC);
		chC++;
	}
	putchar('\n');
	return (0);
}
