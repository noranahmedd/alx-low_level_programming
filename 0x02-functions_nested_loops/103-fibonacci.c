#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int sum = 0, prev = 1, curr = 2, next;

	while (curr <= 40000000)
	{
		if (curr % 2 == 0)
			sum += curr;
		next = curr + prev;
		prev = curr;
		curr = next;
	}
	printf("%ld\n", sum);
	return (0);
}
