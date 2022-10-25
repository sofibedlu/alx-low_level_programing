#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of listint_t
 * @head: pointer to the listin_t
 * @index: index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	return (temp);
}
