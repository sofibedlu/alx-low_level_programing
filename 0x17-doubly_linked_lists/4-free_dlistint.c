#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: head pointer to dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
}
