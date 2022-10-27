#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to string of 0 and 1
 * Return: converted number or 0 (if it failes)
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int po;
	unsigned int deci = 0;
	int temp;
	unsigned int mul = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	po = strlen(b);
	temp = po - 1;
	while (temp >= 0)
	{
		if (b[temp] == '1')
		{
			deci += mul;
		}
		mul *= 2;
		temp--;
	}
	return (deci);
}
