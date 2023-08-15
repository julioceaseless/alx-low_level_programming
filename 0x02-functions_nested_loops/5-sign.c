#include "main.h"

/**
 * print_sign  - checks if number is +, -, or 0
 *
 * @n: - ascii character to check
 *
 * Return: 1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
}
