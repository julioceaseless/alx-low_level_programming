#include "variadic_functions.h"
/**
 * print_strings - prints strings passed as arguments
 * @separator: separates the strings
 * @n: number of arguments
 * Return: nothing!
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;
	const char *str = NULL;

	/* initialize the list */
	va_start(lst, n);

	/* print each element and format */
	for (i = 0; i < n; i++)
	{

		str = va_arg(lst, const char *); /* get each string */

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);

		if ((i < (n - 1)) && separator != NULL) /* add separator */
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
