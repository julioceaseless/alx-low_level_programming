#include "main.h"
/**
 * set_bit - sets bit to 1 at a given index
 * @n: pointer to a the decimal number
 * @index: index to the bit of interest
 * Return: 1 if success and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_mask = 1 << index;
	/* set bit to 1 */
	*n |= bit_mask;

	return (1);
}
