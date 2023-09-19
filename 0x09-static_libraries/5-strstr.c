#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *ned;

	while (*haystack)
	{
		hay = haystack;
		ned = needle;

		while (*hay && *ned && *hay == *ned)
		{
			hay++;
			ned++;
		}

		if (!*ned)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
