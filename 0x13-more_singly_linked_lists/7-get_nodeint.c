#include "lists.h"
/**
  * get_nodeint_at_index - returns nth node of list
  * @head: pointer to head of list
  * @index: index to return
  * Return: pointer to nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
