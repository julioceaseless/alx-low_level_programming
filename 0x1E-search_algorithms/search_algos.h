#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* include files */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
        int n;
        size_t index;
        struct listint_s *next;
} listint_t;


/* define prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
void print_list(const listint_t *list);
listint_t *create_list(int *array, size_t size);
void free_list(listint_t *list);

#endif
