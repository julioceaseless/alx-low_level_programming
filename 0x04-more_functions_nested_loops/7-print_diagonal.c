#include "main.h"

/**
 * print_diagonal - prints  \ on the terminal
 * @n: number of times \ is printed
 * Return: nothing!
 */
void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}

	}
}
