#include "main.h"
/**
 * _strpbrk - locates the first occurence in string s
 * of any bytes in string accept
 * @s: pointer to string
 * @accept: pointer to the bytes being searched
 * Return: pointer to the bytes in s that matches one
 * of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

