#include "search_algos.h"
/**
 * interpolation_search - function to search a value using
 * interpolation algorithm
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search
 * Return: position of the value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, probe;

	if (!array)
		return (-1);

	high = size - 1;
	low = 0;

	while (value >= array[low] && value <= array[high]
			&& low <= high)
	{
		/* guess where the value could be */
		probe = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
			return (probe);

		if (array[probe] < value)
			low = probe + 1;
		else
			high = probe - 1;
	}
	printf("Value checked array[%ld] is out of range\n", probe);
	return (-1);
}
