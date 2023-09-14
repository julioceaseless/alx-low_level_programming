#include "variadic_functions.h"
/**
 * print_all - prints anything passed to the function
 * @format: list of types of arguments to a function
 * Return: nothing!
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;

	vars my_vars = {0, '\0', 0.0, NULL};
	va_start(args, format);

	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				my_vars.c = va_arg(args, int);
				printf("%c", my_vars.c);
				break;
			case 'i':
				my_vars.i = va_arg(args, int);
				printf("%d", my_vars.i);
				break;
			case 'f':
				my_vars.f = va_arg(args, double);
				printf("%f", my_vars.f);
				break;
			case 's':
				my_vars.s = va_arg(args, char *);
				if (my_vars.s == NULL)
					printf("(nil)");
				else
					printf("%s", my_vars.s);
				break;
			default:
				break; /* ignore other characters */
		}
		j++;
		if (format[j] != '\0' && (format[j] == 'c' || format[j] == 'i' ||
			format[j] == 'f' || format[j] == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
