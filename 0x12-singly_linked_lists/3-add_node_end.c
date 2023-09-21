#include "lists.h"
/**
 * add_node_end - creates a new node
 * @head: pointer to a pointer to a node
 * @str: string to be added to the new node
 * Return: returns pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode = NULL;
	list_t *current = NULL;

	if (str == NULL)
		return (NULL);

	/* create a new node and allocate memory */
	lastNode = (list_t *)malloc(sizeof(list_t));

	if (lastNode == NULL)
		return (NULL);

	/* copy string */
	lastNode->str = strdup(str);
	lastNode->len = strlen(str);
	if (lastNode->str == NULL)
	{
		free(lastNode);
		return (NULL);
	}

	/* point next to null to make the new node the last one */
	lastNode->next = NULL;

	/* make new node the head if list is empty */
	if (*head == NULL)
	{
		*head = lastNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = lastNode;
	}
	return (lastNode);
}
