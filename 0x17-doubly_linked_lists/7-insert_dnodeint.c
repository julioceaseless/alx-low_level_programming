#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at a new index
 * @h: pointer to head
 * @idx: position to insert new node
 * @n: value of new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *newnode = NULL;
	unsigned int len = 0, pos = 0;

	temp = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	while (temp != 0)
	{
		temp = temp->next;
		len++;
	}
	if (idx > (len - 1) || len == 0)
		return (NULL);
	temp = *h;
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (temp != 0)
	{
		if (pos == idx)
		{
			newnode->next = temp;
			newnode->prev = temp->prev;
			temp->prev->next = newnode;
			temp->prev = newnode;
			return (newnode);
		}
		temp = temp->next;
		pos++;
	}
	return (NULL);
}
