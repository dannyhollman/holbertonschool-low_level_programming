#include "holberton.h"
#include <stdio.h>
/**
  *
  *
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
