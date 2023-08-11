#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print combination of 2 digits
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int i;
	int j;

	/* prints 0 - 0 */
	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		putchar (i + '0');
		putchar (j + '0');
		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
		putchar('\n');

		return (0);
}
