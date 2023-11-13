#include "main.h"
/**
 * _strncpy - copies n bytes of src to dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: n bytes
 *
 * Return: pointer to final string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
