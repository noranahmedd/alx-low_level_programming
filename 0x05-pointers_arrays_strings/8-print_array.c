#include "main.h"
/**
 *print_array - Prints n elements of an array of integers,
 *followed by a new line.
 *@a: The array of integers to be printed.
 *@n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", n[i]);
		else
			printf("%d", n[i]);
	}
	_putchar('\n');
}
