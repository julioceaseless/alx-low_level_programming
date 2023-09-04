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
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
