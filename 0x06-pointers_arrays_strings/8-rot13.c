#include "holberton.h"
#include <stdio.h>
/**
  *
  *
  *
  */
char *rot13(char *s)
{
	int count = 0, count2 = 0;

	char swap1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	char swap2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + count) != '\0')
	{
		while (swap1[count2] != '\0')
		{
			if (*(s + count) == swap1[count2])
			{
				*(s + count) = swap2[count2];
				break;
			}
			count2++;
		}
		count2 = 0;
		count++;
	}
	return (s);
}
