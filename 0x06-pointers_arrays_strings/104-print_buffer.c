#include "main.h"
/**
 * print_buffer - print the content of buffer
 * @b: pointer to the buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
			{
				printf("%02x", (unsigned char)b[j]);
			}
			else
			{
				printf("  ");
			}
			if (j + 1 < size)
			{
				printf("%02x ", (unsigned char)b[j + 1]);
			}
			else
				printf("   ");
		}
		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (isprint((unsigned char)b[j]))
			{
				printf("%c", b[j]);
			}
			else
				printf(".");
		}
		printf("\n");
	}
}
