#include "main.h"
/**
 * _memcpy - copies n bytes from memory area (src) to memory area (dest)
 * @dest: destination memory area
 * @src: source of bytes
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
