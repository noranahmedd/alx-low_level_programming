#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int prev = 1, curr = 2, next;

	printf("%d, %d, ", prev, curr);

	for (int i = 3; i < 98; i++)
	{
		next = prev + curr;
		printf("%d", next);

		if (i != 97)
			printf(", ");

		prev = curr;
		curr = next;
	}
	printf("\n");

	return (0);
}
