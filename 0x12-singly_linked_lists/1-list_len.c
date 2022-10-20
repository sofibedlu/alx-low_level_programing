#include "lists.h"

/**
 * list_len - return number of elements
 * @h: pointer to the list
 * Return: num of elemets
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int i = 0;

	if (h != NULL)
	{
		temp = h;
		while (temp != NULL)
		{
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
