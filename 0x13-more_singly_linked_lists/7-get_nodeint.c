#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node from linkedlist
 * @head: head node
 * @index: the index from which to extract node
 * Return: returns nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0, len = 0;
	listint_t *temp;

	/* check if node exists */
	if (head == NULL)
		return (NULL);
	/* initiate temp */
	temp = head;

	/* check length of the linked list */
	while (temp != 0)
	{
		temp = temp->next;
		len++;
	}
	len++;

	/* return null if index is greater than length */
	if (index > len)
		return (NULL);

	/*reset head and extract node */
	temp = head;
	while (counter != index)
	{
		temp = temp->next;
		counter++;
	}
	return (temp);
}
