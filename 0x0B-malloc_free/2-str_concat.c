#include "holberton.h"
#include <stdlib.h>
/**
  * count - gets string length
  * @s: input string
  * Return: length
  */
int count(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
/**
  * str_concat - concatenates two strings
  * @s1: destination string
  * @s2: soruce string
  * Return: pointer to concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int count1, count2, total, loop = 0, loop2 = 0;

	char *final;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
	}
	count1 = count(s1);
	count2 = count(s2);
	total = count1 + count2 + 1;
	final = malloc(total * sizeof(char));
	if (final == NULL)
	{
		return (NULL);
	}
	while (loop < count1)
	{
		final[loop] = s1[loop];
		loop++;
	}
	while (loop2 <= count2)
	{
		final[loop] = s2[loop2];
		loop++;
		loop2++;
	}
	return (final);
}

