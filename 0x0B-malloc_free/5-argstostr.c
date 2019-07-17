#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *
  *
  *
  *
  */
int count(char *s)
{
	int count = 0;

	char *tmp = s;

	while (*tmp)
	{
		count++;
		tmp++;
	}
	return (count);
}
char *argstostr(int ac, char **av)
{
	int loop = 0, loop2 = 0, total = 0, place = 0;

	char *array;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (loop < ac)
	{
		total += count(av[loop]);
		loop++;
	}

	loop = 1;

	array = malloc(total * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	while (av[loop][loop2])
	{
		while (av[loop][loop2])
		{
			array[place] = av[loop][loop2];
			loop2++;
		}
	printf("\n");
	loop++;
	loop2 = 0;
	}
	return (array);
}
