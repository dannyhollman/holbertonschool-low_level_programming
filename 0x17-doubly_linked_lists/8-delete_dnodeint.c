#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to head of list
 * @index: index of node to delete
 * Return: 1 if success, 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp1, *temp2;

	temp1 = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		temp1 = temp1->next;

	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);

	return (1);
}
