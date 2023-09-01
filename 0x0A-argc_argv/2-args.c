#include <stdio.h>
/**
 * main - main program entry. prints all arguments
 * @argc: keeps the count of the number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int n = 0;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
