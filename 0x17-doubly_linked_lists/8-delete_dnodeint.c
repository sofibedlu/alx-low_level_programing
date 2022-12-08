#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of a dlistint_t list
 * @head: head pointer of dlistint_t list
 * @index: position of node to removed
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (-1);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (num == index)
		{
			if (temp->prev == NULL)
			{
				temp->next->prev = NULL;
				*head = temp->next;
				free(temp);
				return (1);
			}
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		num++;
	}
	return (-1);
}
