#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 * @n:number of bytes concatenated from src.
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destlen = 0;

	while (dest[destlen] != '\0')
		destlen++;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[destlen++] = src[i];
	}
	dest[destlen] = '\0';

	return (dest);
}
