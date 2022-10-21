#include "lists.h"
/**
 * add_node - add new node at the beginning of the list
 * @head: pointer to the list
 * @str: string pointer
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len;
	char *dup;

	dup = strdup(str);
	len = strlen(dup);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = dup;
	temp->len = len;
	temp->next = NULL;
	if (temp->str == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	temp->next = *head;
	*head = temp;
	return (*head);
}
