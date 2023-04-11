#include "search_algos.h"


/**
 * interpolation_search - searches for a value in sorted array of integers
 * using the interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 * Return: the first index where @value is located otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos,  array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
