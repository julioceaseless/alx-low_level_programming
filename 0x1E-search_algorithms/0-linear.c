#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using linear search
 * @array: array of int elements
 * @size: size of array
 * @value: value to search for
 * Return: first index where value is found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
