#include "main.h"
/**
 * divide - divides n with numbers from 0 - n-1 to check for divisors
 * @n: number to check
 * @divisor: divisor
 * Return: returns 1 if number is prime and 0 otherwise
 */
int divide(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}
	return (divide(n, divisor - 1));

}

/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 * Return: 1 is prime and 0 is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (divide(n, n - 1));
}

