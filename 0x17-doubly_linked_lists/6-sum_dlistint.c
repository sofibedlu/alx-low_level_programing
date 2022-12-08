#include "lists.h"

/**
 * sum_dlistint - sum all the data in the dlistint_t list
 * @head: head pointer of dlistint_t list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
