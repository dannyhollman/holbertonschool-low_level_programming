#include "holberton.h"
#include <stdio.h>
/**
  *
  *
  *
  */
char *_strncat(char *dest, char *src, int n)
{
	int loop1 = 0, loop2 = 0;

	while (*(dest + loop1) != '\0')
	{
		loop1++;
	}

	while (loop2 < n && *(src + loop2) != '\0')
	{
		*(dest + loop1) = *(src + loop2);
		loop1++;
		loop2++;
	}
	return (dest);
}
