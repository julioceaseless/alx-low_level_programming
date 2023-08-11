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
	int lnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* code goes here */
	lnum = n % 10;

	if (lnum == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, lnum);
	}
	else
		if (lnum < 6 && lnum != 0)
		{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lnum);
		}
		else
		{
		printf("Last digit of %i is %i and is greater than 5\n", n, lnum);
		}
	return (0);
}
