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
	if (separator != NULL)
	{
		for (; i < n; i++)
		{
			if (i < (n - 1))
			{
				printf("%d%s", va_arg(lst, int), separator);
			}
			else
				printf("%d\n", va_arg(lst, int));
		}

	}
	va_end(lst);
}
