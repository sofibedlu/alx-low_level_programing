#include "main.h"

/**
 * jack_bauer - giv jack_bauer time
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr >= 0 && hr < 24)
	{
		while (min >= 0 && min <= 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
	}hr++;
}
