#include "main.h"
/**
 * leet - encodes string into 1337
 * @str: input string
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int i, j, size;

	char target1[] = {'a', 'e', 'o', 't', 'l'};
	char target2[] = {'A', 'E', 'O', 'T', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};

	size = sizeof(target1) / sizeof(target1[0]);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (str[i] == target1[j] ||
				str[i] == target2[j])
			{
				str[i] = replace[j];
			}

		}

	}

	return (str);
}
