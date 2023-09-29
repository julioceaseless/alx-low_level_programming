#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character to stdout
 * @c: character
 * Return: size of char (1)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
