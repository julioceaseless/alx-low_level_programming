#include "main.h"
/**
 * word_count - counts number of words in a string
 * @str: pointer to string
 * Return: number of words
 */
int word_count(char *str)
{
	int word_count = 0, inside_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			inside_word = 1;
		}
		else if (inside_word)
		{
			word_count++;
			inside_word = 0;
		}

	}
	if (inside_word)
	{
		word_count++;
	}
	return (word_count);
}

/**
 * str_len - determines length of string
 * @str: length of string
 * Return: length of string
 */
int str_len(char *str)
{
	int i;

	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			;
	}
	return (i);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to the string
 */
char **strtow(char *str)
{
	char **words;
	int i, j, word_index = 0, word_len = 0, num_of_words = word_count(str);

	if (str == NULL || str[0] == '\0' || num_of_words == 0)
		return (NULL);

	words = (char **) malloc((num_of_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i <= str_len(str) && num_of_words; i++)
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
			word_len++;
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words[word_index] = (char *) malloc((word_len + 1) * sizeof(char));

			if (words[word_index] == NULL)
			{
				for (j = 0; j < word_index; j++)
					free(words[word_index]);
				free(words);
				return (NULL);
			}
			else
			{
				for (j = 0; j < word_len; j++)
					words[word_index][j] = str[i - word_len + j];
				words[word_index][j] = '\0';
				word_index++;
				word_len = 0;
			}
		}
	}
		words[num_of_words] = NULL;
		return (words);
	}
