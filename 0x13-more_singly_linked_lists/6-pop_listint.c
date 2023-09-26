#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to a pointer to the head node of the list
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!*head || !head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;

	return (n);
}
