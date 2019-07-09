#include "holberton.h"
/**
  * _strchr - locates character in string
  * @s: string to search
  * @c: character to search for
  * Return: pointer to first ocurance
  */
char *_strchr(char *s, char c)
{
	char *loop = s;

	char *nope = "NULL";

	while (*loop)
	{
		if (*loop == c)
			return (loop);
		loop++;
	}
	return (nope);
}
