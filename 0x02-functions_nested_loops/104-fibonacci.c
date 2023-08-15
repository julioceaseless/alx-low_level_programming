#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: Always 0!
  */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sum;
	int i;

	printf("%d, %d", num1, num2);

	for (i = 2; i < 96; i++)
	{
		sum = num1 + num2;
		printf(", %d", sum);

		num1 = num2;
		num2 = sum;
	}
	printf("\n");

	return (0);
}

