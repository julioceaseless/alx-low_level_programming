#include "3-calc.h"
/**
 * main - program entry
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: returns result
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*operation)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* initiate function pointer to the correct operation func*/
	operation = get_op_func(argv[2]);

	/* perform the correct operation */
	if (operation != NULL)
	{
		result = operation(num1, num2);
		printf("%d\n", result);
	}
	return (0);
}
