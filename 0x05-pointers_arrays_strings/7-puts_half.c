#include "main.h"
/**
*puts_half- prints half of a string, followed by a new line.
*@str:the string that will get printed
*return:void
*/
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;

	if (len % 2 == 0)
		i = len / 2;

	else
		i = (len + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
