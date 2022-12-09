#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of dlistint_t list
 * @head: head pointer of dlistint_t
 * @n: the element that's going to add
 * Return: pointer to the new dlistint_t list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (new);
}
