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

	printf("%ld", num2);

	while (num2 < 4000000)
	{
		num2 += num1;
		num1 = num2 - num1;
		if (num2 % 2 == 0)
		{
			printf(", %ld", num2);
		}
	}
	printf("\n");
	return (0);
}

