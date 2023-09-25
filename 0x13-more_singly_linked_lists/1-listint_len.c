#include "lists.h"

/**
 * print_listint - prints the elements in the linked list
 * @h: pointer to the head of a linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;
	/* traverse the linked list */
	while (temp != NULL)
	{
		temp = temp->next;
		count++;

	}
	return (count);
}
