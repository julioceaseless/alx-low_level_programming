#include "function_pointers.h"
/**
 * array_iterator - prints elements in an array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
