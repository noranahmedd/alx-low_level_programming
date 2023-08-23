#include <stdio.h>

/**
 * main - entry point
 * Description: A program that prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return 0;
}
