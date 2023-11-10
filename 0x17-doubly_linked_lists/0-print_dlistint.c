#include "lists.h"
/**
 * print_dlistint - prints the elements inside a doubly linked list.
 * also prints the length.
 * @h: head pointer
 * Return: returns the length of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = NULL;

	if (h == 0)
		return (0);
	temp = h;

	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
