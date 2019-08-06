#include "lists.h"
/**
  * reverse_listint - reverses a linked list
  * @head: pointer to head of list
  * Return: pointer to first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = 0;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (prev);
}
