#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to the string
 * @needle: pointer to substring
 * Return: returns pointer to the beginning of the located substring
 * or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
