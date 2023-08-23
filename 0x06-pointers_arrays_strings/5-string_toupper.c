#include "main.h"
/**
 * string_toupper - converts characters to upper
 * @str: pointer to string
 * Return: returns the pointer to string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}

	}

	return (str);
}
