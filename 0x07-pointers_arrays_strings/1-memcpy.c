#include "holberton.h"
/**
  *
  *
  *
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int loop = 0;
	
	while (loop <= n)
	{
		dest[loop] = src[loop];
		loop++;
	}
	return (dest);
}
