#include "main.h"
/**
 * _isupper - checks if character is upper
 * @c: character
 * Return: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
