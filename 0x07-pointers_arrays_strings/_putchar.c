#include "main.h"
#include <unistd.h>
/**
 *_putchar - prints character
 * @c: character
 * Return: ascii char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
