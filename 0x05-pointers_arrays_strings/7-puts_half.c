#include "main.h"
/**
 *puts_half- prints half of a string, followed by a new line.
 *@str:the string that will get printed
 *return: void
 */
void puts_half(char *str)
{
	int l = 0;

	while (str[l])
		l++;
	if (l % 2 == 0)
		l = l / 2;
	else
		l = (l - 1) / 2;
	for (int i = l ; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
