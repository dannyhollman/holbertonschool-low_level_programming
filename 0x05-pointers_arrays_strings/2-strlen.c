#include "holberton.h"
/**
  * _strlen - returns length of string
  *
  * @s: string input
  *
  * Return: length of string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
