#include "lists.h"

/**
 * print_listint_safe - prints listint_t linked list
 * @head: head pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	int i = 0;

	if (head == NULL)
		exit(98);
	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp->next, temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
