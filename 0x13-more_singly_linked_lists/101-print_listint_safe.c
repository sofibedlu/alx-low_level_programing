#include "lists.h"

/**
 * print_listint_safe - prints listint_t linked list
 * @head: head pointer to listint_t
 * Return: number of nodes
 */
/*
 * Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
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

/**
 * Output format: see example
[0x1b500f0] 1024
[0x1b500d0] 402
[0x1b500b0] 98
[0x1b50090] 4
[0x1b50070] 3
[0x1b50050] 2
[0x1b50030] 1
[0x1b50010] 0
[0x1b50600] 1024
[0x1b505e0] 402
[0x1b505c0] 98
[0x1b505a0] 4
[0x1b50580] 3
[0x1b50560] 2
[0x1b50540] 1
[0x1b50110] 0
-> [0x1b505c0] 98
*/

