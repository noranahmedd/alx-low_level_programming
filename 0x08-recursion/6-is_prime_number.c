#include "main.h"
int is_prime_number(int n);

/**
 * is_prime_recursive - Helper function to check
 * if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Main function to check
 * if a number is prime using recursion.
 * @n: The number to check.
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
