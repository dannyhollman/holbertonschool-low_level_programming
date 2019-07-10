#include "holberton.h"
#include <stdio.h>
/**
  * helper - recursive helper function
  * @s: input string
  * @start: starting index
  * @end: ending index
  * Return: recursively returns function
  */
int count(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + count(s + 1));
}
int helper(char *s, int start, int end)
{
	if (s[start] == s[end])
	{
		if (end == 1)
			return (1);
		else
			return (helper(s, ++start, --end));
	}
	return (0);
}
/**
  * is_palindrome - checks if string is palindrome
  * @s: input string
  * Return: 1 if palendrone, 0 otherwise
  */
int is_palindrome(char *s)
{
	int size = count(s) - 1;
	
	return (helper(s, 0, size));
}
