#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	concatenated = malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (i = 0; i < len2; i++)
		concatenated[len1 + i] = s2[i];

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
