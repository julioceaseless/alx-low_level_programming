#include "lists.h"
/**
 * add_node - creates a new node
 * @head: pointer to a pointer to a node
 * @str: string to be added to the new node
 * Return: returns pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *firstNode = NULL;

	if (str == NULL)
		return (NULL);

	/* create a new node and allocate memory */
	firstNode = (list_t *)malloc(sizeof(list_t));

	if (firstNode == NULL)
		return (NULL);

	/* copy string */
	firstNode->str = strdup(str);
	firstNode->len = strlen(str);
	if (firstNode->str == NULL)
	{
		free(firstNode);
		return (NULL);
	}

	/* make the next pointer point to the current head */
	firstNode->next = *head;

	*head = firstNode;

	return (firstNode);
}
