#include "lists.h"

/**
 * listint_len - prints the elements in the linked list
 * @h: pointer to the head of a linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* traverse the linked list */
	while (h != 0)
	{
		h = h->next;
		count++;

	}
	return (count);
}
