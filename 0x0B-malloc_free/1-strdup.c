#include "main.h"
/**
 * _strdup - Duplicates a string in a new memory location.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	int len = 0, i;
	char *duplicate;

	if (str == NULL) {
		return (NULL);
	}

	while (str[len] != '\0') {
		len++;
	}
	duplicate = malloc(len + 1);

	if (duplicate == NULL) {
		return (NULL);
	}

	for ( i = 0; i <= len; i++) {
		duplicate[i] = str[i];
	}

	return (duplicate);
}
