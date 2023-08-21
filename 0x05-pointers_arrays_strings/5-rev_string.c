#include "main.h"
/**
*rev_string -  reverses a string
*@s: string that will get reversed
*return: void
*/
void rev_string(char *s)
{
	int len = 0;
	char c;

	while (*s != '\0')
		s[len++];

	for (int i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
}
