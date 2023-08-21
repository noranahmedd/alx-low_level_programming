#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}

