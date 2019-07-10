#include "holberton.h"
/**
  * factorial - returns the factorial of an int
  * @n: input int
  * Return: factorial of input
  */
int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
		return (-1);
	else
		return (0);
}
