#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse using putchar()
 * in a recursive function.
 * @s: pointer to string
 * Return: nothing!
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
