#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: head node pointer
 * @n: data to insert into the linkedlist
 *
 * Return: returns address of the newnode
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *newnode = NULL, *temp = NULL;

	/* allocate memory for new node */
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	/* initialize new node */
	newnode->n = n;
	newnode->next = 0;

	if (*head == 0)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newnode->prev = temp;
		temp->next = newnode;
	}
	return (newnode);
}
