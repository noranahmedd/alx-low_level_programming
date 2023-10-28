#include "main.h"
int sqr(int n, int x);
/**
 * _sqrt_recursion - Calculates the integer square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: Integer square root of 'n', or -1 if no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr(n, 1));
}

/**
 * sqr - Recursive function to find the square root.
 * @n: The number for which to find the square root.
 * @x: Current guess for the square root.
 *
 * Return: Integer square root of 'n', or -1 if no natural square root.
 */
int sqr(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);

	return (sqr(n, x + 1));
}
