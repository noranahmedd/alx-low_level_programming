#include "main.h"
/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
