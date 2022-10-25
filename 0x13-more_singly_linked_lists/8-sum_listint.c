#include "lists.h"

/**
 * sum_listint - compute sum of all the data(n) of listint_t
 * @head: head pointer of listint_t
 * Return: sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int n = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		n += temp->n;
		temp = temp->next;
	}
	return (n);
}
