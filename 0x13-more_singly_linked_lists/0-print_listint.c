#include "lists.h"

/**
 * print_listint - print all elements
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *temp;

	if (h == NULL)
	{
		printf("Error\n");
		return (-1);
	}
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
