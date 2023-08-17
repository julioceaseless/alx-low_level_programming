#include "main.h"

/**
 * print_triangle - prints triangle using blocks of #
 * @size: size of triangle
 * Return: nothing!
 */
void print_triangle(int size)
{
	int r;
	int s;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s > 0; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}

	}
}
