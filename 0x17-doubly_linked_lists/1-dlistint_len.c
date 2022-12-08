#include "lists.h"

/**
 * dlistint_len - return number of elements
 * @h: head of dlistint_t list
 * Return: number of elemets
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int n = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
