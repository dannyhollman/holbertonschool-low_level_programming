#include "holberton.h"
/**
  * _strpbrk -
  *
  *
  */
char *_strpbrk(char *s, char *accept)
{
	int loop = 0;

	while (*s)
	{
		while (accept[loop])
		{
			if (*s == accept[loop])
				return (s);
			loop++;
		}
		s++;
		loop = 0;
	}
	return (0);
}
