#include "main.h"
/**
 * cap_string - converts letters to upper
 * @str: string
 * Return: pointer to converted string
 */
char *cap_string(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);

		}
		else if (str[i] == ' ')
		{
			i++;

			str[i] = toupper(str[i]);
		}
		else if (str[i] == '\n' && isalpha(str[i + 2]))
		{
			i++;

			str[i] = toupper(str[i]);

		}
		else if (str[i] == '\t')
		{
			i++;

			str[i] = toupper(str[i]);
		}
		else if (str[i] == '.' && isalpha(str[i + 1]))
		{
			i++;

			str[i] = toupper(str[i]);
		}

		i++;
	}

	return (str);
}
