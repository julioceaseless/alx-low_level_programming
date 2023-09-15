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
	int (*ptr_to_main)(int, char **) = NULL;
	unsigned char op_code;

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
	ptr_to_main = main;

	if (ptr_to_main != NULL)
	{
		for (i = 0; i < bytes; i++)
		{
			op_code = *(unsigned char *)ptr_to_main;
			printf("%.2x", op_code);

			/* add space between opcodes */
			if (i < (bytes - 1))
				printf(" ");

			ptr_to_main++;
		}
		printf("\n");
	}
	return (0);
}
