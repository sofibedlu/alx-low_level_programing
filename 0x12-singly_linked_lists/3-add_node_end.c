#include "lists.h"

/**
 * add_node_end - add new node at the ende
 * @head: pointer to list
 * @str: string pointer
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *temp;
	list_t *new_node;
	int len;

	if (str != NULL)
	{
		dup = strdup(str);
		len = strlen(dup);
	}
	else
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
