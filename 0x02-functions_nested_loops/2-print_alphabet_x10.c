#include "main.h"

/**
 * print_alphabet_x10 - print abc...z 10 times
 *
 * Description: - prints alphabets
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
