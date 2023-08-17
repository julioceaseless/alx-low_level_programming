#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 * Return: nothing!
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');

}
