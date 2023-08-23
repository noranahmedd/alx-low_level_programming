#include <stdio.h>
/**
 * main - entry point
 *description:Write a program that prints the alphabet in
 *lowercase, and then in uppercase, followed by a new line.
 *Return: always 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}

	putchar('\n');
	return (0);
}
