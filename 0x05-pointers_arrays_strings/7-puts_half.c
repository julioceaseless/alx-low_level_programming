#include "main.h"
/**
 * puts_half - prints second half of a string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half;
	int i;

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}
	else
	{
		half = len / 2;
	}

	for (i = (len - half); i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

}
