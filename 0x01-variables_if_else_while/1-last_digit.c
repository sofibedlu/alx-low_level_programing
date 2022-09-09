#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int laDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	laDigit = n % 10;
	if (laDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, laDigit);
	else if (laDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, laDigit);
	else if (laDigit < 6 && laDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, laDigit);

	return (0);
}
