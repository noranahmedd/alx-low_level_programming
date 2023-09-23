#include "lists.h"
/*
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		size_t num = 0;
		
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;

	}
	return (num);
}
