#include "main.h"

/**
 * print_triangle - prints triangle using blocks of #
 * @size: size of triangle
 * Return: nothing!
 */
void print_triangle(int size)
{
	int i;
	int s;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i >= 0; i--)
		{
			for (s = size - i; s > 0; s--)
			{
				_putchar(35);
			}
			for (h = 0; h <= i; h++)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}

	}
}
