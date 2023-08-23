#include <stdio.h>

/**
 * main - entry point
 * Description: A program that prints all single digit numbers of base 10
 *              starting from 0, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
