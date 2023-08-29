#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor.
 */
long largest_prime_factor(long num)
{
	if (num <= 1)
		return -1;

	long largestFactor = -1;

	while (num % 2 == 0)
	{
		largestFactor = 2;
		num /= 2;
	}

	for (long i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largestFactor = i;
			num /= i;
		}
	}
	if (num > 2)
		largestFactor = num;

	return largestFactor;
}
