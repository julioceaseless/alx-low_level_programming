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
	size_t lower, upper, i,  jump_size;

	jump_size = sqrt(size);
	lower = 0;
	upper = jump_size;

	/* handle null array */
	if (array == NULL)
		return (-1);
	/* check at index 0 */
	printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);

	/* find the block where the value could be */
	while (value > array[upper])
	{
		/* adjust the lower and upper bounds to point to next block */
		lower = upper;
		upper += jump_size;

		if (upper > size)
		{
			printf("Value checked array[%ld] = [%d]\n", upper, array[upper]);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);

	}

	/* printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);*/
	printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);

	/* perform linear search within the block */
	for (i = lower; i <= upper; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
