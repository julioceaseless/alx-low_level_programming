#include "lists.h"
/**
 * free_list - frees a singly linked list
 * @head: pointer to a node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
