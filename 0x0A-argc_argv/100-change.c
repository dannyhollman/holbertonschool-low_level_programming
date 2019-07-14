#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * counter - calculates minimum coins to make change
  * @coins: array of coins largest to smallest
  * @n: size of coins array
  * @total: total change needed
  * Return: minimum coins needed
  */
int counter(int coins[], int n, int total)
{
	int loop, count = 0;
	/* loop through coins largest to smallest */
	for (loop = 0; loop < n; loop++)
	{
		/* while total >= current coin */
		while (total >= coins[loop])
		{
			/* subtract coin from total */
			total = total - coins[loop];
			/* increment count */
			count++;
		}
	}
	return (count);
}
/**
  * main - takes change as input, calls function to calculate
  * minimum coins needed
  * @argc: number of inputs
  * @argv: array of inputs
  * Return: 0 if input correct, 1 otherwise
  */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	else if (argc == 2)
	{
		change = counter(coins, 5, atoi(argv[1]));
		printf("%d\n", change);
		return (0);
	}
	return (0);
}
