#include "function_pointers.h"
/**
 * int_index - returns the array index of the first match
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to compare function
 * Return: index of the first match or -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 && cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
