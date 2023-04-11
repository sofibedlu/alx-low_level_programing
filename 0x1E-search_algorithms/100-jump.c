#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in sorted array of integers
 * using jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = sqrt(size);
	while (r < size)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (array[r] < value)
		{
			l = r;
			r = r + sqrt(size);
			if (r > size - 1)
			{
				printf("Value checked array[%ld] = [%d]\n", l, array[l]);
				printf("Value found between indexes [%ld] and [%ld]\n", l, r);
				r = size - 1;
				break;
			}
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, r);
			break;
		}
	}
	for (i = l; i <= r; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
