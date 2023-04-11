#include "search_algos.h"

/**
 * binary - searches for a value in given range
 * @array: pointer to the first element  of the array to search for
 * @l: lower bound
 * @r: upper bound
 * @value: the value to search for
 * Return: index of the @value or -1
 */
int binary(int *array, size_t l, size_t r, int value)
{
	size_t mid, i;

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
		else
			r = mid - 1;
	}
	return (-1);
}
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
	size_t l, r, i = 1;
	int index;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		l = i;
		i = i * 2;
		r = i;
		if (i > size - 1)
		{
			r = size - 1;
			printf("Value found between indexes [%ld] and [%ld]\n", l, r);
			break;
		}
		if (array[i] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, r);
			break;
		}
	}
	index = binary(array, l, r, value);
	return (index);
}
