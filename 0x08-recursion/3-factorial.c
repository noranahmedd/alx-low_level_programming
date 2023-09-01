#include "main.h"
/**
 * factorial - Calculates the factorial of a non-negative integer.
 * @n: The integer for which factorial is to be calculated.
 *
 * Return: Factorial of 'n', or -1 if 'n' is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
