#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 1, 2, 3, ... 9
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int i;

	/* prints 0 - 0 */
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar('\n');
		}
	}
	return (0);
}
