#include "main.h"
/**
 * iterate_rev - iterates the string from forward
 * @s: pointer to string
 * Return: returns 1 if palindrome and 0 otherwise
 */
char iterate_rev(char *s)
{
	if (*s == '\0')
		return (1);
	iterate_rev(s + 1);
	return (*s);
}

/**
 * is_palindrome - iterates the string from forward
 * @s: pointer to string
 * Return: returns 1 if palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	if ((*s == iterate_rev(s)) && is_palindrome(s + 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
