#include "dog.h"
/**
 * free_dog -  frees dynamically allocated memory for dog struct
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* free allocated memory to owner and name strings */
		free(d->name);
		free(d->owner);

		/* free alocated memory for dog_t structure */
		free(d);
	}
	else
	{
		return;
	}
}
