#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @h: head pointer of dlistint_t list
 * @idx: position
 * @n: value that's going be inserted
 * Return: the address of the new node of NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int position = 0;

	if (*h == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (*h);
	}
	temp = *h;
	while (temp != NULL)
	{
		if (position == idx)
		{
			temp->prev->next = new;
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			return (*h);
		}
		temp = temp->next;
		position++;
	}
	free(new);
	return (NULL);
}
