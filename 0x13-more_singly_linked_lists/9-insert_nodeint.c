listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	new_node->n = n;

	while (*temp)
	{
		if (i == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);

		}

		       	
	}
}
