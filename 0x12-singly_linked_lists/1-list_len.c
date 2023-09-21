#include "lists.h"
/**
 * print_list - prints the number of elements in a linked list
 * @h: pointer to the head of a node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
