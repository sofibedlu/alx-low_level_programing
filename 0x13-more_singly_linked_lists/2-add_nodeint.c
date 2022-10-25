#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of the listint_t
 * @head: the listint_t list
 * @n: integer
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
