#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of acceptable characters.
 *
 * Return: Number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[i])
			{
				len++;
				break;
			}

		}
		if (accept[j] == '\0')
			return (len);
	}
	return (len);
}
