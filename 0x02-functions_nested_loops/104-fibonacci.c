#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: Always 0!
  */
int main(void)
{
	double num1 = 1;
	double num2 = 2;
	double sum;
	int i;

	printf("%0.lf, %0.lf", num1, num2);

	for (i = 2; i < 96; i++)
	{
		sum = num1 + num2;
		printf(", %0.lf", sum);

		num1 = num2;
		num2 = sum;
	}
	printf("\n");

	return (0);
}

