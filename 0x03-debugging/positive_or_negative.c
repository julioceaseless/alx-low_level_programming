#include "main.h"
/**
 *
 * positive_or_negative - checks if number is positive or negative
 *
 * @n: number to check
 *
 * Return: 0 or 1
 *
 */
	
void positive_or_negative(int n)
{	
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
}
