#include "holberton.h"
#include <stdio.h>
/**
  * check_string - checks if string matches needle
  * @s: input string
  * @needle: substring to check against
  * Return: 1 if match, 0 otherwise
  */
int check_string(char *s, char *needle)
{
	int loop = 0, count = 0;

	while (needle[count])
	{
		count++;
	}
	while (loop < count)
	{
		if (s[loop] != needle[loop])
			return (0);
		loop++;
	}
	return (1);
}
/**
  * _strstr - locates a substring
  * @haystack: input string
  * @needle: substring to search for
  * Return: pointer to start of substring, NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	int check;
	
	char *start = haystack;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			check = check_string(haystack, needle);
			if (check == 1)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (start);
}
