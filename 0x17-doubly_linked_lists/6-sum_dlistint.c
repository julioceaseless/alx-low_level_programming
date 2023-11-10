#include "lists.h"
/**
 * sum_dlistint - adds the value of each node together
 * @head: head pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	temp = head;

	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
