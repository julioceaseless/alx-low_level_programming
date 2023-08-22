#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main entry
 *
 * Return: 0 for success
 */
int main(void)
{
	const int checksum = 2772;
	int pass[100];
	int i;
	int sum = 0;
	int n = 0;

	/* seed the random number generated to current time */
	srand(time(NULL));

	/* generated 100 random numbers between 0 - 77 */
	for (i = 0; i < 100; i++)
	{
		pass[i] = (rand() % 78);

		sum += pass[i];

		/* print ASCII equivalent of each num */
		putchar(pass[i] + '0');

	}

	if ((checksum - sum) < 78)
	{
		n = checksum - sum;
		sum += n;
		putchar(n + '0');
	}

	return (0);
}
