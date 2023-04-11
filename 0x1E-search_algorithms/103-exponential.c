#include "search_algos.h"


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search for
 * @size: the number of elements in @array
 * @value: is the value to search for
 * Return: the first index where value is located otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t l, r, mid, i = 1;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[0] == value)
			return (0);
		l = i;
		i = i * 2;
		r = i;
		if (i > size - 1)
			r = size - 1;
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, r);
			break;
		}
	}

	while (l <= r)
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
	}
	return (-1);
}
