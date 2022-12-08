#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of dlistint_t list
 * @head: head pointer of dlistint_t list
 * @index: index
 * Return: the nth node specified by the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (n == index)
			return (temp);
		temp = temp->next;
		n++;
	}
	return (NULL);
}
