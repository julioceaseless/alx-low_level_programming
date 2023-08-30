#include "main.h"
/**
 * _putchar - writes a single character to the standard output
 * @c: character c.
 * Return: returns number of bytes written to the standard output.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
