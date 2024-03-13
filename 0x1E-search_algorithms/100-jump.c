#include <math.h>
#include "search_algos.h"
/**
 * jump_search - uses jump search algorithm to search for a value
 * in a sorted list of integers
 * @array: array of int elements
 * @size: size of array
 * @value: value to search for
 * Return: index where the value is located and -1
 * if value not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_size, i;
	size_t l = 0, r = size;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", l, array[l]);
	if (array[l] == value)
		return (l);
	
	jump_size = sqrt(size - 1);

	if (array[jump_size] > value)
	{
		r = jump_size - 1;
		printf("Value found between indexes [%ld] and [%ld]\n", l, r);
		for (i = l; i < r; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	else
	{
		l = jump_size + 1;
		printf("Value found between indexes [%ld] and [%ld]\n", l, r);
		for (i = l; i < r; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
