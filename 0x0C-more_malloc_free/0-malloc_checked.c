#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *
  *
  *
  *
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
