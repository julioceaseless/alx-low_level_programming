#include "main.h"

/**
 * times_table - prints the 9*9 table
 *
 * Return: returns last digit
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);

			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + i * j);
			}
		}
		_putchar('\n');
	}
}
