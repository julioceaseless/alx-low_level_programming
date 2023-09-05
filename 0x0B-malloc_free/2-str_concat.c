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

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL)
		s1 = "";

	len1 = str_len(s1);
	len2 = str_len(s2);

	joined_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (joined_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		joined_str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		joined_str[len1 + i] = s2[i];
	}

	joined_str[len1 + len2] = '\0';

	return (joined_str);
}
