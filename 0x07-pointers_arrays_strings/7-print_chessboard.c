#include"main.h"
/**
 * print_chessboard - prints content of a 2-D array
 * @a: array pointer
 * Return: nothing!
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	int num_of_rows = sizeof(*a);
	int num_of_columns = sizeof(*a) / sizeof(**a);

	for (i = 0; i < num_of_rows; i++)
	{
		for (j = 0; j < num_of_columns; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
