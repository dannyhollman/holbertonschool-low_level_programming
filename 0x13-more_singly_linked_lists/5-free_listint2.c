#include "lists.h"
/**
  * free_listint2 - free all elements of linked list
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
