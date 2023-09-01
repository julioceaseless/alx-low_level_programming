#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies command line arguments
 * @argc: counts number of command line arguments
 * @argv: pointer to command line line arguments
 * Return: 0 for success!
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, n;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			n = atoi(argv[i]);
			sum += n;
		}
		printf("%d\n", sum);
	}
	return (0);
}
