#include "lists.h"
#include <string.h>
/**
  * add_nodeint_end - add node to end of linked list
  * @head: pointer to head node
  * @n: pointer to node data
  * Return: pointer to new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		exit(1);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
