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
	}

	return (0);
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
	int separator = 1;

	while (*s)
	{
	if (isSeparator(*s))
	separator = 1;
	else if (*s >= 'a' && *s <= 'z' && separator)
	{
	*s -= 32;
	separator = 0;
	}
	else
	separator = 0;

	s++;
	}

	return (ptr);
}
