#include "holberton.h"
#include <stdio.h>
/**
  * _strchr - locates character in string
  * @s: string to search
  * @c: character to search for
  * Return: pointer to first ocurance
  */
char *_strchr(char *s, char c)
{
	char *loop = s;

	while (*loop)
	{
		if (*loop == c)
			return (loop);
		loop++;
	}

	if (*loop == '\0')
		return (loop);
	else
		return (0);
}
