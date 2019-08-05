#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * words - counts number of words in string
  * @s: input string
  * Return: number of words
  */
int words(char *s)
{
	int count = 0, state = 1;

	char *copy;

	copy = s;

	while (*copy)
	{
		if (*copy == ' ')
			state = 1;
		else if (state == 1)
		{
			state = 0;
			count++;
		}
		copy++;
	}
	return (count);
}
/**
  * count - counts the number of characters in a word
  * @s: input string
  * Return: number of characters in word
  */
int count(char *s)
{
	int count = 0;

	while (*s != ' ')
	{
		count++;
		s++;
	}
	return (count - 1);
}
/**
  * alloc_rows - allocates each row of the array
  * @copy: input string
  * @array: input array
  * Return: 0 if successful, 1 otherwise
  */
int alloc_rows(char *copy, char **array)
{
	int count = 0, index1 = 0, onoff;

	while (*copy)
	{
		if (*copy != ' ')
			onoff = 1;
		else
			onoff = 0;

		if (onoff == 1)
			count++;
		else if (onoff == 0 && count != 0)
		{
			array[index1] = malloc(sizeof(char) * (count + 1));
			if (array[index1] == NULL)
				return (1);
			index1++;
			count = 0;
		}
		copy++;
	}
	return (0);
}
/**
  * strtow - splits a string into words
  * @str: input string
  * Return: 2d array with words
  */
char **strtow(char *str)
{
	int index1 = 0, index2 = 0, wcount;

	char **array, *copy;

	copy = str;

	wcount = words(copy) + 1;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	array = malloc(sizeof(char *) * wcount);

	if (array == NULL)
		return (NULL);

	alloc_rows(str, array);

	index1 = 0;

	while (*copy)
	{
		if (*copy != ' ')
		{
			while (*copy != ' ' && *copy != '\0')
			{
				array[index1][index2] = *copy;
				index2++;
				copy++;
			}
			array[index1][index2] = '\0';
			index1++;
			index2 = 0;
		}
		copy++;
	}
	return (array);
}
