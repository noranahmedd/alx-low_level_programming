#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to a pointer to the head node of the list
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(head);
	*head = temp;

	return (n);
}
