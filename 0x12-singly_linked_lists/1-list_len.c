#include "lists.h"
/**
  * list_len - returns the number of elements in a linked list
  * @h: input list
  * Return: number of elements in list
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		exit(1);

	while (h != NULL)
	{
		if (h->str != NULL && h->len != 0)
			count++;
		h = h->next;
	}
	return (count);
}
