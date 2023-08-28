#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 *
 * Return: None.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size ; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			if ((i + j) == (size - 1))
				sum2 += a[i][j];
		}
	}
	printf("%d, %d", sum1, sum2);
}
