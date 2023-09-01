#include "main.h"
/**
 * _strspn - calculates the length (bytes) of a prefix substring
 * @s: pointer to string
 * @accept: pointer bytes to search for
 * Return: length of the substring
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
