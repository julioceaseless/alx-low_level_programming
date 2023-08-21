#include "main.h"
/**
 * puts2 - prints even
 * @str: string pointer
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
