#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: 0 if  input correct, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int first, second;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%d\n", first * second);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
