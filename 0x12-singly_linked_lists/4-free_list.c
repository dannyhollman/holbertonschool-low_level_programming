#include "lists.h"
/**
  * free_list - free all elements of linked list
  * @head: pointer to head of list
  */
void free_list(list_t *head)
{
	list_t *next;

	list_t *current = head;

	while (current->next != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	free(current->str);
	free(current);
}
