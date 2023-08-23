#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main entry, generates pass, adds the value
 * of each character until it is equal to 2772 
 * (from 101-crackme object file)
 *
 * Return: 0 for success
 */
int main(void)
{
	const int checksum = 2772;
	int pass[100];
	int i;
	int sum = 0;
	int last_char = 0;

	/* seed the random number generated to current time */
	srand(time(NULL));

	/* generated 100 random numbers between 0 - 77 */
	for (i = 0; i < 100; i++)
	{
		pass[i]= (rand() % 78);

		sum += pass[i] + 33;

		/* print ASCII equivalent of each num */
		putchar(pass[i] + 33);
		
		if ((checksum - sum - 33) < 78)
		{
			last_char = checksum - sum - 33;
			sum += last_char;

			putchar(last_char + 33);
			break;
		}
	}

	return (0);
}
