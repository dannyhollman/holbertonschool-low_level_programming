#include "holberton.h"
#include <stdio.h>
/**
  * helper - determines square root
  * @n: input int
  * @x: iterator
  * Return: square root, -1 otherwise
  */
int helper(int n, int x)
{
	if ((x * x) < n)
	{
		return (helper(n, ++x));
	}
	if ((x * x) == n)
	{
		return (x);
	}
	return (-1);
}
/**
  * _sqrt_recursion - start of recursive square root function
  * @n: input number
  * Return: calls recursive function
  */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
