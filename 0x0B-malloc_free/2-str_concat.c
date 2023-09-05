#include "main.h"
/**
 * str_len - measures the size of string
 * @str: string
 * Return: returns string length excluding '\0'
 */

int str_len(char *str)
{
	int len;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * str_concat - joins 2 strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *joined_str;

	if (s2 == NULL && s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (s1);

	if (s1 == NULL)
		return (s2);

	len1 = str_len(s1);
	len2 = str_len(s2);

	joined_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	for (i = 0; i < len1; i++)
	{
		joined_str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		joined_str[i + len1] = s2[i];
	}

	joined_str[i + len1] = '\0';

	return (joined_str);
}
