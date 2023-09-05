#include "main.h"
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

	str_copy[i + 1] = '\0';
	return (str_copy);
}
