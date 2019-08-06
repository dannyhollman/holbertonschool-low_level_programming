#include "lists.h"
/**
  * free_listint2 - free all elements of linked list
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *next;

	listint_t *current = *head;

	if (*head == NULL)
		return;

	while (current->next != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(current);
	*head = NULL;
}
