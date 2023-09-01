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
	int sum = 0;
	int i, n, j;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				/*printf("index argv[%d][%d]: %c\n", i, j, argv[i][j]);*/
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
				/* takes care of positive numbers */
				n = atoi(argv[i]);
			}

			sum += n;
		}
		printf("%d\n", sum);
	}
		return (0);
}
