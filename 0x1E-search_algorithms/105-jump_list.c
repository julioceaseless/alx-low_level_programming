#include "search_algos.h"
#include <math.h>
/**
 * jump_list - searches for a value in a sorted list of integers using
 * Jump search algorithm
 * @list: header to linked list
 * @size: size of the list
 * @value: value to search for
 *
 * Return: pointer to the node containing the value, or NULL if not found
 */


listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *lower, *upper;
	size_t jump_size, i;

	if (list == NULL)
		return (NULL);

	/* calculate jump size */
	jump_size = sqrt(size);

	/* initialize lower and upper limits */
	lower = list;
	upper = list;

	/* move the upper pointer to the ceiling of the block */
	for (i = 0; upper->next && i < jump_size; i++)
		upper = upper->next;

	printf("Value checked at index [%lu] = [%d]\n", upper->index, upper->n);
	while (upper->n < value && upper->next)
	{
		/* move lower to the floor of next block */
		lower = upper;

		/* move upper limit to the ceiling of the next block */
		for (i = 0; upper->next && i < jump_size; i++)
			upper = upper->next;
		printf("Value checked at index [%lu] = [%d]\n", upper->index, upper->n);
	}
	/* perform a linear search */
	printf("Value found between indexes [%lu] and [%lu]\n",
			lower->index, upper->index);
	while (lower && lower != upper->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", lower->index, lower->n);
		if (lower->n == value)
			return (lower);
		lower = lower->next;
	}
	/* printf("Value not found\n"); */
	return (NULL);
}

