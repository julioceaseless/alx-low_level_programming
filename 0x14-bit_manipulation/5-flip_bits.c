#include "main.h"
/**
 * flip_bits - find out the number of bits you need to flip to get
 * to the next number
 * @n: number
 * @m: number
 * Return: number of set bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = 0;
	unsigned int count = 0;

	/* perform bitwise XOR */
	result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result = result >> 1;
	}
	return (count);
}

