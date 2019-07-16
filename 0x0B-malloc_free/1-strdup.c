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

	char *array = NULL;

	if (*str == '\0')
	{
		return (array);
	}

	while (str[count])
	{
		count++;
	}

	array = malloc(count * sizeof(char));

	while (loop < count)
	{
		array[loop] = str[loop];
		loop++;
	}
	return (array);
}
