#include "holberton.h"
#include <stdlib.h>
/**
  * _strdup - copies string to newly allocated space
  * @str: input string
  * Return: pointer to new string
  */
char *_strdup(char *str)
{
	int count = 0, loop = 0;

	char *array = malloc(count * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count])
	{
		count++;
	}

	while (loop < count)
	{
		array[loop] = str[loop];
		loop++;
	}
	return (array);
}
