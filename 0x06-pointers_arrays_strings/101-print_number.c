#include "main.h"
/**
 * print_number - print numbers
 *
 * @n: number
 * Return: nothing!
 */
void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		temp = -n;
		_putchar('-');
	}
	else
	{
		temp = n;
	}

	temp /= 10;

	if (temp != 0)
		print_number(temp);

	_putchar((unsigned int) n % 10 + '0');
}
