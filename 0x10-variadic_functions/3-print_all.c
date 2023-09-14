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
	char *s = NULL;

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				break; /* ignore other characters */
		}
		/* add separator until the second last variable */
		if (format[j + 1] != '\0' && (format[j] == 'c' || format[j] == 'i' ||
			format[j] == 'f' || format[j] == 's'))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
