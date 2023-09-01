#include "main.h"

/**
 * _isalpha  - checks if ascii character is alphabet
 *
 * @c: - character to check
 *
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
