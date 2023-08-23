#include "main.h"
/**
 * _strncat - concatenate dest with src (use n bytes)
 *
 * @dest: second string
 * @src: first string
 * @n: bytes
 *
 * Return: pointer to the resulting (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat (dest, src, n));
}
			
