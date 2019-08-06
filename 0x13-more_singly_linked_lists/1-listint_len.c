#include "lists.h"
/**
  * listint_len - returns number of elemnts in ist
  * @h: pointer to list
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
