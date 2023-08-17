#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0
 *
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long l_prime = 2;

	/* divide by 2 until it is odd */
	while (num % l_prime == 0)
	{
		num /= l_prime;
	}

	/* divide by 3 */
	if (num % (++l_prime) == 0)
	{
		while (num % l_prime == 0)
		{
			num /= l_prime;
		}
	}

	l_prime += 2;

	/* find the next divider */
	while (num % l_prime != 0)
	{
		l_prime += 2;
	}
	num /= l_prime;

	if (l_prime > num)
	{
		printf("%lu\n", l_prime);
	}
	else
	{
		printf("%lu\n", num);
	}
	return (0);
}
