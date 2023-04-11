#include <math.h>
#include "search_algos.h"

listint_t *linear(listint_t *temp, size_t l, size_t r, int value);

/**
 * jump_list - searches for a value in a sorted list of integers
 * using jump search algorithm
 * @list: is a pointer to the head of the list to search in
 * @size: the number of nodes in @list
 * @value: is the value to search for
 * Return: pointer to first node where @value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t l = 0, r = sqrt(size), i;
	listint_t *temp = list, *prev, *result;

	if (list == NULL)
		return (NULL);
	while (r < size)
	{
		prev = temp;
		for (i = l; i < r; i++)
			temp = temp->next;
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (temp->n < value)
		{
			l = r;
			r = r + sqrt(size);
			if (r > size - 1)
			{
				r = size - 1;
				prev = temp;
				while (temp->next)
					temp = temp->next;
				printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
				printf("Value found between indexes [%ld] and [%ld]\n", l, r);
				temp = prev;
				break;
			}
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, r);
			temp = prev;
			break;
		}
	}
	result = linear(temp, l, r, value);
	return (result);
}

/**
 * linear - search for the value in the list in given range
 * @temp: pointer to current position of the list
 * @l: lower bound
 * @r: upper bound
 * @value: value to search for
 * Return: pointer to the node the value match or NULL
 */
listint_t *linear(listint_t *temp, size_t l, size_t r, int value)
{
	size_t i;

	for (i = l; i <= r; i++)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
