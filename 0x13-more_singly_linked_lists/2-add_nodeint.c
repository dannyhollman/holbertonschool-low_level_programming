#include "lists.h"
/**
  * add_nodeint - add node to start of a linked list
  * @head: pointer to head node
  * @n: pointer to data for new node
  * Return: pointer to new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		exit(1);

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
