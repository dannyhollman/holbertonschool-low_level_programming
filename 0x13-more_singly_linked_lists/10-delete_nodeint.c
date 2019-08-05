#include "lists.h"
#include <stdio.h>
/**
  *
  *
  *
  *
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int loop = 0;

	listint_t *temp1, *temp2;

	temp1 = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	for (loop = 0; loop < index - 1; loop++)
		temp1 = temp1->next;

	temp2 = temp1->next;

	temp1->next = temp2->next;

	free(temp2);

	return (1);
}
