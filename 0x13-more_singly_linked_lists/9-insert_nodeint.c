#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at a given position
 * @head: pointer to listint_t
 * @idx: given position
 * @n: integer
 * Return: address of new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int i = 0;
	listint_t *new_node;

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (i < (idx - 1))
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (*head);
}
