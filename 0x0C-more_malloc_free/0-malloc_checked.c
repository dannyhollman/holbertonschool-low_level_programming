#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - allocates memory
  * @b: bytes of memory
  * Return: void pointer to malloced memory
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b <= 0)
	{
		exit(98);
	}

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
