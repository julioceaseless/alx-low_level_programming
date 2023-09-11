#include "dog.h"
/**
 * size_of_str - checks the length of a string
 * @str: pointer to the string
 * Return: length of string
 */
int size_of_str(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * _strdup - duplicates string s
 * @str: pointer to string s
 * Return: returns pointer to the duplicate of string s
 */

char *_strdup(char *str)
{
	char *str_copy;
	int i;
	int size_str;

	if (str == NULL)
		return (NULL);

	size_str = size_of_str(str);

	str_copy = malloc((size_str + 1) * sizeof(char));

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; i < size_str; i++)
	{
		str_copy[i] = str[i];
	}

	str_copy[size_str] = '\0';
	return (str_copy);
}

/**
 * new_dog - creates a new dog profile
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of new owner
 * Return: returns pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	/* allocate memory and copy the name string */
	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	return (my_dog);
}
