#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *
  *
  *
  *
  */
char *argstostr(int ac, char **av)
{


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	printf("%s\n", av);
	return NULL;
}
