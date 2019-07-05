#include "holberton.h"
/**
  * _strcat - concatenates two strings
  *
  * @dest: destination string
  *
  * @src: source string
  *
  * Return: pointer to destination string
  */
char *_strcat(char *dest, char *src)
{
	int loop1 = 0, loop2 = 0;

	while (*(dest + loop1) != '\0')
	{
		loop1++;
	}

	while (*(src + loop2) != '\0')
	{
		*(dest + loop1) = *(src + loop2);
		loop1++;
		loop2++;
	}
	return (dest);
}
