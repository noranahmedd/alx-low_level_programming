#include "main.h"
/**
*rev_string -  reverses a string
*@s: string that will get reversed
*return: void
*/
void rev_string(char *s)
{
	int len = 0, i;
	char c;

	while (s[len] != '\0')
	len++;

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}
