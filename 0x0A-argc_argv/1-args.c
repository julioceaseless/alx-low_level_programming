#include <stdio.h>
/**
 * main - main program entry
 * @argc: keeps the count of the number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int n = 0;

	while (argv[argc - 1] != argv[0])
	{
		argc--;
		n++;
	}
	printf("%d\n", n);
	return (0);
}
