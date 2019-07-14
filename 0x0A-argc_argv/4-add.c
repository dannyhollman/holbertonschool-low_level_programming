#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * isnumber - checks if string is number
  * @s: input string
  * Return: 1 if number, 0 otherwise
  */
int isnumber(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}
/**
  * main - adds numbers
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: 0 if input correct, 1 otherwise
  */
int main(int argc, char *argv[])
{
	unsigned int test, count = argc, loop = 1, total = 0;

	while (loop < count)
	{
		test = isnumber(argv[loop]);
		if (test == 1)
		{
			total += atoi(argv[loop]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		loop++;
	}
	printf("%d\n", total);

	return (0);
}
