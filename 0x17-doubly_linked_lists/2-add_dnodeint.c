#include "lists.h"
/**
 * add_dnodeint - add node to doubly linked list
 * @head: pointer to head of list
 * @n: value of new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (new);
	}
}
