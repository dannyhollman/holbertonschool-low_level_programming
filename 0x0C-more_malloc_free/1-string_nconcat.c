#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
  * string_nconcat - concatenates n bytes from source to dest
  * @s1: destination string
  * @s2: source string
  * @n: number of bytes to concatenate
  * Return: pointer to concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1, count2, total, loop = 0, loop2 = 0;

	char *final;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	count1 = count(s1);
	count2 = count(s2);
	if (n >= count2)
	{
		total = count1 + count2 + 1;
		n = count2;
	}
	else
	{
		total = count1 + n + 1;
	}
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
	while (loop2 < n)
	{
		final[loop] = s2[loop2];
		loop++;
		loop2++;
	}
	return (final);
}
