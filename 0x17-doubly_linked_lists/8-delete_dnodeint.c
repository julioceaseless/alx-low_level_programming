#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a specified position
 * @head: pointer to the beginning of the list
 * @index: position to delete node
 * Return: 1 if successful and -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = 0;
		free(temp);
		return (1);
	}

	while (temp != NULL && len < index)
	{
		temp = temp->next;
		len++;
	}
	if (temp == NULL)
		return (-1);

	/* point the next pointer to the previous node */
	temp->prev->next = temp->next;

	/* point the prev pointer to the next node */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
