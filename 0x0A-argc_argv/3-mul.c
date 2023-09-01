#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies command line arguments
 * @argc: counts number of command line arguments
 * @argv: pointer to command line line arguments
 * Return: 0 for success!
 */

int main(int argc, char *argv[])
{
	long int product = 1;
	int i, n;

	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			n = strtol(argv[i], NULL, 10);
			product *= n;
		}
		printf("%ld\n", product);
	}
	return (0);
}
