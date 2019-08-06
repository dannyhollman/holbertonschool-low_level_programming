#include "lists.h"
/**
  * insert_nodeint_at_index - insert new node nth position
  * @head: double pointer to head
  * @idx: index to insert at
  * @n: data for new node
  * Return: pointer to new node
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

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (loop < idx - 1 && current->next != NULL)
	{
		current = current->next;
		loop++;
	}

	if (loop != idx - 1)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
