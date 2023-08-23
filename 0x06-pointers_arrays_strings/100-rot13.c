#include "main.h"
/**
 * rot13 - replaces letter with the 13th letter (rot13)
 * @str: pointer to string
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char target_char[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replace_char[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; target_char[j] != '\0'; j++)
		{
			if (str[i] == target_char[j])
			{
				str[i] = replace_char[j];

				break;

			}

		}
	}

	return (str);
}
