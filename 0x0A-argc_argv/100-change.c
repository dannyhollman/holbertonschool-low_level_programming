#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * counter - counts the number of coins needed to make change
  * @total: total amount needed
  * @count: total of coins so far
  * Return: 1 for each coin used, 0 if no coins used
  */
int counter(int total, int count)
{
	if (count + 25 <= total)
		return (1 + counter(total, count + 25));
	else if (count + 10 <= total)
		return (1 + counter(total, count + 10));
	else if (count + 5 <= total)
		return (1 + counter(total, count + 5));
	else if (count + 2 <= total)
		return (1 + counter(total, count + 2));
	else if (count + 1 <= total)
		return (1 + counter(total, count + 1));
	else
		return (0);
}
/**
  * main - checks if input is correct, calls counter function
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: 0 if input is correct, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int coins;

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (argc == 2)
	{
		coins = (counter(atoi(argv[1]), 0));
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
