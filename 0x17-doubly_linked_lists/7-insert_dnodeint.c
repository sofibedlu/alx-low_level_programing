#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @head: head pointer of dlistint_t list
 * @idx: position
 * @n: value that's going be inserted
 * Return: the address of the new node of NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int position = 0;
	dlistint_t *pre = NULL;

	if (*head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL && idx == 0)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (position == idx)
		{
			new->prev = temp->prev;
			new->next = temp;
			temp->prev = new;
			pre->next = new;
			return (*head);
		}
		pre = temp;
		temp = temp->next;
		position++;
		if (temp == NULL && position == idx)
		{
			pre->next = new;
			new->prev = pre;
			return (*head);
		}
	}
	free(new);
	return (NULL);
}
