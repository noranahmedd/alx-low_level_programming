#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len++] = src[i];
	}
	dest[dest_len] = '\0';

	return (dest);
}
