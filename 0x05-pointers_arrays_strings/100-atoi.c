#include "main.h"
#include <stdlib.h>
/**
 * _atoi - pull int from string
 *
 * @s: string
 * Return: int or 0
 */
int _atoi(char *s)
{
	int sign;
	int result;
	char *temp;

	temp = s;
	result = 0;
	sign = 1;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
		{
			sign *= -1;
		}

		temp++;
	}

	if (*temp != '\0')
	{
		while (*temp >= '0' && *temp <= '9')
		{
			result = result * 10 + (*temp - '0');

			temp++;
		}
	}

	result *= sign;

	return (result);
}
