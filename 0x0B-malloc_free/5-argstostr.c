#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * count - finds length of string
  * @s: input string
  * Return: string length
  */
int count(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	return (count + 1);
}
/**
  * argstostr - concatenates all arguments
  * @ac: number of arguments
  * @av: array of arguments
  * Return: pointer to concatenated string
  */
char *argstostr(int ac, char **av)
{
	int loop = 0, loop2 = 0, place = 0, size = 0;

	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (av[loop])
	{
		size += count(av[loop]);
		loop++;
	}
	array = malloc(size + 1);
	if (array == NULL)
		return (NULL);
	loop = 0;
	while (av[loop])
	{
		if (loop != 0)
		{
			array[place] = '\n';
			place++;
		}
		while (av[loop][loop2])
		{
			array[place] = av[loop][loop2];
			loop2++;
			place++;
		}
		loop2 = 0;
		loop++;
	}
	array[place] = '\n';


	return (array);
}
