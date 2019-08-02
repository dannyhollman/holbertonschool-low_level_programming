#include "lists.h"
/**
  * _strdup - duplicates string to malloced memory
  * @s: input string
  * Return: pointer to new string
  */
char *_strdup(const char *s)
{
	int count = 0, loop = 0;

	char *array;

	if (s == NULL)
		return(NULL);

	while (s[count])
		count++;

	count++;

	array = malloc(count * sizeof(char));
	if (array == NULL)
		return(NULL);

	while (loop <= count)
	{
		array[loop] = s[loop];
		loop++;
	}

	return (array);
}
/**
  * add_node_end - add node to end of linked list
  * @head: pointer to head node
  * @str: pointer to node data
  * Return: pointer to new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;

	list_t *last = *head;

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		exit(1);

	while (str[count])
		count++;

	new_node->str = _strdup(str);

	new_node->len = count;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return(new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return(new_node);
}
