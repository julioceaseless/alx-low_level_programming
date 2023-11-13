#include "main.h"

/**
 * _islower  - checks if ascii character is lowercase alpha
 * @c: - ascii to check
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
