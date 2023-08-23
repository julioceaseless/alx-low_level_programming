#include "main.h"
/**
 * leet - encodes string into 1337
 * @input: input string
 * Return: pointer to encoded string
 */

char *leet(char *input)
{
	int i = 0;
	char *encoded = (char *)malloc(strlen(input) + 1);
	char mapping[128] = {0};

	mapping['a'] = mapping['A'] = '4';
	mapping['e'] = mapping['E'] = '3';
	mapping['o'] = mapping['O'] = '0';
	mapping['t'] = mapping['T'] = '7';
	mapping['l'] = mapping['L'] = '1';

	while (input[i] != '\0')
	{
		if (mapping[(unsigned char)input[i]] != 0)
		{
			encoded[i] = mapping[(unsigned char)input[i]];
		}
		else
		{
			encoded[i] = input[i];
		}

		i++;
	}

	encoded[i] = '\0';

	return (encoded);
}
