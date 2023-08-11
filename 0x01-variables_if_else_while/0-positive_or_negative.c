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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
	printf("%i is negative\n", n);
	}
	else
		if (n > 0)
		{
		printf("%i is positive\n", n);
		}
		else
		{
		printf("%i is zero\n", n);
		}
	return (0);
}
