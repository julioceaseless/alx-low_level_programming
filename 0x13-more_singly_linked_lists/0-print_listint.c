#include "lists.h"

/**
 * print_listint - prints the elements in the linked list
 * @h: pointer to the head of a linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* traverse the linked list */
	while (h != 0)
	{
		printf("%d\n", temp->n);
		h = h->next;
		count++;

	}
	return (count);
}
