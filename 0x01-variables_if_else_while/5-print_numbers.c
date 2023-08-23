#include <stdio.h>
/**
 * main - entry point
 * description: a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
