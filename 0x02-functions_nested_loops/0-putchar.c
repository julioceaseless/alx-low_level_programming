#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

/**
 * main - Main entry
 *
 * Description - Prints something on stdout
 *
 * Return - Always returns 0 (success)
 *
 */

int main(void)
{
	char *str = "_putchar\n";
	int i;
	for(i = 0; str[i] != '\0'; i++)

	{
		_putchar(str[i]);
	
	}
	return (0);
}
