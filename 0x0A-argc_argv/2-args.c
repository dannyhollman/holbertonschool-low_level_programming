#include "holberton.h"
#include <stdio.h>
/**
  * main - prints all arguments
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int total = argc, i = 0;

	while (i < total)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
