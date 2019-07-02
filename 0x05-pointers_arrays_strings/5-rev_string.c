#include "holberton.h"
/**
  * rev_string - reverse string
  *
  * @s: input string
  *
  * Return: void
  */
void rev_string(char *s)
{
	int count = 0, start = 0;

	char temp1, temp2;

	while (s[count] != '\0')
	{
		count++;
	}

	for (start = 0; start < count; start++)
	{
		temp1 = s[start];
		temp2 = s[count - 1];
		s[start] = temp2;
		s[count - 1] = temp1;
		count--;
	}
}
