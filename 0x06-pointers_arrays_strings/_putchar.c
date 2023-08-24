#include <unistd.h>
#include "main.h"
/**
 * _putchar - putchar wrapper function
 * @c: char
 * Return: ascii char
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
