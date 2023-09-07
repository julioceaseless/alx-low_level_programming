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
	int num_of_words = 0;
	char **words;
	int word_len = 0;
	int i, j, word_index = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_of_words = word_count(str);

	/* number of rows */
	words = (char **) malloc((num_of_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= str_len(str) && num_of_words; i++)
		{
			/* count word length */
			if ((str[i] != ' ') && (str[i] != '\0'))
			{
				word_len++;
			}
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				/* allocate memory for words */
				words[word_index] = (char *) malloc((word_len + 1) * sizeof(char));

				/* if malloc fails, clean up and roll back */
				if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[word_index]);
					}
					free(words);
					return (NULL);
				}
				else
				{
					/* copy words */
					for (j = 0; j < word_len; j++)
					{
						words[word_index][j] = str[i - word_len + j];
					}
					words[word_index][j] = '\0';
					word_index++;
					word_len = 0;
				}
			}
		}
		words[num_of_words] = NULL;
		return (words);
	}
}
