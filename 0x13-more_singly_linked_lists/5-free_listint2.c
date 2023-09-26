#include "lists.h"
/**
 * free_listint2 - frees listint_t list and sets head to null
 * @head: head pointer
 * Return: nothing!
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		/* move head to the next node */
		*head = (*head)->next;
		free(temp);
	}
	(*head) = NULL;
}
