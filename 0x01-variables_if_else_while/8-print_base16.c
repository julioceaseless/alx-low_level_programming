#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print base16
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char c;
	int i;

	/* prints 0 - 0 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	/* prints a to f */
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}

	putchar('\n');

	return (0);
}
