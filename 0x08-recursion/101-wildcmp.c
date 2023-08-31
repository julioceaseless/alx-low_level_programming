#include "main.h"
/**
 * wildcmp - compares 2 strings while taking into
 * consideration * wildcard
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 1 if strings can be considered identical. 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		while (*s2 == '*')
		{
			s2++;
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
