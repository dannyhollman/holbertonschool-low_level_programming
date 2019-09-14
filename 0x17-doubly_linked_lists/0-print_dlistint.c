#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print doubly linked list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
