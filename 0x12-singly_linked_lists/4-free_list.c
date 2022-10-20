#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}