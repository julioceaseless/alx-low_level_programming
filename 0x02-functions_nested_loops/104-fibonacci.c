#include <stdio.h>
/**
  * main - Prints the first 98 fibonacci numbers
  * Return: Always 0!
  */
int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long num1_part1, num1_part2, num2_part1, num2_part2;
	unsigned long sum_part1, sum_part2;
	unsigned long div =  10000000000;
	int i;

	printf("%lu, %lu", num1, num2);
	for (i = 3; i < 93; i++)
	{
		printf(", %lu", num2);
		num2 = num1 + num2;
		num1 = num2 - num1;
	}
	/** num1 **/
	num1_part1 = num1 / div;
	num1_part2 = num1 % div;

	/**  num2 **/
	num2_part1 = num2 / div;
	num2_part2 = num2 % div;

	for (i = 93; i < 99; i++)
	{
		sum_part2 = (num1_part2 + num2_part2) % div;
		sum_part1 = num1_part1 + num2_part1;
		sum_part1 += ((num1_part2 + num2_part2) / div);

		printf(", %lu%lu", sum_part1, sum_part2);

		num2_part1 += num1_part1;
		num2_part2 += num1_part2;
		num1_part1 = num2_part1 - num1_part1;
		num1_part2 = num2_part2 - num1_part2;
	}
	printf("\n");
	return (0);
}

