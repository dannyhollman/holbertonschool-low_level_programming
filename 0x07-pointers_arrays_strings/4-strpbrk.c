#include "holberton.h"
/**
  * _strpbrk - searches a string for any of a set bytes
  * @s: string to search
  * @accept: bytes to search for
  * Return: pointer to matching byte, or NULL
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
