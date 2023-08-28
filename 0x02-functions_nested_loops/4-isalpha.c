#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabetic character
 * @ch: The character to be checked
 *
 * Return: 1 if the character is an alphabetic character, 0 otherwise
 */
int _isalpha(int ch)
{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}