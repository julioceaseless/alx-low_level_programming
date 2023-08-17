#include "main.h"

/**
 * print_square - prints  square using ##
 * @size: size of the square
 * Return: nothing!
 */
void print_square(int size)
{
	int l;
	int w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
