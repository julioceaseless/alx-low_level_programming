#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list - singly linked list
 * @str: pointer to string
 * @len: variable for storing the length of string
 * @next: pointer to the next node
 * Description: this is the first project of singly
 * linked lists.
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif

