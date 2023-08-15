#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: - integer value
 *
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	_putchar('0' + last_digit);

	return (last_digit);

}
