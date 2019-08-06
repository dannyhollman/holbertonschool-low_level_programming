#include "lists.h"
/**
  * pop_listint - deletes head node
  * @head: double pointer to head
  * Return: data from head node
  */
int pop_listint(listint_t **head)
{
	int value;

	listint_t *delete;

	if (*head != NULL)
	{
		delete = *head;
		value = delete->n;
		*head = (*head)->next;
		free(delete);
	}
	else
		return (0);

	return (value);
}
