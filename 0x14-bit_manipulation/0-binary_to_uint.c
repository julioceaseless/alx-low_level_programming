#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number
 * Return: unsigned decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (*b == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		/* check for invalid characters */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* convert bin to dec */
		dec = (dec << 1) | (b[i] - '0');
	}
	return (dec);
}
