#include "lists.h"
/**
 * add_nodeint - adds not at the begining of the linked list
 * @head: pointer to the head of the linked list
 * @n: value to add to the node
 * Return: returns the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL)
	{
		*head = new_node;
		new_node->next = 0;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);

}
