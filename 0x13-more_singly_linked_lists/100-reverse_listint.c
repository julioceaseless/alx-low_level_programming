#include "lists.h"
/**
 * reverse_listint - reverses the nodes in a linkedlist
 * @head: pointer to the first node
 * Return: pointer to the first node of the reversed linkedlist
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *firstnode, *nextnode;

	/* base case: if list is empty or has one node only */
	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	firstnode = *head;
	nextnode = firstnode->next;

	*head = reverse_listint(&nextnode);
	firstnode->next->next = firstnode;
	firstnode->next = NULL;

	return (*head);
}
