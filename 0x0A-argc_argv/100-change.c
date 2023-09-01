#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry. counts the number of coins needed
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 success and 1 for error
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins [] = {25, 10, 5, 2, 1};
	int num_of_coins = 0;
	int coin_count = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= coins[i])
		{
			num_of_coins = cents / coins[i];
			coin_count += num_of_coins;
			cents -= num_of_coins * coins[i];
		}
		i++;
	}
	printf("%d\n", coin_count);
	return (0);
}

