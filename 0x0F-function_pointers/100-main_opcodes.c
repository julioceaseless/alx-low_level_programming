#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry. Prints the opcode of self
 * @argc: number of command line arguments
 * @argv: pointer to command line arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int bytes = 0;
	int i;
	int (*main_ptr)(int, char **) = NULL;

	/* check number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	/* handle negative bytes */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* pass address of main to function pointer */
	main_ptr = &main;
	printf("Address stored: %p\n", main_ptr);

	if (main_ptr != NULL)
	{
		for (i = 0; i < bytes; i++)
		{
			printf("%02x", *(main_ptr + i));
		}
		printf("\n");
	}

	return (0);

}
