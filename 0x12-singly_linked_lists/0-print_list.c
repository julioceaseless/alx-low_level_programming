#include "lists.h"
/**
 * print_list - prints the elements in a linked list
 * @h: a node of type list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (nil)\n", h->len);
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
