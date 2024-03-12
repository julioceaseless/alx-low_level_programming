#include "search_algos.h"
/**
 * print_array - helper function to print array elements
 * @array: array of integers
 * @left: index of first element
 * @right: index of last element.
 * Return: Nothing!
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i < right)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");

}

/**
 * binary_search - searches for a value in sorted array of integers
 * using binary search
 * @array: array of integers
 * @size: number of elements in the array
 * @value: value to search for in the array
 * Return: index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	print_array(array, l, r);
	while (l < r)
	{
		m = (l + r) / 2;
		if (value == array[m])
			return (m);
		if (value < array[m])
		{
			r = m - 1;
			print_array(array, l, r);
		}
		else
		{
			l = m + 1;
			print_array(array, l, r);
		}
	}
	return (-1);
}
