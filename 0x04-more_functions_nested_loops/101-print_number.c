#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int numDigits, temp, digit;

	numDigits = 1;
	temp = n;

	while (temp >= 10)
	{
		numDigits *= 10;
		temp /= 10;
	}

	while (numDigits > 0)
	{
		digit = n / numDigits;
		_putchar(digit + '0');
		n %= numDigits;
		numDigits /= 10;
	}
}
