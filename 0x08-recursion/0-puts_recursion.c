#include "main.h"
/**
 * _puts_recursion - prints a string using putchar() in a
 * recursive function
 * @s: pointer to string
 * Return: nothing!
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
