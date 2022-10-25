#include "lists.h"

/**
 * add_nodeint_end - add new node at the end
 * @head: new nodes
 * @n: integer
 * Return: the address of the element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(new_node));
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
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}
