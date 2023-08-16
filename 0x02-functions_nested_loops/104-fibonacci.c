#include <stdio.h>
/**
  * main - Prints the first 50 fibonacci numbers
  * Return: Always 0!
  */
int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long sum, fibo1_cut1, fibo1_cut2, fibo2_cut1, fibo2_cut2;
	unsigned long cut1, cut2;
	int i;

	printf("%lu, %lu", num1, num2);
	for (i = 3; i < 93; i++)
	{
		sum = num1 + num2;
		printf(", %lu", sum);

		num1 = num2;
		num2 = sum;
	}
	fibo1_cut1 = num1 / 10000000000;
	fibo2_cut1 = num2 / 10000000000;
	fibo1_cut2 = num1 % 10000000000;
	fibo2_cut2 = num2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		cut1 = fibo1_cut1 + fibo2_cut1;
		cut2 = fibo1_cut2 + fibo2_cut2;
		if ((fibo1_cut1 + fibo2_cut2) >= 10000000000)
		{
			cut1 += 1;
			cut2 = cut2 % 10000000000;
		}
		printf(", %lu%lu", cut1, cut2);

		fibo1_cut1 = fibo2_cut1;
		fibo1_cut2 = fibo2_cut2;
		fibo2_cut1 = cut1;
		fibo2_cut2 = cut2;
	}
	printf("\n");
	return (0);
}

