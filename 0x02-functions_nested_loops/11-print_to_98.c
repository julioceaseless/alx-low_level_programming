#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 *
 * @i: current position
 *
 * Return: void
 */

void print_to_98(int i)
{
	if (i < 98)
	{
		while (i <= 98)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
			i++;
		}
	}
	else if (i > 98)
	{
		while (i >= 98)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
			i--;
		}
	}
	else
	{
		printf("%d\n", i);
	}
}
