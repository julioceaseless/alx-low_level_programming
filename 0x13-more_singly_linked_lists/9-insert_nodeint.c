#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to head
 * @idx: index at which to insert the new node
 * @n: data to pass to new node
 * Return: newnode or NULL if insertion failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = NULL, *temp = NULL, *prev = NULL;
	unsigned int len = 0, count = 0;

	/* check length of linked list */
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (idx > len)
		return (NULL);

	temp = *head;
	/* ---create the new node--- */
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (count < idx)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	newnode->next = temp;
	prev->next = newnode;
	return (newnode);
}
