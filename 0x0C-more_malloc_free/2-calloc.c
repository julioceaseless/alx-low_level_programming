#include "main.h"
/**
 * _calloc - allocates memory for an array like the calloc() function
 * @nmemb: number of elements
 * @size: bytes of each element
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	char *char_ptr = NULL;
	unsigned int i, total_size = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	char_ptr = ptr;

	for (i = 0; i < total_size; i++)
	{
		char_ptr[i] = 0;
	}
	return (ptr);
}
