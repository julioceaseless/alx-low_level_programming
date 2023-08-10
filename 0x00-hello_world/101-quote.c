#include <stdio.h>
#include <unistd.h>
/*
 * main - Entry point
 *
 * Return: Always returns 1 (Success)
 *
 */
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
int main(void)
{
	char msg[] = MESSAGE;

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
