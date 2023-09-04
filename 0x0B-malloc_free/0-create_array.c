#include "main.h"
/**
 * create_array - creates array of chars and initializes
 * it with a specific char
 * @size: size of array
 * @c: character to put in array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
