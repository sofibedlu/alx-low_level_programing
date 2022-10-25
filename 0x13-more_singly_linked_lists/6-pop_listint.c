#include "lists.h"

/**
 * pop_listint - deletes the head of the node
 * @head: pointer to the listint_T=t
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;
	listint_t *temp1 = *head;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	temp1 = temp1->next;
	free(temp);
	*head = temp1;
	return (n);
}
