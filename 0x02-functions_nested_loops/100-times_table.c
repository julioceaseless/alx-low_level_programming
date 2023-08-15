#include "main.h"

/**
 * print_times_table - prints the n*n table
 *
 * @n: size of table
 * Return: returns last digit
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i * j > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (i * j) / 100);
					_putchar('0' + ((i * j) / 10) % 10);
					_putchar('0' + (i * j) % 10);
				}
				else if ((i * j) > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (i * j) / 10);
					_putchar('0' + (i + j) % 10);
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + i * j);
				}
			}
			_putchar('\n');
		}
	}
}
