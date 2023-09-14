#include "variadic_functions.h"
/**
 * sum_them_all - sums all the numbers passed
 * @n: argument count
 * Return: sum or 0 if no arguments passed
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list lst;

	if (n == 0)
		return (0);

	va_start(lst, n); /* initialize the argument list */

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int); /* get next argument */
	}
	va_end(lst); /* clear memory */
	return (sum);
}
