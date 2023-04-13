#include "search_algos.h"

/**
 * binary - divide the array recurssively to get the index
 * @array: pointer to the first element of the array to search in
 * @l: lower bound
 * @r: upper bound
 * @value: the value to search for
 * Return: index of @value in array or -1
 */
int binary(int *array, size_t l, size_t r, int value)
{
	size_t mid, i;

	if (l == r && value <= array[r])
	{
		if (array[l] == value)
			return (l);
		else
			return (-1);
	}
	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");

	if (l != r)
	{
		mid = (l + r) / 2;
		if (array[mid] == value)
		{
			if (l != r)
				return (binary(array, l, mid, value));
			else
				return (mid);
		}
		if (array[mid] < value)
			return (binary(array, mid + 1, r, value));
		else
			return (binary(array, l, mid, value));
	}
	return (-1);
}
/**
 * advanced_binary - return the first index of @value in the array
 * even this @value appears more than once in the array
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in @array
 * @value: the value to search for
 * Return: index where value is licated otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l, r, index;

	if (array == NULL)
		return (-1);
	l = 0;
	r = size - 1;
	index = binary(array, l, r, value);
	return (index);
}
