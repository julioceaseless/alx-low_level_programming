#include "variadic_functions.h"
/**
 * print_all - prints anything passed to the function
 * @format: list of types of arguments to a function
 * Return: nothing!
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0, i = 0;
	char c;
	float f = 0.0;
	char *s = NULL;

	va_start(args, format);
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
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
