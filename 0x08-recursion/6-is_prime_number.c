#include "holberton.h"
/**
  *
  *
  *
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
int is_prime_number(int n)
{
	return (helper(n, n/2));
}
