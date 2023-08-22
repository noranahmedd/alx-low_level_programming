#include "main.h"
/**
*puts2-prints every other character of a string,starting
*with the first character, followed by a new line.
*@str: the string that will get printed.
*return void
*/
void puts2(char *str)
{
	int l = 0, i;

	while (str[l])
		l++;
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
