#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: head pointer to listint_t
 * Return: pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
