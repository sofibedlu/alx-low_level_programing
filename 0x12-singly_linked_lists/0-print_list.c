#include "lists.h"

/**
 * print_list - print elements of a list_t
 * @h: pointer to the list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	int i;

	i = 0;
	if (h != NULL)
	{
		temp = h;
		while (temp != NULL)
		{
			if (temp->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
