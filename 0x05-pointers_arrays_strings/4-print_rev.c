#include "main.h"
/**
* print_rev - Prints a string, in reverse, followed by a new line
* @s: The string that will be reverse
* Return: void
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		++len;

	while (len--)
		_putchar(s[len]);

	_putchar('\n');
}
