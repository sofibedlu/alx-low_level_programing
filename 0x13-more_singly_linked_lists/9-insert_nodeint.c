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
	listint_t *temp1;
	unsigned int i = 0;
	listint_t *new_node;

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	temp1 = *head;
	while (i < idx)
	{
		if (temp != NULL)
			temp = temp->next;
		else
			return (NULL);
		i++;
	}
	i = 0;
	while (i < (idx - 1))
	{
		temp1 = temp1->next;
		i++;
	}
	new_node->next = temp;
	temp1->next = new_node;
	return (*head);
}
