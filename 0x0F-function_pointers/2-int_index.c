#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: pointer to array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
