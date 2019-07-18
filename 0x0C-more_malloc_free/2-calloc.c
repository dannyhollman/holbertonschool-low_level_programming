#include "holberton.h"
#include <stdlib.h>
/**
  * _calloc - allocate memory for an array
  * @nmemb: number of elements in array
  * @size: size of elements in array
  * Return: void pointer to allocated memy
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int loop;

	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (loop = 0; loop <= nmemb * size; loop++)
	{
		((char *)ptr)[loop] = 0;
	}

	return (ptr);
}
