#include <stdio.h>

/**
 * main - prints multiples of 3, 5, 6, 9
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0 || i % 6 == 0 || i % 9 == 0)
		{
			sum = sum + i;
		}
	}

	printf("%d\n", sum);
	return (0);
}
