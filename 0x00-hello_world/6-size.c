#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %u bytes(s)\n", sizeof(char));
	printf("Size of an int: %u bytes(s)\n", sizeof(int));
	printf("Size of long int: %u bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u bytes(s)\n", sizeof(float));
	return (0);
}
