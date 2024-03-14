#include "search_algos.h"

/* helper functions */
int do_binary_search(int *array, size_t l, size_t u, int value);
void print_array(int *array, size_t left, size_t right);
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
 * do_binary_search - searches for a value in sorted array of integers
 * using binary search
 * @array: array of integers
 * @l: floor of the block size
 * @r: ceiling of the block
 * @value: value to search for in the array
 * Return: index where the value is located
 */

int do_binary_search(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (array == NULL)
		return (-1);

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

/**
 * exponential_search - function searches a value in a sorted array
 * of integers using exponential search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to look for
 * Return: index of the value or -1 if value is not found
 *
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t lower, upper = 1;

	if (size == 0 || !array)
		return (-1);

	if (array[0] == value)
		return (0);
	if (array[upper] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", upper, array[upper]);
		return (upper);
	}
	/* search the block where the value could be exponentially */
	while (upper < size && array[upper] < value)
	{
		printf("value checked array[%ld] = [%d]\n", upper, array[upper]);
		lower = upper;
		upper *= upper;
		/* keep upper from exceeding the size - 1 */
	}
	if (upper >= size)
		upper = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);
	return (do_binary_search(array, lower, upper, value));

}
