#include "main.h"
/**
 * find_palindrome - helper function to find palindrome
 * @str_start: pointer to the begining of string
 * @str_end: pointer to the end of the string
 * Return: 1 or 0
 */

int find_palindrome(char *str_start, char *str_end)
{
	if (str_start >= str_end)
	{
		return (1);
	}

	/* check if the first half of string equals half */
	if (*str_start != *str_end)
	{
		return (0);
	}

	/* navigate the string front to end and end to front*/
	return (find_palindrome(str_start + 1, str_end - 1));
}


/**
 * is_palindrome - calls find_palindrome
 * @s: pointer to string
 * Return: 1 if palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	/*pass the pointer to start of string and pointer to end*/
	return (find_palindrome(s, s + strlen(s) - 1));
}
