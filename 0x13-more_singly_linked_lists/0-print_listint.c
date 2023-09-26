#include "lists.h"
/**
 *size_t print_listint-  prints all the elements of a listint_t list
 *
 *@h: Pointer to the head of the list;
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
