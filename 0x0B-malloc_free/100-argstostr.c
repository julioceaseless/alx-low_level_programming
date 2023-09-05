#include "main.h"
/**
 * str_len - finds the length of a string
 * @str: string
 * Return: length of string + '\0'
 */

int str_len(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	return (a);
}
/**
 * argstostr - concatenates arguments passed to the  main
 * @ac: number of arguments
 * @av: argument vector
 * Return: returns pointer to character
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	char *ptr;
	int i, j, strlen = 0;

	if (ac < 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strlen += str_len(av[i]);
	}

	concat = (char *) malloc((strlen + ac + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	ptr = concat;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < str_len(av[i]); j++)
		{
			*ptr++  = av[i][j];
		}
		*ptr++ = '\n';
	}

	*ptr = '\0';

	return (concat);
}
