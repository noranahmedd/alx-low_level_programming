#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to be encoded.
 * Return: Encoded string.
 */
char *rot13(char *s)
{
	char rot13[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char Rot13[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int i;
	char *p = s;

	while (*s)
	{
		for (i = 0; rot13[i] != '\0'; i++)
		{
			if (*s == rot13[i])
			{
				*s = Rot13[i];
				break;
			}
		}
		s++;
	}
		return (p);
}
