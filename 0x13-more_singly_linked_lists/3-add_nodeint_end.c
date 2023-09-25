#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end  of the linked list
 * @head: head pointer
 * @n: int data to store in the new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	/* first create the new node */
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL); /* malloc failed */

	newnode->n = n; /* pass data to the new node */

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		/* traverse the linked list */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* insert newnode at the end of the list */
		newnode->next = NULL;
		temp->next = newnode;
	}
	return (newnode);
}
