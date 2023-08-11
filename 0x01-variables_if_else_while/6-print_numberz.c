#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 10 digits from 0 using putchar
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
