#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning of a doubly linked list
 * @head: head node pointer
 * @n: data to insert into the linkedlist
 *
 * Return: returns address of the newnode
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *newnode = NULL;

	/* allocate memory for new node */
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	/* initialize new node */
	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;
	if (*head == 0)
	{
		*head = newnode;
	}
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
