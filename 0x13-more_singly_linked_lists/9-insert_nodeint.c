#include "lists.h"
/**
  *
  *
  *
  *
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int loop = 0;

	listint_t *new_node, *current;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	current = *head;

	while (loop < idx - 1)
	{
		current = current->next;
		loop++;
	}

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
