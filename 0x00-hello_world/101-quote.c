#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, s, strlen(s));
	return (0);
}
