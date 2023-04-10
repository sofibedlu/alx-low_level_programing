#include "search_algos.h"
#include <stdlib.h>


/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 * Return: index where @value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, mid;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i < r + 1; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
