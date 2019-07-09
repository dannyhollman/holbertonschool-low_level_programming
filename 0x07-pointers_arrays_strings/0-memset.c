#include "holberton.h"
/**
  * _memset - fills memory with a constant byte
  * @s: buffer string
  * @b: constant byte
  * @n: number of bytes to fill
  * Return: pointer to memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	int loop = 0;
	unsigned int loop2 = 0;

	while (s[loop])
	{
		loop++;
	}

	while (loop2 < n)
	{
		s[loop2] = b;
		loop2++;
	}
	return (s);
}
