#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes struct
 * @d: pointer to struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to the name of the owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	d->name = name;
	d->age = age;
	d->owner = owner;
}

