#include "lists.h"
/**
 * free_dlistint - frees the doubly linked list
 * @head: pointer to head
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
