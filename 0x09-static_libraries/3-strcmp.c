#include "holberton.h"
#include <stdio.h>
/**
  * _strcmp - compares two strings
  *
  * @s1: first string to compare
  *
  * @s2: second string to compare
  *
  * Return: 0 if strings match, positive if s1 bigger, negative if s1 smaller
  */
int _strcmp(char *s1, char *s2)
{
	int i, first = 0, second = 0, retrn = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			first = *(s1 + i);
			second = *(s2 + i);
			break;
		}
	}
	retrn = first - second;

	return (retrn);
}
