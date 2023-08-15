#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: Always 0!
  */
int main(void)
{
	long num1 = 0;
	long num2 = 1;
	long sum;

	while (num2 < 4000000)
	{
		num2 += num1;
		num1 = num2 - num1;
		if (num2 % 2 == 0)
		{
			sum += num2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}

