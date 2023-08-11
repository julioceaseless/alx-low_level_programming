#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: check if random number is positive, negative, or zero
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
