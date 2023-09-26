#include "lists.h"

/**
 * print_listint - prints the elements in the linked list
 * @h: pointer to the head of a linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int n = 0;
	const listint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;

	/* traverse the linked list */
	while (temp != 0)
	{
		n = temp->n;
		printf("%d\n", n);
		temp = temp->next;
		count++;

	}
	return (count);
}
