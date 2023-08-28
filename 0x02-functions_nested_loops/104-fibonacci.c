#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, prev = 1, curr = 2, next;

	printf("%d, %d", prev, curr);

	for (i = 3; i < 98; i++)
	{
	next = prev + curr;
	printf(", %d", next);
	prev = curr;
	curr = next;
	}
	printf("%d\n", next);

	return (0);
}
