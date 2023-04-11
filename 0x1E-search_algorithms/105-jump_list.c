#include <math.h>
#include "search_algos.h"

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
	listint_t *temp = list, *prev;

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
	for (i = l; i <= r; i++)
	{
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
