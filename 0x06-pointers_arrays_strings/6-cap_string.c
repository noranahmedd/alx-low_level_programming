#include "main.h"
/**
 * isSeparator - Checks if a character is a separator.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a separator, 0 otherwise.
 */
int isSeparator(char c)
{
	int i;
	char sep[] = {"\t\n,/?\"(){}"};

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (c == sep[i])
			return (1);
		else
			return (0);
	}
}
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int seperator = 1;

	while (*s)
	{
		if (isSeperator(*s))
			seperator = 1;
		else if (*s >= 'a' && *s <= 'z' && seperator)
		{
			*s -= 32;
			seperator = 0;
		}
		else
			seperator = 0;

	s++;
	}

	return (ptr);
}
