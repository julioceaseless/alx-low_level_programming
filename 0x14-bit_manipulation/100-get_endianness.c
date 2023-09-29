#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *pointer_to_byte = (char *)&i;

	if (*pointer_to_byte == 1)
		return (1);
	else
		return (0);
}
