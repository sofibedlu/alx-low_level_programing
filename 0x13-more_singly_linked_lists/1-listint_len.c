#include "lists.h"

/**
 * listint_len - count number of elements
 * @h: pointer to head list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
