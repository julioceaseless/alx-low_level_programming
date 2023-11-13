#include "main.h"
/**
 * _strchr - searches the first occurence of char c in
 * string pointed to by s
 *
 * @s: pointer to string
 * @c: char to search
 * Return: pointer to first occurence of char c
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
