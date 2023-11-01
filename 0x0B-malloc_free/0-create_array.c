#include "main.h"
/**
 * create_array - Creates and initializes a character array
 * @size: The size of the array to create
 * @c: The character used for initialization
 *
 * Return: Pointer to the created array,
 * or NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);
	while (size--)
	{
		a[size] = c;
	}
	return (a);
}
