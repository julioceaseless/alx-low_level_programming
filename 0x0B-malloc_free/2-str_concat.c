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
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* get length of strings */
	len1 = str_len(s1);
	len2 = str_len(s2);
	/* printf("s1: %d, s2: %d\n", len1, len2);*/
	s3 = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		s3[len1 + i] = s2[i];
	}

	s3[len1 + len2] = '\0';

	return (s3);
}
