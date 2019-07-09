#include "holberton.h"
/**
  * _memcpy - copies memory area
  * @dest: destination string
  * @src: source string
  * @n: number of bytes
  * Return: pointer to altered string
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int loop = 0;

	while (loop < n)
	{
		dest[loop] = src[loop];
		loop++;
	}
	return (dest);
}
