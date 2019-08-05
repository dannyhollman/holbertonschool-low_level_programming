#include "lists.h"
#include <stdio.h>
/**
  * sum_listint - returns the sum of all data in list
  * @head: pointer to head of list
  * Return: sum of all data
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	listint_t *temp = head;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}


	return (total);
}
