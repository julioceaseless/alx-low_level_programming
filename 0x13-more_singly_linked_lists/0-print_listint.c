#include "lists.h"

/**
 * print_listint - prints the elements in the linked list
 * @h: pointer to the head of a linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;
	/* traverse the linked list */
	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;

	}
	return (count);
}
