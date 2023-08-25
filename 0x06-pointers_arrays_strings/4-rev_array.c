#include "main.h"
/**
 * reverse_array - Reverses an array of integers.
 * @a: An array of integers.
 * @n: The number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, z;

	for (i = 0; i < n / 2; i++)
	{
		z = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = z;
	}
}
