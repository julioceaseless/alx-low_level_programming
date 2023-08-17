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
		for (i = 1; i <= size; i++)
		{
			for (s = 1; i <= size; s++)
			{
				_putchar(35);
			}
			_putchar(' ');
			_putchar('\n');
		}

	}
}
