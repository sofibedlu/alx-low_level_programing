#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *tnode = *head;

	while (tnode != NULL)
	{
		temp = tnode;
		tnode = tnode->next;
		free(temp);
	}
	*head = NULL;
}
