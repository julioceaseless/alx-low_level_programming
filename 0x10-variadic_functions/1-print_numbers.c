#include "variadic_functions.h"
/**
 * print_numbers - prints numbers passed as arguments
 * @separator: character that separates the numbers
 * @n: number of arguments
 * Return: Nothing!
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list lst;

	va_start(lst, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
