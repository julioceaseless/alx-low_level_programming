#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0
 *
 */
int main(void)
{
	long num = 612852475143;
	long l_prime = 3;

	if (num % 3 == 0)
	{
		while (num % 3 == 0)
		{
			num /= 3;

		}

	}
	while (num % l_prime != 0)
	{
		l_prime += 2;

	}
	printf(" %lu\n", l_prime);

	return (0);
}
