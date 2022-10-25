#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *cnode;

	if (*head == NULL)
		return;
	cnode = *head;
	while (cnode != NULL)
	{

		temp = cnode;
		cnode = cnode->next;
		free(temp);
	}
	*head = NULL;
}
