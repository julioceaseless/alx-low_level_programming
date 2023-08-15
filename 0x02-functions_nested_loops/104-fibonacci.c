#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: Always 0!
  */
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int  sum;
	int i;

	printf("%lu, %lu", num1, num2);

	for (i = 2; i < 96; i++)
	{
		sum = num1 + num2;
		printf(", %lu", sum);

		num1 = num2;
		num2 = sum;
	}
	printf("\n");

	return (0);
}

