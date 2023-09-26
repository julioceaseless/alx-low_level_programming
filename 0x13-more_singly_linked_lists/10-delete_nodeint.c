#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: pointer to head node
 * @index: position of node to delete
 * Return: 1 for success and -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *temp = NULL;
	unsigned int len = 0, count = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	/* find length of linkedlist */
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (index >= len)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/* delete node */
	while (count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
