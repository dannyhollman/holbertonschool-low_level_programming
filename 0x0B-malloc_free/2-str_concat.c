#include "holberton.h"
#include <stdlib.h>
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
  * _concat - concatenates two strings
  * @s1: destination string
  * @s2: soruce string
  * Return: pointer to concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int count1, count2, total, loop = 0, loop2 = 0;

	char *final = NULL;

	if (*s1 == '\0' || *s2 == '\0')
		return (final);

	count1 = count(s1);

	count2 = count(s2);

	total = count1 + count2;

	final = malloc(total * sizeof(char));

	while (loop < count1)
	{
		final[loop] = s1[loop];
		loop++;
	}

	while (loop2 < count2)
	{
		final[loop] = s2[loop2];
		loop++;
		loop2++;
	}
	return (final);
}

