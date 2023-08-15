#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

/**
 * main - Main entry
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char *str = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

	}
	return (0);
}
