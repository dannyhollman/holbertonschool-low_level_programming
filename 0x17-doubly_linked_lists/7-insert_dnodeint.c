#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at nth position of list
 * @h: pointer to head of list
 * @idx: index of new node
 * @n: value of new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (temp)
	{
		if (i == (idx - 1))
		{
			new->n = n;
			new->prev = temp;
			new->next = temp->next;
			temp->next = new;
			temp->next->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
