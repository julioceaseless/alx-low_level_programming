#include "lists.h"
/**
 * get_dnodeint_at_index - finds the node at a specified index
 * @head: head pointer
 * @index: node position
 * Return: node at the specified index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int count = 0;

	temp = head;

	while (temp != 0)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
