#include "main.h"

/* function prototypes */
int str_len(char *s);
char *result_to_str(int *int_arr, int size);
char *mul(char *num1, char *num2);
void _print(char *s);

/**
 * main -main entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i, j;
	char *num1 = NULL, *num2 = NULL;
	char *result = NULL;

	if (argc != 3)
	{
		_print("Error");
		_putchar('\n');
		exit(98);
	}
	/* check if digits */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/*printf("index argv[%d][%d]: %c\n", i, j, argv[i][j]);*/
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				_print("Error");
				_putchar('\n');
				exit(98);
			}
		}
	}

	num1 = argv[1];
	num2 = argv[2];

	result = mul(num1, num2);

	if (result == NULL)
		exit(98);

	_print(result);
	_putchar('\n');

	free(result);
	return (0);
}

/**
 * str_len - string length
 * @s: string
 * Return:length
 */
int str_len(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
 * result_to_str - converts to string
 * @int_arr: int array
 * @size: array size
 * Return: string
 */
char *result_to_str(int *int_arr, int size)
{
	int i, pos = 0;
	char *char_arr = NULL;

	char_arr = malloc((size + 1) * sizeof(char));

	if (char_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i == 0 && int_arr[i] == 0)
		{
			continue;
		}
		char_arr[pos++] = int_arr[i] + '0';
	}
	char_arr[pos] = '\0';
	return (char_arr);
}

/**
 * mul - multiplies large numbers
 * @num1: first number
 * @num2: second number
 * Return: string of result
 */
char *mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, mul = 0, sum = 0;
	int *result = NULL;
	char *result_str = NULL;
	int i, j;

	len1 = str_len(num1);
	len2 = str_len(num2);

	result = malloc(sizeof(int) * (len1 + len2));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < (len1 + len2); i++)
	{
		result[i] = 0;
	}

	/* Perform multiplication */
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	/* convert result to string */
	result_str = result_to_str(result, (len1 + len2));

	free(result);

	return (result_str);
}

/**
 * _print - prints string
 * @s: string
 */
void _print(char *s)
{
	int i;

	for (i = 0; i < str_len(s); i++)
	{
		_putchar(s[i]);
	}
}
