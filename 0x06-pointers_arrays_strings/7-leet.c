#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @c: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *c)
{
	char *cc =c;
	char key [] = {'a', 'e', 'o', 't', 'l'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c) 
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key [i] - 32)
				*c = 48 + value[i];
		}
		c++;
	}
	
	return (cc);
}
