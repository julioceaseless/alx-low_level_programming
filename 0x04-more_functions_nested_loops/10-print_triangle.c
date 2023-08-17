#include "main.h"

/**
 * print_triangle - prints triangle using blocks of #
 * @n: number of times \ is printed
 * Return: nothing!
 */
void print_triangle(int size)
{
	int i;
	int s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i <= 0; i--)
		{
			for (s = 0; s <= i; s++)
			{
				_putchar(' ');
			}
			_putchar(35);
			_putchar('\n');
		}

	}
}
