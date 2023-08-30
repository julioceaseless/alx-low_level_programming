#include "main.h"
/**
 * _find_root - finds the square root of number n
 * @n: number to find its squareroot
 * @test_root: root
 * Return: returns square root
 */

int _find_root(int n, int test_root)
{
	/* checks if seed value is squareroot */
	if (n == (test_root * test_root))
	{
		return (test_root);
	}
	else if (test_root > n / 2)
	{
		return (-1);
	}
	else
	{
	return (_find_root(n, test_root + 1));
	}
}

/**
 * _sqrt_recursion - returns square root
 * @n: square
 * Return: returns output of _find_root(int int)
 */
int _sqrt_recursion(int n)
{
	/* negative numbers do not have a natural square root */
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	/* find square root for n starting from 1 */
	return (_find_root(n, 1));
}
