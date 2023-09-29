#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number in decimal
 * @index: index of bit
 * Return: value of bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask_bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask_bit = 1 << index;
	if (n & mask_bit)
		return (1);
	else
		return (0);

}
