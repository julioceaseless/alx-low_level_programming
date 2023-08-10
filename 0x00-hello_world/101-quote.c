#include <stdio.h>
#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
/*
 * main - Entry point
 *
 * This function is the entry point of the program.
 * It prints a specific message to the standard error
 * and returns an exit status of 1.
 *
 * Return: Always 1 (Exit status)
*/
int main(void)
{
	char msg[] = MESSAGE;

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
