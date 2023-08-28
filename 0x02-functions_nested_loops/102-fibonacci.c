#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long long int prev = 1, curr = 2, next;

	printf("%lld, %lld, ", prev, curr);

	for (int i = 3; i < 98; i++)
	{
		next = prev + curr;
		printf("%lld", next);

		if (i != 97)
			printf(", ");

		prev = curr;
		curr = next;
	}
	printf("\n");

	return (0);
}
