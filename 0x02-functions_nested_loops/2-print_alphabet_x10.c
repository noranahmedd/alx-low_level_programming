#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i--)
	{
		for (c = 'a'; c < 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}