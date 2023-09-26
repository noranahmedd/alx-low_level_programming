#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data (n) in a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of all the data in the linked list. If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;
	
	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);

}
