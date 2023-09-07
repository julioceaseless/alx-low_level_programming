#include "main.h"
/**
 * array_range -  creates an array of integers with values
 * from min(inclusive) to max ordered from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int *arr_ptr = NULL;
	int i;

	if (min > max)
		return (NULL);

	/* reserve memory */
	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	arr_ptr = arr;
	/* initialize the array */
	for (i = min; i <= max; i++)
	{
		*arr_ptr++ = i;
	}
	return (arr);
}
