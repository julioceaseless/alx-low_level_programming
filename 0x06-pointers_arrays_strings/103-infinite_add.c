#include "main.h"
/**
 * infinite_add - add large numbers in string
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: buffer to store result
 * @size_r: size of buffer
 * Return: returns pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_size = strlen(n1);
	int n2_size = strlen(n2);
	int index1 = n1_size - 1;
	int index2 = n2_size - 1;
	int j = size_r - 1;
	int  sum, carry = 0;

	while (index1 >= 0 || index2 >= 0 || carry > 0)
	{
		int d1 = index1 >= 0 ? n1[index1] - '0' : 0;
		int d2 = index2 >= 0 ? n2[index2] - '0' : 0;

		sum = d1 + d2 + carry;

		carry = sum / 10;

		r[j] = (sum % 10) + '0';

		j--;
		index1--;
		index2--;
	}
	r[j] = '\0';

	if (j < 0)
		return (0);
	if (j != 0)
	{
		while (j >= 0)
		{
			r[j] = 0 + '0';
			j--;
		}
	}
	return (r);
}
