#include "holberton.h"
/**
  * helper - checks if int is prime
  * @n: input number
  * @i: input / 2
  * Return: 1 if prime, 0 otherwise
  */
int helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (helper(n, i - 1));
		}
	}
}
/**
  * is_prime_number - start of recursive function to test if int is prime
  * @n: input number
  * Return: 1 if prime, 0 otherwise
  */
int is_prime_number(int n)
{
	return (helper(n, n / 2));
}
