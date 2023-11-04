#include "main.h"
/**
 * _strdup - Duplicates a string in a new memory location.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	if (str == NULL) {
		return (NULL);
	}

	int len = 0;

	while (str[len] != '\0') {
		len++;
	}

	char *duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL) {
		return (NULL);
	}
	int i;

	for ( i = 0; i <= len; i++) {
		duplicate[i] = str[i];
	}

	return (duplicate);
}
