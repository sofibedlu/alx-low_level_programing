#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning ofdlistint_t list
 * @head: head of dlistint_t
 * @n: integer that wiil be added to dlistint_t list
 * Return: address of the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (*head);
}
