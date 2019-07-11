#include "holberton.h"
/**
  * wildcard - deals with wildcard in string
  * @s1: string 1
  * @s2: string 2
  * Return: 1 or 0
  */
int helper(char *s1, char *s2);
int wildcard(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (wildcard(s1, ++s2));
	}
	else if (*s2 != '*')
	{
		if (*s1 != *s2)
		return (wildcard(++s1, s2));
	}
	else if (*s1 == *s2)
	return (helper(s1, s2));
	return (0);
}
/**
  * helper - compares two strings
  * @s1: string 1
  * @s2: string 2
  * Return: 1 or 0
  */
int helper(char *s1, char *s2)
{
	if (*s1 && *s2)
	{
		if (*s1 == *s2)
			return (helper(++s1, ++s2));
		else if (*s2 == '*')
			return (helper(s1, ++s2));
		else if (*s1 != *s2 && *s1 != '*')
			return (0);
	}
	return (1);
}
/**
  * wildcmp - compares two strings with wildcards
  * @s1: string 1
  * @s2: string 2
  * Return: 1 or 0
  */
int wildcmp(char *s1, char *s2)
{
	return (helper(s1, s2));
}
