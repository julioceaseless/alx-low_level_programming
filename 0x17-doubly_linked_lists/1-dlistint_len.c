#include "lists.h"

/**
 * dlistint_len - determines the length of a doubly linked list
 * @h: head node pointer
 *
 * Return: returns the length of the doubly linkedlist
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = NULL;

	if (h == 0)
		return (0);
	temp = h;

	while (temp != 0)
	{
		temp = temp->next;
		count += 1;
	}
	return (count);
}
