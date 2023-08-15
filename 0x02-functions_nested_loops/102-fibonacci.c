#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers
  *
  * Return: Always 0!
  */
int main(void)
{
	long num1 = 1;
	long num2 = 2;
	int i = 0;

	printf("%ld, ", num1);
	printf("%ld", num2);

	while (i < 48)
	{
		num2 += num1;
		num1 = num2 - num1;

		printf(", %ld", num2);
		i++;
	}
	printf("\n");
	return (0);
}

