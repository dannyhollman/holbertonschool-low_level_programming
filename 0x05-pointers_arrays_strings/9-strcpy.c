#include "holberton.h"
/**
  * _strcpy - copy string 
  *
  * @dest: destination
  *
  * @src: source
  *
  * Return: copied string
  */
char *_strcpy(char *dest, char *src)
{
	int count = 0, loop;

	while (src[count] != '\0')
	{
		count++;
	}

	for (loop = 0; loop <= count; loop++)
	{
		dest[loop] = src[loop];
	}
	return (dest);
}
