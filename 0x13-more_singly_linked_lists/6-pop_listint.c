#include "lists.h"
/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to the head node
 * Return: data of old head node
 */
int pop_listint(listint_t **head)
{
	int n = 0; /* store head node's data n */
	listint_t *temp;

	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
		n = (*head)->n; /* copy head->n */
		temp = *head; /* store current head node */
		*head = (*head)->next; /* move head to next node */
		free(temp); /* free old head */
	}
	return (n);
}
