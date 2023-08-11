#include <stdlib.h>
#include <time.h>
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
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	lastDigit = n % 10;

	if (lastDigit == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	}
	else
		if (lastDigit < 6 && lastDigit != 0)
		{
		printf("Last digit of %i is %i and is less than 6 "
			"and not 0\n", n, lastDigit);
		}
		else
		{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
		}
	return (0);
}
