#include "lists.h"
/**
 * sum_listint - adds up the data(n) in all nodes
 * @head: head node
 * Return: returns sum of all data(n) in all nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	/* check if node exists */
	if (head == NULL)
		return (0);
	/* initiate temp */
	temp = head;

	/* traverse the linked list and add the data */
	while (temp != NULL)
	{	sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
