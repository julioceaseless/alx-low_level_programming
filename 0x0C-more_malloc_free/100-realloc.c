#include "main.h"
/**
 * _realloc - resizes previously allocated memory block.
 * mimics realloc() function
 * @ptr: pointer to old memory block
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int i, mem_size = 0;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	/* reallocate memory */
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);
	/* determine size of memory bytes to copy */
	mem_size = (new_size > old_size) ? old_size : new_size;

	/* copy content from old to new */
	for (i = 0; i < mem_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	/* free old memory and return new memory block */
	free(ptr);
	return (new_ptr);
}
