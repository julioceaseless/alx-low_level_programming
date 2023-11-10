#include "lists.h"
/**
 * get_list_len - determines the length of a doubly linked list
 * @h: head node pointer
 *
 * Return: returns the length of the doubly linkedlist
 */
unsigned int  get_list_len(dlistint_t **h)
{
	size_t count = 0;
	dlistint_t *temp = NULL;

	if (*h == NULL)
		return (0);
	temp = *h;

	while (temp != 0)
	{
		temp = temp->next;
		count += 1;
	}
	return (count);
}

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

	if (*h == NULL && idx > 0)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	temp = *h;
	len = get_list_len(h);
	if (idx > (len - 1))
		return (NULL);
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
